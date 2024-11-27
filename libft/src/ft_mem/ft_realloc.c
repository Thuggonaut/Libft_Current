#include "../../inc/libft.h"

void **ft_realloc(void **ptr, size_t old_size, size_t new_size) 
{
	void **new_ptr;

	new_ptr = malloc(new_size);
	if (!new_ptr) 
	{
		free(ptr); // Free old pointer if allocation fails
		return (NULL);
	}
	if (ptr) 
	{
		ft_memcpy(new_ptr, ptr, old_size); // Copy old data to new pointer
		free(ptr); // Free old pointer
	}
	return (new_ptr); // Return new pointer
}