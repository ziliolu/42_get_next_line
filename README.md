<p align="center">
  <img src="https://img.shields.io/github/languages/top/ziliolu/42_get_next_line?color=#FFFFFF&style=flat-square" />
  <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?color=#FFFFFF&style=flat-square" />
  <img src="https://img.shields.io/badge/status-finished-success?color=#FFFFFF&style=flat-square" />
  <img src="https://img.shields.io/github/last-commit/ziliolu/42_get_next_line?color=#FFFFFF&style=flat-square" />
</p>

## Table of Contents

1. [About](#about)
2. [Installation](#installation)
4. [Testers](#testers)
5. [Disclaimer](#disclaimer)

## About

The "so_long" project is a part of 42's curriculum and involves creating a 2D game using C programming language and the MinilibX graphic library. The game requires players to navigate through a maze, collecting items and avoiding obstacles.

The project includes learning about file descriptors (fd) and their use in reading from a map file as well as how to deal with structs. These are important concepts in C programming, and this project provides an opportunity to practice both in a fun and engaging way.

[Click here](https://github.com/ziliolu/42_so_long/blob/main/so_long_subject.pdf) to access the complete subject of this project.
## Installation

To install and play So_long, follow these steps:

1. Clone the repository:
  ```bash
  git clone git@github.com:ziliolu/42_so_long.git
  ```
2. Navigate to the project directory and compile it:
  ```bash
  cd so_long && make
  ```
3. Choose a map from `maps` folder or test with your own map
  ```bash
  ./42_so_long maps/valid1.ber
  ```
  ```bash
  ./42_so_long path_to_your_own_map
  ```

## Testers 

1. [Map Validator](https://github.com/Nuno-Jesus/so_long_map_validator) serves as an essential tool to validate and verify the format and correctness of the map, guaranteeing a reliable gameplay experience.
   
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
