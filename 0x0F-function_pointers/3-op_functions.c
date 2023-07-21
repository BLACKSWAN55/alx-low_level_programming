#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the different of two numbers
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The differences of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the different of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The mul of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return the division of two numbers.
 * @a: The first number.
 * @b: The second number
 *
 * Return: The quotientof a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return the reminder of the division of two number.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The reminder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
