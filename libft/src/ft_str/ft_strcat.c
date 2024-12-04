#include "../../inc/libft.h"

char *ft_strcat(char *dest, const char *src) 
{
	char *dest_ptr = dest; // Pointer to track the start of `dest`

	// Move `dest_ptr` to the end of the string (null terminator)
	while (*dest_ptr)
		dest_ptr++;

	// Append characters from `src` to `dest`
	while ((*dest_ptr++ = *src++));

	return (dest); // Return the original destination pointer
}
