# mathematical_software

C++ library and CLI for elementary arithmetic and numeric utilities. The active component is **CAS Mathlib** (`cas::math`): a small static library with a REPL front-end. Older standalone code lives under `deprecated/`.

## Platform

| Requirement | Version |
|---|---|
| C++ compiler | C++17 |
| CMake | 3.14+ |
| GoogleTest | required for unit tests |

Tested on macOS with Apple Clang and Homebrew-provided GoogleTest (`brew install googletest`). On Linux, install `libgtest-dev` (or equivalent) so `find_package(GTest REQUIRED)` resolves.

**Targets**

| Target | Type | Description |
|---|---|---|
| `cas_math` | static library | `cas::math` API |
| `mathcli` | executable | interactive CLI |
| `cas_unit_tests` | executable | GoogleTest suite |

## Build

Configure and build from the repo root:

```bash
cmake -S . -B build
cmake --build build
```

Build a single target:

```bash
cmake --build build --target cas_math    # library only
cmake --build build --target mathcli     # CLI only
cmake --build build --target cas_unit_tests
```

Release build:

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Tests

Tests are registered with CTest and run separately from the build step:

```bash
ctest --test-dir build --output-on-failure
```

Run the test binary directly:

```bash
./build/cas_unit_tests
```

## CLI

```bash
./build/mathcli
```

Interactive REPL. Commands take numeric arguments separated by spaces.

```
========= My Math CAS CLI =======
Type 'help' for commands, or 'exit' to quit;

> help
Commands:
add 5 3
subtract 7 3
multiply 5 4
divide 12 6
pow 2 3
abs -5
help / exit

> add 2 3
5
> pow 2 3
8
> abs -7
7
> divide 10 0
<throws std::runtime_error>
> exit
```

| Command | Args | Maps to |
|---|---|---|
| `add` | `a b` | `cas::math::add` |
| `subtract` | `a b` | `cas::math::subtract` |
| `multiply` | `a b` | `cas::math::multiply` |
| `divide` | `a b` | `cas::math::divide` |
| `pow` | `base exp` | `cas::math::pow` |
| `abs` | `x` | `cas::math::absolute_value` |
| `help` | — | print command list |
| `exit` / `quit` | — | quit |

## Library API

Namespace: `cas::math`  
Header: `include/cas/math/mathlib.h`  
CMake target: `cas_math`

```cpp
#include "cas/math/mathlib.h"

double sum = cas::math::add(2.0, 3.0);
```

### Implemented

| Function | Signature | Notes |
|---|---|---|
| `add` | `double add(double a, double b)` | |
| `subtract` | `double subtract(double a, double b)` | |
| `multiply` | `double multiply(double a, double b)` | |
| `divide` | `double divide(double a, double b)` | throws `std::runtime_error` on `b == 0` |
| `absolute_value` | `double absolute_value(double x)` | |
| `pow` | `double pow(double base, double exp)` | delegates to `std::pow` |

### Planned (commented in header, not implemented)

- `nth_root(double radix, double radicand)`
- `factorial(double a)`
- `gcf(int a, int b)`
- `sine(double x)`, `cosine(double x)`

### Linking

When consuming `cas_math` from another CMake project:

```cmake
add_subdirectory(path/to/mathematical_software)
target_link_libraries(your_target PRIVATE cas_math)
```

`cas_math` exports `include/` as a public include directory.