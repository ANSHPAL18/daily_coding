#include <stdio.h>

int main()
{
    for (int i = 0; i < 12; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("i is %d\n", i);
    }

    return 0;
}