/**
 * _strcat - Concatene deux chaines de caracteres
 * @dest: La chaine de destination
 * @src: La chaine source a ajouter
 *
 * Cette fonction ajoute la chaine src a la fin de la chaine dest,
 * en ecrasant le caractere nul de fin de dest, puis ajoute un
 * caractere nul de fin.
 *
 * Return: Un pointeur vers la chaine resultante dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Trouver la fin de dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copier src a la fin de dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ajouter le caractere de fin */
	dest[i] = '\0';

	return (dest);
}
