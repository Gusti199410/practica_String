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
    while (*s1!='\0')
    {
        if(*s1!= c)
        {
            s1++;
        }else return s1;
    }
    return NULL;
}

char *mi_strrch(char *s1, int c)
{
    int i=0;
    char *inicio=s1;
    while(*s1!='\0')
    {
        i++;
        s1++;
    }
    char *fin=inicio+i;
    while(inicio!=fin)
    {
        if(*fin!=c)
        {
            fin--;
        }else return fin;
    }
    return NULL;

}

bool es_Palindormo(const char *s1)
{
    int i=0;
    char *inicio=s1;
    while(*s1!='\0')
    {
        s1++;
        i++;
    }
    char *fin=inicio+i;
    while(inicio>fin)
    {
        if(*inicio==' ')
        {
            inicio++;
        }
        if(*fin==' ')
        {
            fin--;
        }
        if(*inicio==*fin)
        {
            inicio++;
            fin--;
        }else
        {
            return false;
        }
    }
    return true;

}
int mi_funcio_Atoi(const char *s1)
{
    int numero,neg=1;
    if(*s1==' '|| *s1=='\0')
    {
        s1++;
    }
    if(*s1=='-')
    {
        neg=-1;
        s1++;
    }
    if(*s1=='+')
    {
        s1++;
    }
    while(*s1>='0' && *s1<='9')
    {
        numero=numero*10+(*s1-'0');
        s1++;
    }

    return numero*neg;
}


