int		ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
