# Solution: Logic Bug: Wrong Average

The corrected program is [`fixed.cpp`](fixed.cpp).

1. **line 7**: `int i = 1; i < 4` should be `int i = 0; i < 4`.
   The loop starts at index 1, so `marks[0]` is never added. Arrays start at index 0.
2. **line 10**: `sum / 4` should be `static_cast<double>(sum) / 4`.
   `sum / 4` is *integer* division, so the fraction is discarded before it is stored in a `double`.
