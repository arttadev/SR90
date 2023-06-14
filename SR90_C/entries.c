#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int key;
    int value;
} entry;

typedef struct
{
    entry* entries;
    int size;
} entryList;

entryList entries(int* arr, int size) {
    entryList result;
    result.entries = (entry*)malloc(size * sizeof(entry));
    result.size = size;

    for (int i = 0; i < size; i++) {
        result.entries[i].key = i;
        result.entries[i].value = arr[i];
    }

    return result;
}

void printEntries(entryList entryList)
{
    printf("[");
    for (int i = 0; i < entryList.size; i++) {
        printf("[%d, %d]", entryList.entries[i].key, entryList.entries[i].value);
        if (i < entryList.size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    int arr[] = {23, 24, 25, 26};
    int size = sizeof(arr) / sizeof(int);
    entryList entryList = entries(arr, size);
    printf("Entries: ");
    printEntries(entryList);
    free(entryList.entries);
    return 0;
}
