#include "../../inc/libft.h"

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*res;
// 	size_t	buffer;

// 	buffer = ft_strlen(s1) + ft_strlen(s2);
// 	res = (char *)malloc(sizeof(char) * (buffer + 1));
// 	if (!res)
// 		return (NULL);
// 	ft_strlcpy(res, s1, ft_strlen(s1));
// 	ft_strlcat(res, s2, buffer + 1);
// 	return (res);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_s;
	char	*ptr;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_s = (char *)malloc(len * sizeof(char));
	if (new_s == 0)
		return (0);
	ptr = new_s;
	while (*s1) 
		*ptr++ = *s1++;
	while (*s2) 
		*ptr++ = *s2++;
	*ptr = '\0'; 
	return (new_s);
}