#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int op;
ssize_t r, w;
char *tmp;

if (filename == NULL)
return (0);

op = open(filename, O_RDONLY);
if (op == -1)
return (0);
tmp = malloc(sizeof(char) * (letters));
if (tmp == NULL)
return (0);

r = read(op, tmp, letters);
w = write(STDOUT_FILENO, tmp, r);

close(op);
free(tmp);
return (w);

}
