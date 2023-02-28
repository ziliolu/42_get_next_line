# get_next_line | rank 1 | 42 Porto

## 📋 About 

This project consists of reading a file (fd) line by line. During the development, I could learn a lot about how static variables work and how can I use them properly, as well as how files are opened, read and closed. One of my biggest challenges (and learnings!) during the project was how to deal with memory leaks and use `valgrind` to detect and analyse it.   

## :bookmark_tabs: Info
### Mandatory part
- [x] Repeated calls (e.g., using a loop) to your get_next_line() function should let you read the text file pointed to by the file descriptor, one line at a time.
- [x] Your function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.
- [x] Make sure that your function works as expected both when reading a file and when reading from the standard input.
- [x] The returned line should include the terminating \n character, except if the end of file was reached and does not end with a \n character.
### Bonus part
- [x] Develop get_next_line() using only one static variable.
- [x]  Your get_next_line() can manage multiple file descriptors at the same time. For example, if you can read from the file descriptors 3, 4 and 5, you should be
able to read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd. It means that you should be able to call get_next_line() to read from fd 3, then fd 4, then 5, then once again 3, once again 4, and so forth.

You can also take a look in the [complete subject]. 

## 🚨 Disclaimer 
Maybe you could notice a different coding style. At 42 schools we need to follow some rules like:
- The only three external functions allowed during this project were `read`, `malloc`, `free`.
- The usage of for, do while, switch, case is not allowed. 
- Functions with more than 25 lines are not allowed.
- Variables declarations and assigns in the same line are not allowed.

## ⚙️ Compilation

This project doesn't have a Makefile. But you can compile and test it using the following syntax: 
  
## 💻 Languages & Tools
<p align="left">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=c,Makefile" />
  </a>
  </p>
</p>
