#include"string.h"

int main()
{
    char destino[30]="Dábale arroz a la zorra el abad";
    char origen[10]="mundo";
    char c='a';
    ///copiar B en A
    //mi_strcat(destino,origen);
    //mi_strrcat(destino,origen,3);
    if(es_Palindormo(destino))
    {
        printf("Es palindromo");
    }else{
        printf("no lo es");

    }
    //printf("%s\n",mi_strrch(destino,c));
    return 0;


}
