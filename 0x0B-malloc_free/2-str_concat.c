#include "main.h"

/**
 * str_concat - Entry point
 * Description: Concatenates two strings
 * @s1: pointer
 * @s2: pointer
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, length1, length2;

	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;
	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	concatenated = malloc((length1 + length2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (; i < length1; i++)
		concatenated[i + j] = s1[i];
	for (; j < length2; j++)
		concatenated[i + j] = s2[j];
	concatenated[i + j] = '\0';
	return (concatenated);
}
