#include "main.h"

/**
 * check_access_rights - Read permissions checker
 * @filename: File header filename
 *
 * Return: void
 */
void check_access_rights(char *filename)
{
	if (access(filename, R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}

/**
 * check_digits - Digit checker
 * @s: Digit string
 *
 * Return: 1 or 0
 */
int check_digits(char *s)
{
	int status;
	status = 1;

	while (*s != '\0')
	{
		if (s[0] == 45)
		{
			++s;
			continue;
		}

		if (isdigit(*s) == 0)
		{
			status = 0;
			return (status);
		}

		++s;
	}

	return (status);
}

/**
 * check_args_num - Argument checker
 * @argn: Args size
 *
 * Return: Void
 */
void check_args_num(int argn)
{
	if (argn != MIN_ARGS)
	{
		handle_error(ERR_ARG_USG, NULL, 0, NULL);
	}
}

/**
 * check_push_param - Push checker
 * @param: The parameter to be verified
 *
 * Return: 0 or errorcode
 */
int check_push_param(char *param)
{
	if (param == NULL || check_digits(param) == 0)
	{
		return (ERR_PUSH_USG);
	}

	return (VALID_PARM);
}
