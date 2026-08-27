*This project has been created as part of the 42 curriculum by cmichele*

# ft_printf

## Description

`ft_printf` is a simplified version of the standard C library `printf` function. It supports fewer format specifiers than the original `printf`. 

`ft_printf` will work perfectly if you use the correct format specifiers. If you use an incorrect specifier, it will result in **undefined behavior**.

## Instructions

### Compilation 

Use the following command to compile the project:
```sh
make
```
This command compiles the source code into object files and creates the static library `libftprintf.a`.

You can also use these standard utility commands:
* `make clean` — Deletes the object files.
* `make fclean` — Deletes both the object files and the static library file.
* `make re` — Cleans all compiled files and recompiles the entire project from scratch.

### Execution

To test the library, create a `main.c` file that uses the `ft_printf` function. 

You can then compile your program by linking it with the static library using the following command:
```sh
cc -Wall -Wextra -Werror main.c libftprintf.a 
```

## Resources

The following resources were used during the development of this project:

* **Variadic Functions:** [GeeksforGeeks](https://www.geeksforgeeks.org/c/variadic-functions-in-c/) — Used for learning how to implement `va_list`.
* **AI Assistance:** Used to verify concepts and assist in writing this README in clear English.

