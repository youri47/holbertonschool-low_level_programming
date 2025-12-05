#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - ajoute du texte à la fin d'un fichier
 * @filename: nom du fichier
 * @text_content: chaîne de caractères à ajouter à la fin
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	length = 0;
	while (text_content[length] != '\0')
		length++;

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
