#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct javaScript
{
	char	*array;

} javaScript;

size_t js_strlen(char *str)
{
	int len;
	while (*str++)
		len++;
	return 0;
}

char* strjoin(const char* str1, const char* str2) {
    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);
    size_t totalLength = length1 + length2 + 1;    
    char* joined = (char*)malloc(totalLength * sizeof(char));
    if (joined != NULL) {
        memcpy(joined, str1, length1);
        
        memcpy(joined + length1, str2, length2 + 1);
    }
	joined[totalLength] = '\0';
    return joined;
}

void strCpy(javaScript *obj, char *str)
{
	obj->array = strdup(str);
}

javaScript *concat(javaScript *obj1, javaScript *obj2)
{
	if (!obj2->array)
	{
		printf("Please send correct array!\n");
		return NULL;
	}
	javaScript *newObj = (javaScript*)malloc(sizeof(javaScript));
	if (!obj1->array)
	{
		newObj->array = strdup(obj2->array);
		return newObj;
	}
	newObj->array = strjoin(obj1->array, obj2->array);
	return newObj;	
}

int main()
{
	javaScript obj1, obj2;
	strCpy(&obj1, "Barev");
	strCpy(&obj2, "hajox");
	javaScript *newptr = concat(&obj1, &obj2);
	printf("%s\n", newptr->array);
	free(obj1.array);
	free(obj2.array);
	free(newptr->array);
	return 0;
}
