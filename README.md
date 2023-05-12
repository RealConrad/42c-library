<div align="center">
<h1>
    <p>
        📗 C Library
    </p>
</h1>

<p>
    <b><i>My C library that consists of Libft, Printf and GNL and more.</i></b>
</p>
<p>
    Made in&nbsp&nbsp
    <a href="https://skillicons.dev">
        <img src="https://skillicons.dev/icons?i=c,vscode,git" />
    </a>
</p>
</div>
<br />

# Features
- Includes all functions from [Libft](https://github.com/RealConrad/42libft.git)
- Includes my own version of [printf](https://github.com/RealConrad/42printf.git)
- Includes [get_next_line](https://github.com/RealConrad/42get-next-line.git) project.
- All functions are defined by doxygen comments to explain their purpose and enhance readability.
- Makefile to compile the library

# Installation
1. Clone the repository
```shell
git clone https://github.com/RealConrad/42c-library.git
```

2. Enter directory
```shell
cd 42c-library
```

3. Create the library and clean up
```shell
make
make clean
```

# Usage
> Make sure you run `make` before compiling, else you will get errors!
1. Add the header file
```shell
include "libft_main.h" // # include <path-to-header-file>
```
2. Compile with the following flags
```shell
cc -Wall -Wextra -Werror <your-file> libft.a
```
## Examples
**File: main.c**
```c
# include "libft_main.h"

int main() {
    char *s = "Hello World!";
    int  length = ft_strlen(s);

    ft_printf("Length: %d\n", length);
    return (0);
}
```
Compiling:
```shell
cc -Wall -Wextra -Werror main.clibft.a
```

# License
[MIT](https://choosealicense.com/licenses/mit/)
