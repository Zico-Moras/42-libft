#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temps;
	int	i;

	i = ft_strlen(s);
	temps = (char *)s;
	while (i != -1)
	{
		if (*(temps + i) == (char)c)
			return (temps + i);
		i--;
	}
	return (0);
}
