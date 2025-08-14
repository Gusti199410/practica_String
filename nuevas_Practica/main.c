#include <stdio.h>
#include <stdlib.h>

int main()
{
    char destino[30]="Hola";
    char origen[10]="mundo";
    ///copiar B en A
    unir_Cadena(destino,origen);
    printf("%s\n",destino);
   //printf("%s\n",origen);
    return 0;


}
