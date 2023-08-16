#include "main.h"
/**
 *_abs - show the absulate value of an integer
 * @num: the number
 * Return: always return the absolute value
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	return (num * -1);
}
