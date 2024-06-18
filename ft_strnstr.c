#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	size_t	n2;

	n = 0;
	n2 = 0;
	if (len == 0)
		return ((char *)big);
	while (big[n] && n < len)
		{
			while (big[n + n2] == little[n2] && n + n2 < len && big[n +n2])
			{
				if (little[n2] == 0)
					return ((char *)little + n2);
				n2++;
			}
			n2 = 0;
			n++;
		}
	return (0);
}

