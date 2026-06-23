# mathematical_software

Repo to house various pieces of mathematical software.

## mathlib

Lightweight C++ math library under the `MathLib` namespace, with a simple interactive CLI.

### Building and Running the CLI

```bash
cd mathlib
g++ main.cpp mathlib.cpp -o mathcli
./mathcli
```

### CLI Usage

Interactive REPL:

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
<throws runtime error>
> exit
```

Supported commands (from code):
- `add a b`
- `subtract a b`
- `divide a b`
- `pow base exp`
- `abs x`
- `help`, `exit` / `quit`

Note: `multiply` appears in the help text but is not wired to the command handler yet.

See [mathlib/README.md](mathlib/README.md) for library functions.
