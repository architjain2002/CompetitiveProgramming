#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n); //(int *)int arr[n] // 5

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", arr + i);
    // }

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(arr + i));
    }
    printf("\n");
    // int *arr2 = (int *)calloc(n, sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d  ", *(arr2 + i));
    // }
    realloc(arr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", *(arr + i));
    }

    printf("\n");
    free(arr);

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", *(arr + i));
    }
    return 0;
}
