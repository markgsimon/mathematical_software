# MathLib

C++ library providing basic arithmetic and a few elementary math functions in the `MathLib` namespace.

## Implemented Functions

### Basic Arithmetic
- `add(double a, double b)`
- `subtract(double a, double b)`
- `multiply(double a, double b)`
- `divide(double a, double b)` — throws `std::runtime_error("Division by zero")`

### Elementary
- `pow(double base, double exp)` — thin wrapper around `std::pow`
- `absolute_value(double x)`

## Usage Example

```cpp
#include "mathlib.h"

double result = MathLib::add(2.0, 3.5);
double safe = MathLib::divide(10.0, 2.0);
```

## Not Yet Implemented
nth_root, factorial, gcf, sine, cosine, and others (see mathlib.h).
