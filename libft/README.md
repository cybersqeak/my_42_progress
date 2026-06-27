*This project has been created as part
of the 42 curriculum by cmichele*
# libft

A custom C library developed as part of the **42 School** curriculum.

`libft` is a collection of standard C library functions reimplemented from scratch, along with additional utility functions and linked list operations. The objective of this project is to gain a deeper understanding of C programming, memory management, pointers, and data structures.

---

##  Features

- Character classification functions
- String manipulation functions
- Memory management functions
- Conversion functions
- File descriptor output functions
- Singly linked list implementation (Bonus)

---

## Project Structure

```

libft/
├── Makefile
├── libft.h
├── *.c
├── *.o
└── libft.a

````

---

##  Compilation

Build the library:

```bash
make
````

Clean object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

---

## Usage

Include the header file:

```c
#include "libft.h"
```

Compile your project with the library:

```bash
cc main.c libft.a
```

or

```bash
cc main.c -L. -lft
```

---

##  Implemented Functions

### Character Functions

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower

### String Functions

* ft_strlen
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strnstr
* ft_strdup
* ft_strlcpy
* ft_strlcat
* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_strmapi
* ft_striteri

### Memory Functions

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_calloc

### Conversion Functions

* ft_atoi
* ft_itoa

### File Descriptor Output

* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

### Linked List Functions (Bonus)

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

---

## Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi("42"));
    return (0);
}
```

Compile:

```bash
cc main.c libft.a
```

---

## What I Learned

During this project I practiced:

* Writing my own implementations of standard C library functions
* Memory allocation and deallocation
* Pointer arithmetic
* String manipulation
* Linked list data structures
* Building static libraries
* Creating maintainable C code following the 42 Norm

---
## Resources

In this project I have learned a lot from geeksforgeeks.com and Artificial Inteligence.

##  License

This project was completed as part of the 42 School curriculum and is intended for educational purposes.

## How AI was uesd

I used a lot to ask if my current code is correct or safe. I make AI to only answer whether YES or NO untill I explicitly ask for hints... after completation of code, I offen asked for better code . 

