#include "3-calc.h"
/**
 * op_add - this function adds 2 numbers
 * @a: the first number
 * @b: the second number.
 * section header: The header is 3-calc.h
 * Return: return the result of addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function subtracts 2 numbers
 * @a: the first number
 * @b: the second number.
 * section header: The header is 3-calc.h
 * Return: return the result of subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function multiplies 2 numbers
 * @a: the first number
 * @b: the second number.
 * section header: The header is 3-calc.h
 * Return: return the result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this function divide 2 numbers
 * @a:the first number
 * @b:the second number.
 * section header: The header is 3-calc.h
 * Return: return the result of division.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - this function calculates the module
 * @a:the first number
 * @b:the second number
 * Description: this function calculates the module
 * section header: The header is 3-calc.h
 * Return: return the result of the module.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
