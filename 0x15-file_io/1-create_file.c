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
int op;
int nb;
int w;

if (filename == NULL)
return (-1);
op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (op == -1)
return (-1);
if (text_content == NULL)
text_content = "";
for (nb = 0; text_content[nb]; nb++)
;
w = write(op, text_content, nb);
if (w == -1)
return (-1);

close(op);
return (1);

}
