#include"string.h"

int main()
{
    char destino[30]="Hola amiigos";
    char origen[10]="mundo";
    char c='p';
    ///copiar B en A
    //mi_strcat(destino,origen);
    //mi_strrcat(destino,origen,3);
    printf("%s\n",mi_strrch(destino,c));
    return 0;


}
