<h1 align="center">0x06: POINTERS ARRAYS STRINGS</h1>

<h2>Learning Objectives</h2>
<ul>
  <li>What pointers are and how to use them.</li>
  <li>What arrays are and how to use them.</li>
  <li>What are the differences between pointers and arrays.</li>
  <li>How to use strings and how to manipulate them.</li>
  <li>Scope of variables.</li>
</ul>

|File name|Decription|
|---|---|
|[**0-strcat.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c)|*This function concatenates two strings, and appends the string `src` to the string `dest`, overwriting the terminating null byte (`\0`) at the end of the string `dest` and then adds a new terminating null byte. The function returns a pointer to the resulting string `dest`.*|
|[**1-strncat.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c)|*This functions concatenates two strings. It is similar to function `strcat`, except that it will use at most `n` bytes from the string `src`; and `src` does not need to be null-terminated if it contains `n` or more bytes. The function returns a pointer to the resulting string `dest`.*|
|[**2-strncpy.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c)|*This function copies a string.*|
|[**3-strcmp.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c)|*This function compares two strings.*|
|[**4-rev_array.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c)|*This function reverses the content of an array of integers, where `n` is the number of elements of the array*|
|[**5-string_toupper.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c)|*This function changes all lowercase letters of a string to uppercase.*|
|[**6-cap_string.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c)|*This function capitalizes all words of a string. Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, `}`*|
|[**7-leet.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c)|<em> This function encodes a string into [1337](https://en.wikipedia.org/wiki/Leet). <br> <ul> <li>Letters `a` and `A` are replaced by `4`.</li> <li>Letters `e` and `E` are replaced by `3`.</li> <li>Letters `o` and `O` are replaced by `0`. </li> <li>Letters `t` and `T` are replaced by `7`.</li> <li> Letters `l` and `L` are replaced by `1`. </li> </ul> </em>|
|[**100-rot13.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/100-rot13.c)|*This function encodes a string using [rot13](https://en.wikipedia.org/wiki/ROT13).*|
|[**101-print_number.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/101-print_number.c)|*This functions prints an integer.*|
|[**102-magic.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/102-magic.c)|*One line of code is added to [this code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c), so that the program prints `a[2] = 98`, followed by a new line.*|
|[**103-infinite_add.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/103-infinite_add.c)|*This function adds two numbers. Where `n1` and `n2` are the two numbers, `r` is the buffer that the function will use to store the result,and `size_r` is the buffer size. The function returns a pointer to the result. The function returns `0` if the result cannot be stored in `r`.*|
|[**104-print_buffer.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/104-print_buffer.c)|<em>This function prints a buffer.<br> <ul> <li>The function prints the content of `size` bytes of the buffer pointed by `b`.</li> <li>The output prints 10 bytes per line.</li> <li>Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with `0`.</li> <li>Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.</li> <li>Each line shows the content of the buffer. If the byte is a printable character, prints the letter; if not, prints `.`</li> <li>Each line ends with a new line `\n`.</li> <li>If `size` is 0 or less, the output should be a new line only `\n`.</li> <li>The output looks like the example below, and is formatted exactly the same way.</li> </ul> <em>| 
  ```
  julien@ubuntu:~/0x06$ cat 104-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-main.c 104-print_buffer.c -o 104-buffer
julien@ubuntu:~/0x06$ ./104-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
  julien@ubuntu:~/0x06$ 
