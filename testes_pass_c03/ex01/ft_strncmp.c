int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && n - 1 > i && s1[i] == s2[i])
    {
        i++;
    }
    if (n == 0)
    {
        return (0);
    }
    return (s1[i] - s2[i]);
}