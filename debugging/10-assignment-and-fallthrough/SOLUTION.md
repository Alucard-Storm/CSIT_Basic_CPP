# Solution: Logic Bug: = vs == and Missing break

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 8**: `if (n = 10)` should be `if (n == 10)`.
   `=` assigns 10 to `n` (and is always true); `==` compares. Read the compiler **warning**.
2. **line 18**: a line is missing right after `cout << "remainder 1" << endl;`.
   Without `break`, execution falls through into the next case.
