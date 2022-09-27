#include "main.h"

/**
 * _strstr - Starting point
 * @haystack: Input
 * @needle: Input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;
		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		fi (!*pneedle)
		{
			return (bhaystack);
		}
		haystack = bhaystack + 1;
	}
	return (0);
}
