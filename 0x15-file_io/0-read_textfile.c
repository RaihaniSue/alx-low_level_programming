#include "main.h"
/**
 * read_textfile - entry point
 * @filename: name of the file
 * @letters: letters to print
 *
 * Return: 0 for failure otherwise the num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(f, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(f);

	free(buf);

	return (nwr);
}
