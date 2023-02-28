# get_next_line | rank 1 | 42 Porto

## 📋 About 

This project consists of reading a file (fd) line by line. During the development, I could learn a lot about how static variables work and how can I use them properly, as well as how files are opened, read and closed. One of my biggest challenges (and learnings!) during the project was how to deal with memory leaks and use `valgrind` to detect and analyse it.   

## 🎮 The game

- The player’s goal is to collect every collectible present on the map, then escape
chosing the shortest possible route.
- The player should be able to move in these 4 directions: up, down, left, right.
- The player should not be able to move into walls.
- At every move, the current number of movements must be displayed in the shell (or on the screen, for bonus!).
- You have to use a 2D view (top-down or profile)

You can also take a look in the [complete subject]. 

## 🚨 Disclaimer 
Maybe you could notice a different coding style. At 42 schools we need to follow some rules like:
- The usage of for, do while, switch, case is not allowed<p> 
- Functions with more than 25 lines are not allowed <p> 
- Variables declarations and assigns in the same line are not allowed <p> 
    
## ⚙️ Compilation

To compile and run the project at the same time it's very easy, you can just follow the syntax below: 

```sh
$ make run arg=path_to_the_map_file.ber
```
Make sure you have the right path of the map, if you prefer you can also test the project with some of the maps that I have available in `/maps`. 
For this, you can run one of the following commands in the terminal: 
  
```sh
$ make run arg=maps/valid1.ber
```
```sh
$ make run arg=maps/valid2.ber
```
  
## 💻 Languages & Tools
<p align="left">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=c,Makefile" />
  </a>
  </p>
</p>
