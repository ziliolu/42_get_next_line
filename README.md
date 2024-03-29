<p align="center">
  <img src="https://img.shields.io/github/languages/top/ziliolu/42_get_next_line?color=#FFFFFF&style=flat-square" />
  <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=#FFFFFF&style=flat-square" />
  <img src="https://img.shields.io/badge/status-finished-success?color=#FFFFFF&style=flat-square" />
  <img src="https://img.shields.io/github/last-commit/ziliolu/42_get_next_line?color=#FFFFFF&style=flat-square" />
</p>

## Table of Contents

1. [About](#about)
2. [Installation](#installation)
5. [Disclaimer](#disclaimer)

## About

The get_next_line project is a function in C that allows you to read one line at a time from a file or an input stream, such as standard input. The function should handle different file descriptors and read from multiple file descriptors without losing the reading thread.

The function get_next_line takes a file descriptor as a parameter and returns the next line from the corresponding file. Each time the function is called, it reads from the file until it finds a newline character ('\n') or reaches the end of the file. It then returns the line as a string, including the newline character, or NULL if there are no more lines to read or if an error occurs.

#### Prototype
`char *get_next_line(int fd);`
#### Return value
Read line: correct behavior
NULL: nothing else to read or an error occurred
#### External allowed functions
`read`, `malloc`, `free`

#### Mandatory part 

- [X] Repeated calls (e.g., using a loop) to your get_next_line() function should let
you read the text file pointed to by the file descriptor, one line at a time.
- [X] Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.
- [X] Make sure that your function works as expected both when reading a file and when reading from the standard input.
- [X] Please note that the returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.
- [X] Your header file get_next_line.h must at least contain the prototype of the get_next_line() function.
- [X] Add all the helper functions you need in the get_next_line_utils.c file.

#### Bonus part
- [X] Develop get_next_line() using only one static variable.
- [X] Your get_next_line() can manage multiple file descriptors at the same time. For example, if you can read from the file descriptors 3, 4 and 5, you should be able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd.

[Click here](https://github.com/ziliolu/42_so_long/blob/main/get_next_line_subject.pdf) to access the complete subject of this project.

## Installation

To install and use Get Next Line, follow these steps:

1. Clone the repository:
  ```bash
  git clone git@github.com:ziliolu/42_get_next_line.git
  ```
2. Add to your own project by including the library:
  ```bash
  #include "get_next_line.h"
  ```
3. Call the function passing the fd that should be read:
  ```bash
  get_next_line(fd) //it will return a char *
  ```
4. You can also run my own test by compiling and running it:
  ```bash
  cc get_next_line.c get_next_line_utils.c main.c && ./a.out
  ```
   
## Disclaimer 

Maybe you could notice a different coding style.
At 42 we need to follow some rules according to the coding standard of the school such as:

```bash
- No for, do while, switch, case or goto 
- No functions with more than 25 lines 
- No more than 5 functions per each file
- No more than 5 variables in the same function
- No assigns and declarations assigns in the same line
```
[Click here](https://github.com/MagicHatJo/-42-Norm/blob/master/norme.en.pdf) to read the norm file of 42 school. 
