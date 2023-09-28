#include "main.h"
#include <stdio.h>

/**
* rot13 -  encodes a string using rot13
* @str:the string targeted
*Return: returns the encoded string
*/

char *rot13(char *str)
{
int index = 0, index1;

while (str[index] != '\0')
{
index++;
}

for (index1 = 0; index1 <= index; index1++)
{
if ((str[index1] >= 'a' && str[index1] <= 'm') ||
(str[index1] >= 'A' && str[index1] <= 'M'))
{
str[index1] += 13;
}
else if ((str[index1] >= 'n' && str[index1] <= 'z') ||
(str[index1] >= 'N' && str[index1] <= 'Z'))
{
str[index1] -= 13;
}
}
return (str);
}
