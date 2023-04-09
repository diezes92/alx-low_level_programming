#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
int fd, len, wr;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content == NULL)
text_content = "";
len = 0;
while (text_content[len] != '\0')
{
len++;
}
wr = write(fd, text_content, len);
if (wr == -1)
return (-1);

close(fd);
return (1);

}
