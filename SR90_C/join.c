#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(int* arr, int size, const char* delimiter)
{
    int totalLength = 0;
    for (int i = 0; i < size; i++)
    {
        int numberLength = snprintf(NULL, 0, "%d", arr[i]);
        totalLength += numberLength;
    }
    totalLength += (strlen(delimiter) * (size - 1)) + 1;
    char* joinedString = (char*)malloc(totalLength * sizeof(char));
    sprintf(joinedString, "%d", arr[0]);
    for (int i = 1; i < size; i++) {
        strcat(joinedString, delimiter);
        char numberString[12];
        sprintf(numberString, "%d", arr[i]);
        strcat(joinedString, numberString);
    }
    return joinedString;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    const char* delimiter = ", ";
    char* joinedString = join(arr, size, delimiter);
    printf("Joined String: %s\n", joinedString);
    free(joinedString);
    return 0;
}