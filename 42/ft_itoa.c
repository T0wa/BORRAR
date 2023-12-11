/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int countnums(int n)
{
	while(n != 0)
	{
		n /= 10;
	}
	return (n);
}

char *changeOrder(char *str, char *str2,int i)
{
	int c;
	
	c = 0;
	while(i > 0)
	{
		str2[c] = str[i - 1];
		i--;
		c++;
	}
	return(&str2[0]);
}

char *ft_itoa(int n)
{
	char	*num;
	int		i;

	if(n < 0)
	{
		n *= -1;
		num = (char *) malloc(sizeof(char) * countnums(n) + 1);
		num[0] = '-';
		i = 1;
	}
	else
	{
		i = 0;
		num = (char *) malloc(sizeof(char) * countnums(n));
	}
	while(n != 0)
	{
		num[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
    char str2[i];
	return (changeOrder(num,str2,i));
}
int main()
{
    printf("%s",ft_itoa(-123));

    return 0;
}
