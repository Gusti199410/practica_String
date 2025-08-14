#include "string.h"

char * mi_strcpy(char *destino, const char *origin)
{
    char aux[]="";
    while(*origin!='\0')
    {
        *aux=*origin;
        origin++;
        aux++;
    }
    *aux='\0';
    *destino=*aux;

    return destino;

}
