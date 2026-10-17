_This project has been created as part of the 42 curriculum by alexgonz_

# ft_printf

# Description
This project has the aim of recreating my basic version of the printf function in C with basic self-coded functions. Only the basic inputs have been considered. For more details of the basic functions please check the folder libft, which contains a whole library (with some functions that weren't used)

# Instructions
This project comes with its own Makefile integrated. The following rules are implemented
- all: creates the library libftprintf.a
- clean: deletes all the object files
- fclean: deletes all the object files and the static library
- re: makes an fclean and then an all

# Resources
All the documentation used for this project has come from the official GNU web and various notable forums. The main role of AI in this project has been as close as posible to NULL, due to personal reasons.

# How does it work?
Ft_printf works in a quite understanding and logic way. First of all, given a valid string as the input, followed by a list of va_arg, we try and check every possible value after a %. Those are then passed to their corresponded C-file, which basically try to convert into the more simpler cases:
- With c and %, we simply do a putchar
- With s, we simply do a putstr
- With i, d and u, we do a simple putnbr (taking into consideration the max int)
- With x, X and p, we do a simple putnbr in base 16 (taking into consideration the max int)
Finally, we return the length, also computed at the C-file, which is returned as -1 in case of error or an invalid parameter.

