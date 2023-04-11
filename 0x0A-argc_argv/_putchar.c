#include <stdio.h>
#include "main.h"

/**
* _putchar - Function writes the character c to stdout
* @c:The character to print
* Return: Return 1 On success and -1 on error. Set error appropriately
*/

int _putchar(char c)

{

	return (write(1, &c, 1));

}
