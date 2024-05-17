#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*temp_s;

	i = 0;
	temp_s = (char *)s;
	while (*(temp_s + i) != (char)c && *(temp_s + i))
		i++;
	if (*(temp_s + i) == (char)c)
		return (temp_s + i);
	return (0);
}
