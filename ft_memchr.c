#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*pointer;

	i = 0;
	pointer = (unsigned char	*)s;
	while(*(pointer + i) && i < n)
	{
		if (*(pointer + i) == (unsigned char)c)
			return (pointer + i);
		i++;
	}
	if (c == 0)
		return (pointer + i);
	return (0);
}
