#include <stdio.h>

void includes(int arr[], int len, int find)
{
    for (int i = 0; i < len; i++)
    {
        if (find == arr[i])
        {
            printf("True!\n");
            return ;
        }
        else if (i == len - 1)
            printf("False!\n");
    }
}

int main()
{
    int arr[] = {2, 4, -2, 65, 24};
    int len = sizeof(arr) / sizeof(int);
    includes(arr, len, -4);
    return (0);
}