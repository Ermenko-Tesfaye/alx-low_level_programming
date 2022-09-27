#include "main.h"
#include <stdlib.h>
/**
 * set_string - a fun.. that sets the value of a pointer to a char
 * @s: pointer of string literal (pointer to pointer)
 * @to: value to be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
