#include"string.h"

int main()
{
    char origen[15]="Hola mundo!";
    int numero=mi_strlen(origen);
    char *destino=copia_Cadena(origen);
    printf("%s",destino);
    //printf("%d",mi_funcio_Atoi(origen));

    free(origen);

    return 0;
}
