# Solution: Stream Operators and for-loop Syntax

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 7**: `cin << n;` should be `cin >> n;`.
   Input uses `>>` (extraction); `<<` is for output.
2. **line 8**: `for (int i = 1, i <= n, i++) {` should be `for (int i = 1; i <= n; i++) {`.
   The three parts of a `for` header are separated by semicolons, not commas.
3. **line 9**: `cout >> i >> " ";` should be `cout << i << " ";`.
   Output uses `<<` (insertion); `>>` is for input.
