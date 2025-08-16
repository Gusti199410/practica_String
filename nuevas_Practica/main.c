#include"string.h"

int main()
{
    char origen[15]=" mundo!";
    char destino[15]="Hola soy gus";
    mi_memcpy(destino,origen,5);
    printf("%s",destino);
    free(destino);
    return 0;
}
