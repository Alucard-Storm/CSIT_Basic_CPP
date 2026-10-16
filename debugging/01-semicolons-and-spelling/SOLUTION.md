# Solution: Semicolons and Spelling

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 5**: `int a = 5` should be `int a = 5;`.
   A statement is missing its closing semicolon. The compiler reports the error on the *next* line.
2. **line 7**: `Cout <<` should be `cout <<`.
   C++ is case-sensitive: the stream is `cout`, not `Cout`.
3. **line 8**: `return 0` should be `return 0;`.
   `return 0` needs a semicolon.
