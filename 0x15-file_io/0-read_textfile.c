#include "main.h"
/**
  * read_textfile - reads the text file and returns number of characters
  * @filename: file
  * @letters: number of characters
  * Return: returns number of letters otherwise 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	int m;
	ssize_t n;

	if (filename == NULL)
	{
		return (0);
	}

	m = open(filename, O_RDONLY);
	if (m == -1)
	{
		return (0);
	}
	text = malloc(letters);
	if (text == NULL)
	{
		close(m);
		return (0);
	}
	n = read(m, text, letters);
	if (n == -1)
	{
		close(m);
		return (0);
	}
	write(STDOUT_FILENO, text, n);
	close(m);
	free(text);

	return (n);
}
