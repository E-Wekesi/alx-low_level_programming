#include "main.h"

/**
 * print_chessboard - displays the chessboard
 * @a: Pointer to the chessboard array.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int index, offset = 0;

	for (index = 0; index < 64; index++)
	{
		if (index % 8 == 0 && index != 0)
		{
			offset = index;
			_putchar('\n');
		}
		_putchar(a[index / 8][index - offset]);
	}
	_putchar('\n');
}
