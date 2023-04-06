#include <stdio.h>
int main()
{
    int i = 1;
    int input;
    scanf("%d", &input);
    for (i; i <= input; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}