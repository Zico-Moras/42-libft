#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *string1;
	unsigned char *string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((unsigned char)*(string1 + i) != (unsigned char)*(string2 + i))
			return ((unsigned char)*(string1 + i) - (unsigned char)*(string2 + i));
		i++;
	}
	return (0);
}
