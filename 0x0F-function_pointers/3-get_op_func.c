#include "3-calc.h"

/**
  * get_op_func - selects correct function to perform
  * @s: operator
  *
  * Return: pointer to func corresponds to op
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int i;

	i = 0;
	while (s && i < (int)(sizeof(ops) / sizeof(op_t)))
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return ((void *)'\0');
}
