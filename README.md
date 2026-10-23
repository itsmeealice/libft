_This project has been created as part
of the 42 curriculum by apazitor_
# Description
## Library Description

Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate a collection of standard C library functions while gaining a deeper understanding of memory management, pointers, strings, linked lists, and low-level programming concepts.

The library is compiled into a static archive (`libft.a`) that can be linked to future C projects. It provides a set of reusable utility functions that simplify common programming tasks and reduce code duplication.

The library includes functions grouped into several categories:

- Character handling and classification
  - `ft_isalpha`
  - `ft_isdigit`
  - `ft_isascii`
  - `ft_isprint`
  - `ft_toupper`
  - `ft_tolower`

- String manipulation
  - `ft_strlen`
  - `ft_strdup`
  - `ft_strchr`
  - `ft_strrchr`
  - `ft_strncmp`
  - `ft_strnstr`
  - `ft_split`
  - `ft_strjoin`
  - `ft_substr`
  - `ft_strtrim`

- Memory manipulation
  - `ft_memset`
  - `ft_bzero`
  - `ft_memcpy`
  - `ft_memmove`
  - `ft_memchr`
  - `ft_memcmp`
  - `ft_calloc`

- Conversion utilities
  - `ft_atoi`
  - `ft_itoa`

- Output functions
  - `ft_putchar_fd`
  - `ft_putstr_fd`
  - `ft_putendl_fd`
  - `ft_putnbr_fd`

- Linked list operations
  - `ft_lstnew`
  - `ft_lstadd_front`
  - `ft_lstadd_back`
  - `ft_lstsize`
  - `ft_lstlast`
  - `ft_lstdelone`
  - `ft_lstclear`
  - `ft_lstiter`
  - `ft_lstmap`

The library serves as a foundation for future projects at 42, where many of these functions will be reused and expanded upon.
# Instructions
Installation/Compilation: In order to create the libft.a the user must run the commands
"make fclean"  
"make"
"make clean"
Usage: The developer who has libft.a can directly use the functions included in the library by including the header "libft.h".
and running in terminal cc program.c libft.a -o program 
# Resources
stackoverflow
CS50.ai

