#include "JSstringInC.h"

void substring(char *str, int start, int end)
{
    if (start == end)
        return ;
    if (start > end)
    {
        int tmp = start;
        start = end;
        end = tmp;
    }
    for(int i = start; i < end; i++)
        printf("%c", str[i]);
    printf("\n");
}

int main()
{
    char *str = "This is startWith method.";
    substring(str, 6, 0);
}