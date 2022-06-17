<h1 align="center">0x05: POINTERS ARRAYS STRINGS</h1>

<h2>Learning Objectives</h2>
<ul>
  <li>What pointers are and how to use them.</li>
  <li>What arrays are and how to use them.</li>
  <li>What are the differences between pointers and arrays.</li>
  <li>How to use strings and how to manipulate them.</li>
  <li>Scope of variables.</li>
</ul>

|File name|Description|
|---|---|
|[**0-reset_to_98.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)|*This function takes a pointer to an `int` as parameter and updates the value it points to `98`.*|
|[**1-swap.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)|*This function swaps the values of two integers.*|
|[**2-strlen.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)|*This function returns the length of a string.*|
|[**3-puts.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)|*This function prints a string, followed by a new line, to `stdout`.*|
|[**4-print_rev.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)|*This function prints a string, in reverse, followed by a new line.*|
|[**5-rev_string.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)|*This reverses a string.*|
|[**6-puts2.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)|*This function prints every other character of a string, starting with the first character, followed by a new line.*|
|[**7-puts_half.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)|*This function prints half of a string, followed by a new line. <ul> <li>The function prints the second half of the string.</li> <li>If the number of characters is odd, the function prints the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`.</li> </ul>*|
|[**8-print_array.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)|*This function prints `n` elements of an array of integers, followed by a new line. <ul> <li>Where `n` is the number of elements of the array to be printed.  </li> <li>Numbers are separated by comma, followed by a space.</li> <li>The numbers are displayed in the same order as they are stored in the array.</li> </ul>*|
|[**9-strcpy.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)|*This function copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`. <br> Return value: the pointer to `dest`.*|
|[**100-atoi.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/100-atoi.c)|*This functions convert a string to an integer. <ul> <li>The number in the string can be preceded by an infinite number of characters.</li> <li>All `-` and `+` signs before the number are taken into account.</li> <li>If there are no numbers in the string, the function returns `0`.</li> </ul>*|
|[**101-keygen.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/101-keygen.c)|*This function creates a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c).*|
|[**main.h**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/main.h)|*A header file, containing prototypes of all functions used and the prototype of the function `_putchar`.*|
