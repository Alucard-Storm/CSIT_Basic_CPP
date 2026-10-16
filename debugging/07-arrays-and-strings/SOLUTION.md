# Solution: Array and String Errors

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 6**: `{70, 80, 90, 100}` should be `{70, 80, 90}`.
   Four initialisers for a three-element array.
2. **line 7**: `string city = 'Pune';` should be `string city = "Pune";`.
   Text needs double quotes.
3. **line 10**: `marks(i)` should be `marks[i]`.
   Arrays are indexed with square brackets; round brackets mean a function call.
