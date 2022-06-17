<h1 align="center">0x04: MORE FUNCTIONS NESTED LOOPS</h1>

<h2>Learning Objectives</h2>
<ul>
  <li>What are nested loops and how to use them.</li>
  <li>What is a function and how do you use functions.</li>
  <li>What is the difference between a declaration and a definition of a function.</li>
  <li>What is a prototype.</li>
  <li>Scope of variables.</li>
  <li>What are the <code>gcc</code> flags <code>-Wall -Werror -pedantic -Wextra -std=gnu89</code>.</li>
  <li>What are header files and how to to use them with <code>#include</code>.</li>
</ul>

|File name|Description|
|---|---|
|[**0-isupper.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/0-isupper.c)|*This functions checks for uppercase character. The function returns `1` if `c` is uppercase. It returns `0` if otherwise.*|
|[**1-isdigit.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/1-isdigit.c)|*This function checks for a digit (`0` through `9`). The function returns `1` if `c` is a digit. It returns `0` if otherwise.*|
|[**2-mul.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/2-mul.c)|*This function multiplies two integers.*|
|[**3-print_numbers.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/3-print_numbers.c)|*This function prints the numbers, from `0` to `9`, followed by a new line.*|
|[**4-print_most_numbers.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/4-print_most_numbers.c)|*This function prints the numbers, from `0` to `9`, followed by a new line. The function does not print `2` and `4`.*|
|[**5-more_numbers.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/5-more_numbers.c)|*This function prints the numbers, from `0` to `14`, followed by a new line. The function prints the numbers 10 times.*|
|[**6-print_line.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/6-print_line.c)|*This function draws a straight line in the terminal, by printing the character `_`. <ul> <li>`n` is the number of times the character `_` will be printed.</li> <li>The line ends with a `\n`.</li> <li></li>If `n` is `0` or less, the function only prints `\n`.</ul>*|
|[**7-print_diagonal.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/7-print_diagonal.c)|*This function draws a diagonal line on the terminal, by printing the character `\`. <ul> <li>`n` is the number of times the character `\` will be printed.</li> <li>The diagonal ends with a `\n`.</li> <li>If `n` is `0` or less, the function only prints a `\n`.</li></ul>*|
|[**8-print_square.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/8-print_square.c)|*This function prints a square, followed by a new line.<ul> <li>`size` is the size of the square.<li> <li>If `size` is `0` or less, the function prints only a new line.</li> <li>The square is printed using the character `#`.</li></ul>*|
|[**9-fizz_buzz.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/9-fizz_buzz.c) [^1]|*This function prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number, and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.*|
|[**10-print_triangle.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/10-print_triangle.c)|*This functions prints a triangle, followed by a new line. <ul> <li>`size` is the size of the triangle.<li> <li>If `size` is `0` or less, the function prints only a new line.</li> <li>The triangle is printed using the character `#`.*|
|[**100-prime_factor.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/100-prime_factor.c)|*This function finds and prints the largest prime factor of the number `612852475143`, , followed by a new line.*|
|[**101-print_number.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/101-print_number.c)|*This function prints an integer.*|
|[**main.h**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/main.h)|*A header file, containing prototypes of all functions used and the prototype of the function `_putchar`.*|
[^1]: The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.
