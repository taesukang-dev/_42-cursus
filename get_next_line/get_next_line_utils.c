#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*temp;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	temp = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1);
	i = 0;
	while(s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		temp[s1_len] = s2[i];
		i++;
		s1_len++;
	}
	temp[s1_len] = '\0';
	return (temp);
}

void	ft_strlcpy(char **dest, char *src)
{
	size_t	i;
	size_t	src_len;
	char	*temp;
	
	temp = malloc(sizeof(char) * 9999);
	src_len = ft_strlen(src);
	i = 0;
	while(src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	*dest = temp;
}
