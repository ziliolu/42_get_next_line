#include "get_next_line.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = '\0';
		i++;
		n--;
	}
}

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i <= n - 1)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy(str + s1_len, s2, s2_len);
	str[s1_len + s2_len] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result_str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	result_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!result_str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			result_str[j] = s[i];
			j++;
		}
		i++;
	}
	result_str[j] = '\0';
	return (result_str);
}

char *ft_get_rest(char *stash)
{
	int i;

	i = 0;
	while(stash[i] != '\n')
		stash++;
	while(stash[i])
		i++;
	return(ft_substr(++stash, 0, i));
}

char *ft_clean_line(char *stash)
{
	int i;
	char *line;

	while(stash[i] != '\n')
		i++;
	return (ft_substr(stash, 0, i));

}

char *get_next_line(int fd)
{   
    char *buffer;
    char  static *stash;
	char *line;
	char *rest;
	size_t read_len;

	read_len = BUFFER_SIZE;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
    buffer = ft_calloc(sizeof(char), BUFFER_SIZE + 1);	
	while(!(ft_strchr(buffer, '\n')) && read_len != 0)
	{
		read_len = (read(fd, buffer, BUFFER_SIZE));
		if(read_len < 0)
		{
			free(buffer);
			free(stash);
			stash = NULL;
			return (NULL);
		} 
		stash = ft_strjoin(stash, buffer);

	}
	//free(buffer);
	line = ft_clean_line(stash);
	stash = ft_get_rest(stash);
	return(line);
}

int main()
{
    int fd;
    int read_number;
	char *line;
    char buf[100];

    fd = open("text.txt", O_CREAT);
	printf("-- primeira chamada --\n");
	line = get_next_line(fd);
	puts(line);


	printf("-- segunda chamada --\n");
	line = get_next_line(fd);
	puts(line);

	printf("-- terceira chamada --\n");
	line = get_next_line(fd);
	puts(line);
}