#include "main.h"
/**
 * reset_to_98 - Main Entry
 * @s: input
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
{
len++;
}
return (len);
}
