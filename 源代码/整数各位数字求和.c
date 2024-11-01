#include <stdio.h>

int sum(int num)
{
    char str[20]; 
    scanf("%d", &num);
    sprintf(str, "%d", num);

    int sum = 0;

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += str[i] - '0';
        }
    }

    return sum;
}



int main()
{
    int n;

    scanf("%d", &n);
    int result = sum(n);
    printf("%d", result);

    return 0;
}



