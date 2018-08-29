#include "header.h"

/**
 * custom_exit - exit for specific cases that also prints error and loop number
 * @mlcs: Pointer to struct containing all variables
 * Return: Void
 */

void custom_exit(memstruct *mlcs)
{
	int div = 1;
	unsigned int temp = 0;

	free(mlcs->tokenArray);
	free(mlcs->path_array);
	free(mlcs->buffer);
	free(mlcs->direc_copy);

	write(1, mlcs->argv[0], _strlen(mlcs->argv[0]));
	write(1, ": ", 2);

	while (mlcs->loop_count / div > 9)
		div = div * 10;
	while (div != 0)
	{
		temp = (mlcs->loop_count / div + '0');
		write(1, &temp, 1);
		mlcs->loop_count = mlcs->loop_count % div;
		div = div / 10;
		temp = 0;
	}
	write(1, ": ", 2);
	perror("");

	exit(EXIT_FAILURE);

}