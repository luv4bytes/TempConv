# TempConv
C++ library for converting temperatures.

## Using the library

```cpp
#include <iostream>
#include "TempConv.h"

using namespace TempConv;

int main()
{
	Converter conv;
	
	double celsius = conv.Convert(Converter::UNITS::CELSIUS, 2, Converter::UNITS::FAHRENHEIT);
	
	std::cout << celsius << std::endl;
	
	return 0;
}
```