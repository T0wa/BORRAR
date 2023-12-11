

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ((len - start) + 1));
	if (str == NULL)
		return (NULL);
	while(start < len)
	{
		str[i] = s[len];
		i++;
		len++;
	}
	
	return (str);
}
