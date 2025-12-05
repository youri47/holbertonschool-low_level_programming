#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * close_file - ferme un fichier et gère les erreurs
 * @fd: file descriptor à fermer
 *
 * Return: rien (exit si erreur)
 */
void close_file(int fd)
{
	int result;

	result = close(fd);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_source_file - ouvre le fichier source
 * @filename: nom du fichier à ouvrir
 *
 * Return: file descriptor (exit si erreur)
 */
int open_source_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_dest_file - ouvre/crée le fichier destination
 * @filename: nom du fichier à créer
 * @fd_from: file descriptor du fichier source (pour fermeture si erreur)
 *
 * Return: file descriptor (exit si erreur)
 */
int open_dest_file(char *filename, int fd_from)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		close_file(fd_from);
		exit(99);
	}
	return (fd);
}

/**
 * copy_data - copie les données d'un fichier vers un autre
 * @fd_from: file descriptor source
 * @fd_to: file descriptor destination
 * @file_from: nom du fichier source (pour messages d'erreur)
 * @file_to: nom du fichier destination (pour messages d'erreur)
 *
 * Return: rien (exit si erreur)
 */
void copy_data(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close_file(fd_from);
			close_file(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close_file(fd_from);
		close_file(fd_to);
		exit(98);
	}
}

/**
 * main - copie le contenu d'un fichier vers un autre
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 *
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_source_file(argv[1]);
	fd_to = open_dest_file(argv[2], fd_from);

	copy_data(fd_from, fd_to, argv[1], argv[2]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
