#include <stdio.h>

int main()
{
    for (int i = 0; i < 12; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("i is %d\n", i);
    }

    return 0;
}