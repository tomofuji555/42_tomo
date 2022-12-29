char *ft_strdup(char *src)
{
    int i = 0;
    char *a;
    a = ((char *)malloc(ft_strlen(src) * sizeof(char) + 1));
    if (a == NULL)
        return (0);
    while (src[i] != '\0')
    {
        a[i] = src[i];
        i++;
    }
    a[i] = '\0';
    return a;
}