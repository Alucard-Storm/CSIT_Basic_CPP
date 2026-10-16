# Solution: Type Mismatches

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 6**: `int age = "19";` should be `int age = 19;`.
   A text literal (`"19"`) cannot initialise an `int`.
2. **line 7**: `string name = 'Asha';` should be `string name = "Asha";`.
   Single quotes are for exactly one `char`; text needs double quotes.
3. **line 8**: `char grade = "A";` should be `char grade = 'A';`.
   Double quotes make a string; a `char` needs single quotes.
