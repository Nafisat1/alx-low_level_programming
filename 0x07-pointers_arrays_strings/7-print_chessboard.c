#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the row of the array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
<<<<<<< HEAD
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
=======
        int i, j;

        for (i = 0; i < 8; i++)
        {
                for (j = 0; j < 8; j++)
                {
                        if (j == 7)
                        {
                                _putchar(a[i][j]);
                                _putchar('\n');
                        }
                        else
                                _putchar(a[i][j]);
                }
        }
>>>>>>> 5d350ae8fb65ac8c27a73ac8422c7702bae48e66
}
