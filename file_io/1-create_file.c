#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - crée un fichier avec du contenu
 * @filename: nom du fichier à créer
 * @text_content: chaîne de caractères à écrire dans le fichier
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
