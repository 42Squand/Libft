#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = ft_strdup((char*)"coucou");
	printf("%s", s);
	free(s);
	return (0);
}