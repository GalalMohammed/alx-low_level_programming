#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int);
void print_times_table(int);
int _isupper(int);
int _isdigit(int);
int mul(int, int);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int);
void print_diagonal(int);
void print_square(int);
void print_triangle(int);
void reset_to_98(int *);
void swap_int(int *, int *);
int _strlen(char *);
void _puts(char *);
void print_rev(char *);
void rev_string(char *);
void puts2(char *);
void puts_half(char *);
void print_array(int *, int);
char *_strcpy(char *, char *);
int _atoi(char *);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
int _strcmp(char *, char *);
void reverse_array(int *, int);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int);
char *infinite_add(char *, char *, char *, int);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char(*)[8]);
void print_diagsums(int *, int);
void set_string(char **, char *);
void _puts_recursion(char *);
void _print_rev_recursion(char *);
int _strlen_recursion(char *);
int factorial(int);
int _pow_recursion(int, int);
int _sqrt_recursion(int);
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *);
void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
unsigned int flip_bits(unsigned long int, unsigned long int);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);

#endif /* MAIN_H */
