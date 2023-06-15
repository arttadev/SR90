#include "JSstringInC.h"

void lastIndexOf(const char* str, const char* substr)
{
    int strLen = strlen(str);
    int subLen = strlen(substr);
    if (subLen > strLen) {
        return ;
    }
    int index = -1;
    for (int i = 0; i < strLen; i++) {
        if (strncmp(str + i, substr, subLen) == 0) {
            index = i;
        }
    }
    int i = strLen - subLen;
    printf("%d\n", index);
}

int main() {
    const char* str = "This is lastIndexOf is method!";
    const char* substr = "!";
    lastIndexOf(str, substr);
    return 0;
}