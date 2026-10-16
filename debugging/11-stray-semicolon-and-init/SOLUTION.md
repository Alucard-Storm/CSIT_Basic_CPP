# Solution: Logic Bug: Stray Semicolon and Initial Value

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 6**: `for (i = 1; i <= 3; i++); {` should be `for (i = 1; i <= 3; i++) {`.
   The `;` right after the `for (...)` is an empty loop body. The loop only counts, then the braces run once.
2. **line 10**: `int fact = 0;` should be `int fact = 1;`.
   A product accumulator must start at 1; starting at 0 makes every product 0.
