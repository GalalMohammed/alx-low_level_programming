#include "main.h"

/**
  * numcounter - counts digits
  * @n: num
  *
  * Return: result
  */
int numcounter(char *n)
{
	int ncounter = 0;

	while (*n != '\0')
	{
		n++;
		ncounter++;
	}
	return (ncounter);
}

/**
  * zeroR - make r = 0
  * @r: buffer
  */
void zeroR(char *r)
{
	*r = '0';
	*(r + 1) = '\0';
}

/**
  * handleCarry - handles carry
  * @size_r: buffer size
  * @maxlen: biggest num len
  * @rcpy: copy of buffer pointer
  * @carry: carry amount
  *
  * Return: 0 if overflow, 1 otherwise
  */
int handleCarry(int size_r, int maxlen, char *rcpy, int carry)
{
	if (size_r >= maxlen + 2)
	{
		while (*rcpy != '\0')
			rcpy++;
		while (rcpy >= r)
		{
			*(rcpy + 1) = *rcpy;
			rcpy--;
		}
		rcpy++;
		*rcpy = '0' + carry;
		return (1);
	}
	else
		return (0);
}

/**
  * infinite_add - 4dds 2 numb3rs
  * @n1: firs7 num
  * @n2: s3cond num
  * @r: buff3r
  * @size_r: buff3r siz3
  *
  * Return: p0in73r 70 buff3r
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1counter, n2counter = 0, res, carry = 0, op1 = 0, op2 = 0,
	    maxlen = 0;

	zeroR(r);
	n1counter = numcounter(n1);
	n2counter = numcounter(n2);
	maxlen = n1counter > n2counter ? n1counter : n2counter;
	if (size_r < n1counter + 1 || size_r < n2counter + 1)
		return (r);
	if (n1counter >= n2counter)
		*(r + n1counter + 1) = '\0';
	else
		*(r + n2counter + 1) = '\0';
	while (n1counter || n2counter)
	{
		if (n1counter)
		{
			n1counter--;
			op1 = *(n1 + n1counter) - '0';
		}
		else
			op1 = 0;
		if (n2counter)
		{
			n2counter--;
			op2 = *(n2 + n2counter) - '0';
		}
		else
			op2 = 0;
		res = op1 + op2 + carry;
		carry = res  / 10;
		if (n1counter >= n2counter)
			*(r + n1counter) = '0' + res % 10;
		else
			*(r + n2counter) = '0' + res % 10;
	}
	if (carry && handleCarry(size_r, maxlen, r, carry) == 0)
		zeroR(r);
	return (r);
}
