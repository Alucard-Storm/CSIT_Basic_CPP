# Solution: Class Definition Errors

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 8**: `}` should be `};`.
   A class definition must end with `};`.
2. **near the top**: a line is missing; it should be `public:`.
   Without `public:` the constructor and `area()` are private, so `main` cannot use them.
3. **line 13**: `Circle c;` should be `Circle c(2.0);`.
   The only constructor takes a `double`; an object cannot be created with no argument.
