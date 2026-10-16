# Solution: Braces, Parentheses and Quotes

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 9**: `if (marks >= 40 {` should be `if (marks >= 40) {`.
   The condition's closing parenthesis is missing.
2. **line 6**: `cout << "Enter marks: ;` should be `cout << "Enter marks: ";`.
   The string literal has no closing double quote, so the rest of the line is swallowed into the string.
3. **line 14**: a line is missing right after `return 0;`.
   The closing brace of `main` is missing (compiler says `expected '}' at end of input`).
