#include "header.h"

/**
 * execute_command - executing the command passed in as token[0]
 * @mlcs: Pointer to struct containing all variables
 * Return: 0 For success
 */

int execute_command(memstruct *mlcs)
{
	pid_t pid;
	int status;


	mlcs->tokenArray[0] = search_tokens(mlcs);
	free(mlcs->direc_copy);
	if (!mlcs->tokenArray[0])
		custom_exit(mlcs);
	pid = fork();
	if (pid == 0)
	{
		if ((execve(mlcs->tokenArray[0], mlcs->tokenArray, NULL)) == -1)
		{
			custom_exit(mlcs);
		}

	}
	else
	{
		wait(&status);
	}

	return (0);
}
