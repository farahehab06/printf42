# ft_printf

## Description

The `ft_printf` project is a recreation of the standard C library function `printf()`. The goal is to understand variadic functions in C and handle formatted output using different conversion specifiers.

This project is part of the 42 School curriculum.

## Supported Conversions

The implementation supports the following format specifiers:

- `%c` — Prints a single character.
- `%s` — Prints a string.
- `%p` — Prints a pointer address in hexadecimal format.
- `%d` — Prints a decimal integer.
- `%i` — Prints an integer.
- `%u` — Prints an unsigned decimal integer.
- `%x` — Prints a number in lowercase hexadecimal.
- `%X` — Prints a number in uppercase hexadecimal.
- `%%` — Prints a percent sign.

## Compilation

Clone the repository and enter the project directory:

```bash
git clone <git@github.com:farahehab06/printf42.git>
cd ft_printf
```

Compile the library using:


make


This generates the static library:

```text
libftprintf.a
```

## Usage

Include the header file in your C source code:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lftprintf -o program
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

## Makefile Rules

- `make` — Compiles the library.
- `make clean` — Removes object files.
- `make fclean` — Removes object files and the compiled library.
- `make re` — Recompiles the project from scratch.


## Learning Objectives

- Understand variadic functions using `va_list`, `va_start`, `va_arg`, and `va_end`.
- Work with format specifiers and formatted output.
- Improve memory management and code organization in C.
- Create and use a static library.
- Follow the 42 Norm coding standard.

## Author

fabuassa

42 Amman
