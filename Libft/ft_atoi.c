int ft_atoi(char *str)
{
    int i;
    int check;
    int num;
    i = 0;
    check = 1;
    num = 0;
    while(str[i] == ' ' || str[i] == '\t' ||  str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
        i++;
    while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			check *= -1;
		i++;
	}
    while(str[i] >= '0' && str[i] <= '9')
    {
        num *= 10;
        num += str[i] - 48;
        i++;
    }
    return (check * num);
}

#include <stdio.h>

int main()
{
    char str1[] = "   ---+--+123456789ab567";
	printf("%d", ft_atoi(str1));
}