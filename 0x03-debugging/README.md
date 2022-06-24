<h1 align="center">0x03: DEBUGGING</h1>

<h2>Learning Objectives</h2>
<ul>
<li>What is debugging.</li>
<li>What are some methods of debugging manually.</li>
<li>How to read the error messages.</li>
</ul>

|File name| Description|
|---|---|
|[**0-main.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x03-debugging/0-main.c)|*This program tests that the function `positive_or_negative()` gives the correct output when given a case of `0`.*|
|[**1-main.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x03-debugging/1-main.c)|*This program fixes the part of the code displayed under this table that is causing the output to go into an infinite loop.*|
|[**2-largest_number.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x03-debugging/2-largest_number.c)|*This program prints the largest of three integers.*|
|[**3-print_remaining_days.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x03-debugging/3-print_remaining_days.c)|*The function `print_remaining_days()` converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration. This program fixes the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.*|
|[**main.h**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x03-debugging/main.h)|*A header file, containing prototypes of all functions used.*|
```
carrie@ubuntu:/debugging$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
carrie@ubuntu:/debugging$
```
