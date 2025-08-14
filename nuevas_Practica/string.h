#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>

char *mi_strcpy(char *destino, const char *origen);
char *mi_strcat(char *destino, const char *origen);
char *mi_strrcat(char *destino, const char *origen,int caracteres);



#endif // STRING_H_INCLUDED
