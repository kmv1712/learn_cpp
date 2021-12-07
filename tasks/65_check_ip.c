#include <stdio.h>

int main()
{
    int arr[100], count;
    char c;
    count = scanf("%d.%d.%d.%d %c", &arr[0], &arr[1], &arr[2], &arr[3], &c);
    printf("%d", count);

    if ( count != 4 )
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < 4; ++i)
    {
        if ( arr[i] <= 255 && arr[i] >= 0 )
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
