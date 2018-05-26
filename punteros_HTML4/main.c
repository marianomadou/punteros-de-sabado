#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int id;
    char nombre[50];
    int estado;
}ePersona;

int main()
{
    ePersona listaPersonas[4]={{1,"Juan",1}, {2,"Maria",0}, {3,"Jose",1}, {0,"",0}};
    ePersona lectura[4];
    int i;
    int contador=0;
    FILE * f;

    for (i=0;i<4;i++)
    {
        lectura[i].estado=0;
    }

    f=fopen("miarchivo.dat", "wb");

    for (i=0; i<4;i++)
    {
        if (listaPersonas[i].estado==1)
        {
            contador++;
        }
    } fwrite(&contador, sizeof(int), 1, f);

    fclose(f);

    f=fopen("miarchivo.dat", "rb");
    fread(&contador, sizeof(int), 1, f);

    fread(lectura, sizeof(ePersona), contador, f);

    fclose(f);

    for(i=0;i<contador;i++)
    {
        if (lectura[i].estado==1)
        {
            printf("%d, %s\n", lectura[i].id, lectura[i].nombre);
        }

    }

    return 0;
}
