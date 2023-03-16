#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: widthof the grid
 * @height: height of the grid
 *
 * Return: NULL on failure and if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		twoD[hgt_i] = malloc(sizeof(int) * width);

		if (twoD[hgt_i] == NULL)
		{
			for (; hgt_i >= 0; hgt_i--)
				free(twoD[hgt_i]);

			free(twoD);
			return (NULL);
		}
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			twoD[hgt_i][wid_i] = 0;
	}

	return (twoD);
}

