#include <stdio.h>
#include <stdlib.h>

int main()
{
    char destino[10]="Holaaaaaaaaaaaaaaaaa";
    char origen[10]="mundo";
    ///copiar B en A
    mi_strcpy(destino,origen);
    printf("%s\n",destino);
    printf("%s\n",origen);
    return 0;


}
