#include"string.h"

int main()
{
    char destino[30]="Hola mundo";
    char origen[10]="mundo";
    char c='z';
    ///copiar B en A
    //mi_strcat(destino,origen);
    //mi_strrcat(destino,origen,3);
    printf("%s\n",mi_strch(destino,c));
    return 0;


}
