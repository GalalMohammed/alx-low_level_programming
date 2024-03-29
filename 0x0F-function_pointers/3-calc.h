#ifndef CALC_H
#define CALC_H

#include <stddef.h>

/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

int _putchar(char c);
int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);
int (*get_op_func(char *))(int, int);

#endif /* ifndef CALC_H */
