# Solution: Undeclared Names and Scope

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **near the top**: a line is missing; it should be `int sum = 0;`.
   `sum` is used but never declared.
2. **line 9**: `cnt++;` should be `count++;`.
   Misspelled variable name: `cnt` does not exist, `count` does.
3. **line 7**: a line is missing; it should be `int square = 0;`; `int square = i * i;` should be `square = i * i;`.
   `square` is declared *inside* the loop body, so it does not exist after the loop. Declare it before the loop.
