# Solution: Function Declaration and Call Errors

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **near the top**: a line is missing; it should be `int add(int a, int b);`.
   The function is used in `main` before the compiler has seen it. Add a prototype above `main` (or move the definition up).
2. **line 6**: `add(10)` should be `add(10, 20)`.
   `add` needs two arguments; only one was supplied.
3. **line 10**: `int add(int a, b) {` should be `int add(int a, int b) {`.
   Every parameter needs its own type: `int a, int b`.
