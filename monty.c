#include "main.h"

stack_t *head = NULL;

/**
 * main - Monty main function
 * @argc: Argument count
 * @args: Argument params
 *
 * Return: Always 0
 */
int main(int argc, char *args[])
{
	FILE *fd = NULL;
	size_t line_len = 0;
	unsigned int line_num = 1;
	int readed = 0, op_status = 0;
	char *filename = NULL, *op_code = NULL, *op_param = NULL, *buff = NULL;

	filename = args[1];
	check_args_num(argc);
	fd = open_file(filename);

	while ((readed = getline(&buff, &line_len, fd)) != -1)
	{
		op_code = strtok(buff, "\t\n ");
		if (op_code)
		{
			if (op_code[0] == '#')
			{
				++line_num;
				continue;
			}

			op_param = strtok(NULL, "\t\n ");
			op_status = handle_execution(op_code, op_param, line_num, op_status);

			if (op_status >= 100 && op_status < 300)
			{
				fclose(fd);
				handle_error(op_status, op_code, line_num, buff);
			}
		}

		++line_num;
	}

	frees_stack();
	free(buff);
	fclose(fd);
	return (0);
}
