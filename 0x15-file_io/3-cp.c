#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*read file_from*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*write file_to*/
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	while (read(file_from, buf, 1024) > 1024)
	{
		if (file_to == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (write(file_to, buf, read(file_from, buf, 1024)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	
	if (close(file_from) || close(file_to))
	{
		if (close(file_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (close(file_to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	close(file_from);
	close(file_to);
	return (0);
}
