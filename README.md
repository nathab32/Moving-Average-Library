
# Moving Average Library

Arduino library which takes a moving average of a set of data. The library allows for custom data type and moving average length, making calculations more efficient and able to adapt to different situations.

## Usage

1. Use `#include "MovingAverage.h"` to include the library into your program
2. Create an object using `MovingAverage<data_type> avg(length);` where `data_type` is the desired variable type, and `length` is the length of moving average.
3. Add data x to the moving average by calling `avg.update(x)`. This also returns the new average.
4. Alternatively, the average can be received by calling `avg.getAverage()`.

## Example

![Example output](https://raw.githubusercontent.com/nathab32/Moving-Average-Library/refs/heads/main/images/example_output.png)

The `example.cpp` file outputs uses the Moving Average Library to average a noisy sine wave function as shown.
