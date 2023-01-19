0x10. C - Variadic functions

0. Beauty is variable, ugliness is constant
 a function that returns the sum of all its parameters.
Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

1. To be is to be the value of a variable
 a function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function

2. One woman's constant is another woman's variable
 a function that prints strings, followed by a new line.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function

3. To be is a to be the value of a variable
a function that prints anything.
Prototype: void print_all(const char * const format, ...);
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char *
