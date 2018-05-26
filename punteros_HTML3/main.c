#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int id;
    char nombre[50];
}ePersona;

int main()
{
    ePersona miPersona;//={1, "Juan"};
    FILE * f;
    //f=fopen("miarchivo.txt", "w");
    /*f=fopen("miarchivo.dat", "wb");//modo binario

    //fprintf(f, "%d,%s\n", miPersona.id, miPersona.nombre);

    fwrite(&miPersona, sizeof(ePersona), 1, f);

    fclose(f);*/

    f=fopen("miarchivo.dat", "rb");

    fread(&miPersona, sizeof(ePersona), 1, f);

    fclose(f);

    printf("%d, %s\n", miPersona.id, miPersona.nombre);

    return 0;
}
