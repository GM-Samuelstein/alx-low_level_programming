<h1 align="center">0x0A: ARGC ARGV</h1>

<h2>Learning Objectives</h2>
<ul>
  <li>How to use arguments passed to your program.</li>
  <li>What are two prototypes of <code>main</code> that you know of, and in which case do you use one or the other.</li>
  <li>How to use <code>__attribute__((unused))</code> or <code>(void)</code> to compile functions with unused variables or parameters.</li>
</ul>

|File name|Description|
|---|---|
|[**0-whatsmyname.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)|*This program prints its name, followed by a new line. If the program is renamed, it prints the new name, without having to compile it again*|
|[**1-args.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)|*This program prints the number of arguments passed into it. <ul>It prints a number, followed by a new line.</ul>*|
|[**2-args.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)|*This program prints all arguments it receives. <ul><li>All arguments are printed, including the first one.</li> <li>Only one argument is printed per line, ending with a new line.</li></ul>*|
|[**3-mul.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)|*This program multiplies two numbers. <ul><li>The program prints the result of the multiplication, followed by a new line.</li> <li>If the program does not receive two arguments, the program prints `Error`, followed by a new line, and returns `1`.</li></ul>*|
|[**4-add.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/4-add.c)|*This program adds positive numbers. <ul><li>It prints the result, followed by a new line.</li> <li>If no number is passed to the program, it prints `0`, followed by a new line.</li> <li>If one of the number contains symbols that are not digits, it prints `Error`, followed by a new line, and returns `1`.</li></ul>*|
|[**100-change.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/100-change.c)|*This program prints the minimum number of coins to make change for an amount of money. <ul><li>where `cents` is the amount of cents needed to be given back.</li><li>If the number of arguments passed to the program is not exactly `1`, the program prints `Error`, followed by a new line, and returns `1`.</li><li>`atoi` is used to parse the parameter passed to the program.</li><li>If the number passed as the argument is negative, it prints `0`, followed by a new line.</li><li>An unlimited number of coins of values 25, 10, 5, 2, and 1 cent can be used.</li></ul>*|
|[**main.h**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0A-argc_argv/main.h)|*A header file, containing prototypes of all functions used and the prototype of the function `_putchar`.*|
