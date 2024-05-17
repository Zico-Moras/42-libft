#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	char string1[6];
	char dest[10];
	char dest2[5];
	char *stringzinha;
	char *memmovestr;
	stringzinha = "palavra";
	memmovestr = "1234";
	printf("ft_isalpha('a') = %i\n", ft_isalpha('a'));
	printf("ft_isalpha('Z') = %i\n", ft_isalpha('Z'));
	printf("ft_isalpha('0') = %i\n", ft_isalpha('0'));
	printf("ft_isalpha('i') = %i\n", ft_isalpha('i'));
	printf("ft_isdigit('0') = %i\n", ft_isdigit('0'));
	printf("ft_isdigit('9') = %i\n", ft_isdigit('9'));
	printf("ft_isdigit('a') = %i\n", ft_isdigit('a'));
	printf("ft_isalnum('a') = %i\n", ft_isalnum('a'));
	printf("ft_isalnum('9') = %i\n", ft_isalnum('9'));
	printf("ft_isalnum('a') = %i\n", ft_isalnum('a'));
	printf("ft_isalnum('!') = %i\n", ft_isalnum('!'));
	printf("ft_isascii(1) = %i\n", ft_isascii(1));
	printf("ft_isascii(127) = %i\n", ft_isascii(127));
	printf("ft_isascii(128) = %i\n", ft_isascii(128));
	printf("ft_isprint(' ') = %i\n", ft_isprint(' '));
	printf("ft_isprint('|') = %i\n", ft_isprint('|'));
	printf("ft_isprint(16) = %i\n", ft_isprint(16));
	printf("ft_strlen(\"banana\") = %zu\n", ft_strlen("banana"));
	printf("ft_strlen(\"quem? o caralho\") = %zu\n", ft_strlen("quem? o caralho"));
	ft_memset(string1, 'c', 4);
	printf("ft_memeset(banana, 99, 4) = %s\n", string1 );
	ft_bzero(string1, 4);
	printf("ft_bzero(string1, 4) = %s\n", string1 );
	printf("ft_memcpy(dest, stringzinha, 7) = %s\n", (char *)ft_memcpy(dest, stringzinha, 7));
	printf("ft_memmove(dest2, stringzinha, 7) = %s\n", (char *)ft_memmove(dest2, memmovestr, 7));
	printf("ft_memmove(dest2, stringzinha, 7) = %s\n", (char *)ft_memmove(dest2, stringzinha, 7));
	ft_bzero(dest, 10);

	//char buffstrlcpy[10] = "banana";
	printf("ft_strlcpy(dest, stringzinha, 8) output = %zu , dest = %s \n", ft_strlcpy(dest, stringzinha, 8), dest );
	ft_bzero(dest, 10);
	printf("ft_strlcpy(dest, stringzinha, 5) output = %zu , dest = %s \n", ft_strlcpy(dest, stringzinha, 5), dest );
	ft_bzero(dest, 10);
	printf("ft_strlcpy(dest, stringzinha, 0) output = %zu , dest = %s \n", ft_strlcpy(dest, stringzinha, 0), dest );
	ft_bzero(dest, 10);
	char memcpysrc[10];
	char memcpydest[10];
	printf("----------------------------------------------------------------------\n");
	printf("ft_memcpy(dest, stringzinha, 7) = %s\n", (char *)ft_memcpy(memcpydest, memcpysrc, 7));
	printf("ft_memcpy(memcpydest, memcpysrc , 7) = %s\n", (char *)memcpy(memcpydest, memcpysrc, 7));

	char strlcat_dst[10] = "banana";
	char strlcat_src[10] = "joao";
	printf("%zu\n", ft_strlen(strlcat_dst));
	printf("ft_strlcat return = %zu, strlcat_dest = %s\n", ft_strlcat(strlcat_dst, strlcat_src, 10), strlcat_dst);
	ft_bzero(strlcat_dst, 10);
	ft_strlcpy(strlcat_dst, "banana", 7);
	ft_strlcpy(strlcat_src, "cao", 3);
	printf("ft_strlcat return = %zu, strlcat_dest = %s\n", ft_strlcat(strlcat_dst, "cao", 10), strlcat_dst);
	printf("ft_toupper ('a') = %c \n", ft_toupper('a'));
	printf("ft_toupper ('0') = %c \n", ft_toupper('0'));
	printf("ft_strchr(\" o caralho\" , 'a') = %s\n", ft_strchr("o caralho", 'a'));
	printf("ft_strchr(\" o c4r4lho\" , 'a') = %s\n", ft_strchr("o c4r4lho", 'a'));
	printf("ft_strchr(\" o car4lho\" , 0) = %s\n", ft_strchr("o c4r4lho", 0));
	int caracter = 357;
	printf("%c \n", caracter);
	printf("ft_strrchr(\" o caralho\" , 0) = %s\n", ft_strchr("o caralho", 0));
	printf("ft_strrchr(\" o caralho\" , 7) = %s\n", ft_strchr("o caralho", 7));
	printf("ft_strrchr(\" o caralho\" , 'a') = %s\n", ft_strrchr("o caralho", 'a'));
	printf("ft_strrchr(\" o caralh0\" , 'o') = %s\n", ft_strrchr("o caralh0", 'o'));
	printf("strrchr(\" o caralh0\" , 'o') = %s\n", strrchr("o caralh0", 'o'));
	int testee = -1;
	printf("%i", 5 + testee);
	printf("ft_strncmp( abcdefgh, abcdwxyz, 4) = %i \n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("ft_strncmp( abcdefgh, abcdwxyz, 4) = %i \n", ft_strncmp("", "abcdwxyz", 4));
	printf("%i\n", '/');
	char barra200 = '\200';
	//int barra200int = '\200';
	printf("%i\n", '\200');
	//printf("%i\n", barra200int);
	int	arrayzona[] = {1,2,3,4,5};
	char	stringzinha2[] = "12345";
	printf("%i\n", (unsigned char)barra200);
	printf("%i\n", (unsigned char)barra200);
	//printf("%s\n", ft_memchr(arrayzona, 5, 5));
	printf("memchr(stringzinha2, '2', 5) = %s\n", (char *)memchr(stringzinha2, '2', 5));
	printf("ft_memchr(stringzinha2, '2', 5) = %s\n", (char *)ft_memchr(stringzinha2, '2', 5));
	printf("ft_memchr(stringzinha2, '7', 5) = %s\n", (char *)ft_memchr(stringzinha2, '7', 5));
	printf("ft_memchr(stringzinha2, 0, 5) = %s\n", (char *)ft_memchr(stringzinha2, 0, 5));
	printf("%zu\n", sizeof(arrayzona));
	printf("memcmp(12345,123a5, 5) = %i\n", memcmp("12345","123a5", 5));
	printf("ft_memcmp(12345,123a5, 5) = %i\n", ft_memcmp("12345","123a5", 5));
	printf("memcmp(123a5,12345, 5) = %i\n", memcmp("12345","123a5", 5));
	printf("ft_memcmp(123a5,12345, 5) = %i\n", memcmp("12345","123a5", 5));
}