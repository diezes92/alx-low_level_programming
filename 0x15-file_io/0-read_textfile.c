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
int fd;
ssize_t rd, wr;
char *mem;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

mem = malloc(sizeof(char) * (letters));
if (mem == NULL)
return (0);

rd = read(fd, mem, letters);
wr = write(STDOUT_FILENO, mem, rd);

close(fd)

free(mem)

return (wr);

}
