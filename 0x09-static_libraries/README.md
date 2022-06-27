<h1 align="center">0x09: STATIC LIBRARIES</h1>

<h2>Learning Objectives</h2>
<ul>
  <li>What is a static library, how does it work, how to create one, and how to use it.</li>
  <li>Basic usage of <code>ar</code>, <code>ranlib</code>, <code>nm</code>.</li>
</ul>

|Folder name|Description|
|---|---|
|[**c_files**](https://github.com/GM-Samuelstein/alx-low_level_programming/tree/master/0x09-static_libraries/c_files)|*This folder contains all the `c` files used.*|
|[**o_files**](https://github.com/GM-Samuelstein/alx-low_level_programming/tree/master/0x09-static_libraries/o_files)|*This folder contains all the object files of all the `c` files.*|

|File name|Description|
|---|---|
|[**libmy.a**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x09-static_libraries/libmy.a)|*A static library that contains a list of the object files used in all the `c` functions.*|
|[**create_static_lib.sh**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh)|*A script that creates a static library called `liball.a` from all the `.c` files that are in the current directory.*|
|[**main.h**](https://github.com/GM-Samuelstein/alx-low_level_programming/blob/master/0x09-static_libraries/main.h)|*A header file, containing prototypes of all functions used and the prototype of the function `_putchar`.*|
