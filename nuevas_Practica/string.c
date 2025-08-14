#include "string.h"

char * mi_strcpy(char *destino, const char *origin)
{
    char *aux=destino;
    while(*origin!='\0')
    {
        *destino=*origin;
        origin++;
        destino++;
    }
    *destino='\0';
    return aux;
}

char *mi_strcat(char *destino, const char *origen)
{
    char *aux= destino;
    while(*destino!='\0')
    {
        destino++;
    }
    *destino=' ';
    destino++;
    while(*origen!='\0')
    {
        *destino=*origen;
        destino++;
        origen++;
    }
    *destino='\0';
    return aux;
}
char *mi_strrcat(char *destino, const char *origen, int caracteres)
{
    int i=0;
    char *aux = destino;
    while(*destino!='\0')
    {
        destino++;
    }
    *destino=' ';
    destino++;
    while(*origen!='\0' && caracteres!=i)
    {
        *destino=*origen;
        destino++;
        origen++;
        i++;
    }
    *destino='\0';
    return aux;

}

char *mi_strch(char *s1, int c)
{
    char error[20]="No se encontro el caracter";
    while (*s1!='\0')
    {
        if(*s1!= c)
        {
            s1++;
        }else return s1;
    }
    return NULL;

}
