#ifndef JSSTRINGSINC_H
#define JSSTRINGSINC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char at(char *str, int index);
char charAt(char *str, int index);
char charCodeAt(char *str, int index);
char *concat(char *str1, char *con, char *str2);
void endsWith(const char* str, const char* suffix, int endPosition);
void include_str(char *str, char *inc);
void indexOf(char *str, char *inc);
void lastIndexOf(const char* str, const char* substr);
void padEnd(char *str, int size, char sym);
void padStart(char *str, int size, char sym);
char *repeat(char *str, int times);
char *replace(char *str, char *mutable, char *new);
char* replaceAll(const char* str, const char* search, const char* replace);
char *slice(char *str, int startIndex, int endIndex);
void startWith(char *str, char *start, int position);
void substring(char *str, int start, int end);
void toLowerCase(char *str);
void toUpperCase(char *str)
void trim(char *str);
void trimEnd(char *str);
void trimStart(char *str);

#endif