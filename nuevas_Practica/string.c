#include "string.h"

char * mi_strcpy(char *destino, const char *origin)
{
    char *aux=*destino;
    while(*origin!='\0')
    {
        *destino=*origin;
        origin++;
        destino++;
    }
    *destino='\0';
    return aux;
}

char *unir_Cadena(char *destino, const char *origen)
{
    char *aux=*destino;
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
