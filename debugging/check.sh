#!/usr/bin/env bash
# Verifies every debugging lab:
#   - fixed.cpp compiles without warnings and reproduces expected.txt
#   - buggy.cpp still fails to compile (syntax labs), or compiles but prints
#     something different from expected.txt (logic labs)
# Run from anywhere:  bash debugging/check.sh
cd "$(dirname "$0")" || exit 1
tmp=$(mktemp -d); trap 'rm -rf "$tmp"' EXIT
CXXFLAGS="-std=c++17 -Wall -Wextra"
fail=0
for d in [0-9][0-9]-*/; do
  d=${d%/}; in=/dev/null; [ -f "$d/input.txt" ] && in="$d/input.txt"
  if ! out=$(g++ $CXXFLAGS -o "$tmp/fixed" "$d/fixed.cpp" 2>&1) || [ -n "$out" ]; then
    echo "FAIL $d: fixed.cpp does not compile cleanly"; fail=1; continue; fi
  "$tmp/fixed" < "$in" | cmp -s - "$d/expected.txt" || { echo "FAIL $d: fixed.cpp output differs from expected.txt"; fail=1; continue; }
  if g++ $CXXFLAGS -o "$tmp/buggy" "$d/buggy.cpp" >/dev/null 2>&1; then
    if "$tmp/buggy" < "$in" | cmp -s - "$d/expected.txt"; then
      echo "FAIL $d: buggy.cpp already gives the expected output"; fail=1; continue; fi
    echo "ok   $d (logic bug: compiles, wrong output)"
  else
    echo "ok   $d (syntax bug: does not compile)"
  fi
done
exit $fail
