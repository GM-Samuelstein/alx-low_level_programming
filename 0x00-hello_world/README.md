<h1 align="center">0x00.C</h1>
HELLO WORLD

<h2>Resources</h2>
<h3>Read</h3>

<h3>Watch</h3>

<h2>Learning Objectives</h2>
<ul>
<li>Why C programming is awesome.</li>
<li>Who invented C.</li>
<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds.</li>
<li>What happens when you type <code>gcc main.c</code></li>
<li>What is an entry point.</li>
<li>What is <code>main</code>.</li>
<li>How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code>.</li>
<li>How to get the size of a specific type using the unary operator <code>sizeof</code>.</li>
<li>How to compile using <code>gcc</code>.</li>
<li>What is the default program name when compiling with <code>gcc</code>.</li>
<li>What is the official C coding style and how to check your code with <code>betty-style</code>.</li>
<li>How to find the right header to include in your source code when using a standard library function.</li>
<li>How does the <code>main</code> function influence the return value of the program.</li>
</ul>

<h2 align="center">Tasks</h2>

|File name|Details|
|---|---|
|[**0-preprocessor**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor)|Write a script that runs a C file through the preprocessor and save the result into another file.<ul><li>The C file name will be saved in the variable `$CFILE`.</li><li>The output should be saved in the file `c`.</li></ul>|
|[**1-compiler**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler)|Write a script that compiles a C file but does not link.<ul><li>The C file name will be saved in the variable `$CFILE`.</li><li>The output file should be named the same as the C file, but with the extension `.o` instead of `.c`. <ul><li>Example: if the C file is `main.c`, the output file should be `main.o`</li></ul></li></ul>|
|[**2-assembler**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler)|Write a script that generates the assembly code of a C code and save it in an output file.<ul><li>The C file name will be saved in the variable `$CFILE`.</li><li>The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.<ul><li>Example: if the C file is `main.c`, the output file should be `main.s`</li></ul></li></ul>|
|[**3-name**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/3-name)|Write a script that compiles a C file and creates an executable named `cisfun`. <ul><li>The C file name will be saved in the variable `$CFILE`.</li></ul>|
|[**4-puts.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/4-puts.c)|Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.<ul><li>Use the function `puts`.</li><li>You are not allowed to use `printf`.</li><li>Your program should end with the value `0`.</li></ul>|
|[**5-printf.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c)|Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.<ul><li>Use the function `printf`.</li><li>You are not allowed to use the function `puts`.</li><li>Your program should return `0`.</li><li>Your program should compile without warning when using the `-Wall gcc` option.</li></ul>|
|[**6-size.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/6-size.c)|Write a C program that prints the size of various types on the computer it is compiled and run on.<ul><li>You should produce the exact same output as in the example below this table.</li><li>Warnings are allowed.</li><li>Your program should return `0`.</li><li>You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option.</li></ul>|
|[**100-intel**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/100-intel)|Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.<ul><li>The C file name will be saved in the variable `$CFILE`.</li><li>The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.<ul><li>Example: if the C file is `main.c`, the output file should be `main.s`.</li></ul></li></ul>|
|[**101-quote.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c)|Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.<ul><li>You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`.</li><li>Your program should return `1`.</li><li>Your program should compile without any warnings when using the `-Wall gcc` option.</li></ul>|

<h3>Example 6-size.c</h3>

```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
