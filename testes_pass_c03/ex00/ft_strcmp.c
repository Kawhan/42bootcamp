int ft_strcmp(char *s1, char *s2)
{
	int cont1;

	cont1 = 0;
	while ((s1[cont1] != '\0') && (s2[cont1] != '\0') && (s1[cont1] == s2[cont1]))
		cont1++;
	return (s1[cont1] - s2[cont1]);
}
