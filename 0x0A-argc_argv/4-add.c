#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - shows if a char is a number
 * @argv: argument vector
 *
 * Return: 1 on success, 0 on failure
 */

int is_number(char *argv)
{
	char *p = argv;
	int flag = 0;

	while (*p != '\0')
	{
		if (flag == 0 && *p == 45)
		{
			p++;
			flag = 1;
			continue;
		}
		flag = 1;
		if (*p >= 48 && *p < 58)
			p++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) == 1)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
