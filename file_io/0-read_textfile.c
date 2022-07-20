#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)

{
	int n;
	size_t k;
	char *buffer;
	buffer = malloc(letters * sizeof(char));
	n = open(filename, O_RDONLY);
	if (n != -1)
	{
		k = read(n, buffer, letters);

		write(STDOUT_FILENO, buffer, k);
		close(n);
	}
	return k;
}