
char *ft_strjoin(char const *s1, char const *s2)
{
	int	d;
	int i;
	char *str;

	i = ft_strlen(s1) + 1;
	d = 0;
	str  = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	str = s1;
	if(str == NULL)
		return (NULL);
	while(s2[d] != '\0')
	{
		str[i] = s2[d];
		i++;
		d++;
	}

	return (str);
}
