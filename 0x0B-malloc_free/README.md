<h1 align="center">0X0B: MALLOC FREE</h1>

<h2>Learning Objectives</h2>
<ul>
  <li>What is the difference between automatic and dynamic allocation.</li>
  <li>What is <code>malloc</code> and <code>free</code>, and how to use them.</li>
  <li>Why and when to use <code>malloc</code>.</li>
  <li>How to use <code>valgrind</code> to check for memory leak.</li>
</ul>

|File name|Description|
|---|---|
|[**0-create_array.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)|*This function creates an array of chars, and initializes it with a specific char. <ul><li>It returns `NULL` if size = `0`.</li> <li>It returns a pointer to the array, or `NULL` if it fails.</li></ul>*|
|[**1-strdup.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)|*This function returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. <ul> <li>It returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and is freed with `free`.</li> <li>It returns `NULL` if str = NULL.</li> <li>On success, it returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.</li></ul>*|
|[**2-str_concat.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)|*This function concatenates two strings. <ul><li>The returned pointer points to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated.</li> <li>If `NULL` is passed, it is treated as an empty string.</li> <li>The function returns `NULL` on failure.</li> </ul>*|
|[**3-alloc_grid.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)|*This function returns a pointer to a 2 dimensional array of integers. <ul> <li>Each element of the grid is initialized to `0`.</li> <li>The function returns `NULL` on failure.</li> <li>If `width` or `height` is `0` or negative, it returns `NULL`.</li></ul>*|
|[**4-free_grid.c**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)|*This function frees a 2 dimensional grid previously created by the `alloc_grid` function.*|
|[**main.h**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h)|*A header file, containing prototypes of all functions used and the prototype of the function `_putchar`.*|
