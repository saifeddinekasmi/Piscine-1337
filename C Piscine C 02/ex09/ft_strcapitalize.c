char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		if (i != 0 && ((str[i - 1] <= 'Z' && str[i - 1] >= 'A')
				|| (str[i - 1] <= 'z' && str[i - 1] >= 'a')))
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
			{
				str[i] += 32;
			}
		}
		if (i != 0 && (str[i - 1] <= '9' && str[i - 1] >= '0'))
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
