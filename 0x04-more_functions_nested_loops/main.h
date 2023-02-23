#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints character to standard output
 * @c: character to be checked
 */

int _putchar(char c);

/**
 * _isupper - prints uppercase character
 * @c: checked character 
 *
 * RETURN: 1 if @c is uppercase
 * else return 0
 */

int _isupper(int c);

/**
 * _isdigit - prints digits
 * @c: checked  character 
 *
 * RETURN: 1 if @c is a digit
 * else return 0 and set appropriate errno
 */

int _isdigit(int c);

/**
 * mul - multiplies to integers
 */

int mul(int a, int b);

/**
 * print_numbers - prints numbers 0-9
 */

void print_numbers(void);

/**
 * print_most_numbers - prints numbers 0-9 except '2','4'
 */

void print_most_numbers(void);

/**
 * more_numbers - prints 0-14 ten times
 */

void more_numbers(void);

/**
 * print_line - draws a straight line
 * @n: number of times '_' should be printed
 * if n <= '0', new line is printed
 */

void print_line(int n);

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times '\' should be printed
 *
 * if n <= '0', a new line is printed
 */

void print_diagonal(int n);

/**
 * print_square - prints a square
 */

void print_square(int size);

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size);

#endif
