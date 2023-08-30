# Arduino SineBench
## Simple Arduino benchmark for (almost?) any MCU you can flash

_It just calculates a bunch of random sines. Thats all._

Here's some examples with default parameters:
|Chip|Bench time (us)|Bench time (ms)|Bench time(s)|Additional parameters|
|----|---------|---|---|---|
|Atmega328P|37962188|37962|37|None|
|ESP32|551324|551|0.5|@240MHz|
|ESP32|792844|792|0.8|@160MHz|
|LGT8F328P|17413526|17413|17|@32MHz|
|STM32F401RCT6|777860|777|0.7|@84MHz, -Os optimization|
|STM32F401RCT6|376148|376|0.3|@84MHz, -O3 LTO|


_*You may also send your benchmarks!*_
