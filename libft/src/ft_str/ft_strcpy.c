#include "../../inc/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dest_ptr = dest; //Pointer to track the start of `dest`

	while ((*dest_ptr++ = *src++)); //Copy each character, including '\0'
    return (dest); //Return the original destination pointer
}
