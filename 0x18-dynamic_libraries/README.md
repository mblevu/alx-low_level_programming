# PROJECT: 0x18. C - Dynamic libraries

## AUTHOR: *Basil Bassey*

*In partial fulfillment to course requirements of the ALX Software Engineering Program, `alx-low_level_programming`.*

## Resources

**Read  or watch**:

- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://intranet.alxswe.com/rltoken/XLLmLISlteUIxrLzNdm3_Q)
- [create dynamic libraries on Linux](https://intranet.alxswe.com/rltoken/JEqzgE_pPe48rvbspGL-2g)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/kQg2-u-cAYxh6oJz2TWHWw), **without the help of Google**:

### General

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage `nm`, `ldd`, `ldconfig`

## Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### C

- Allowed editors: `vi`, `vim`, `emacs`.
All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using [betty-style.p](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl).
- You are not allowed to use global variables.
- No more than 5 functions per file.
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.

### Bash

- Allowed editors: `vi`, `vim`, `emacs`
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
- The first line of all your files should be exactly `#!/bin/bash`
- A `README.md` file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

## Task lists

0. `libdynamic.so`, `main.h` - ***0. A library is not a luxury but one of the necessities of life*** : Creates the dynamic library libdynamic.so
1. `1-create_dynamic_lib.sh` - ***1. Without libraries what have we? We have no past and no future*** : a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
2. `100-operations.so`  - ***2. Let's call C functions from Python*** : Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
3. `101-make_me_win.sh` - ***3. Code injection: Win the Giga Millions!*** : I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

![meme](http://4.bp.blogspot.com/-9rqm8Pg1apY/UZHoC79xXtI/AAAAAAAACOs/0Fp4A4ipUqM/s320/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg)
