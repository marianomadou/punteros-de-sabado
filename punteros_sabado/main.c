#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escribirTexto (*char);
void leerTexto(*char);

int main()
{
    int r;
    r=escribirTexto("Hola a todos!!");
    if(r)
        {
        printf("guardo con exito");
        }
        else{
            printf("no se guardo el archivo");
        }
        int r;
        r=leerTexto(txt);
        if(r)
        {
            printf("%s, txt");
        }
        else{
            printf("imposible leer archivo");
        }


    return 0;
}

void escribirTexto (*char texto)
{
    FILE* pA;//puntero archivo=pA
    int retorno=0;
    pA=fopen("archivoTXT.txt", "w");//por defecto se escribe en la carpeta donde corre el proyecto
    if(pA!=NULL)// si encuentra el proyecto sigue
    {
        fprintf(pA, "%s", texto);
        fclose(pA);
        retorno=1;
    }
    return retorno;
}

void leerTexto(*char texto)
{
    FILE* pA;
    char t[100];
    strcpy(texto,"");

    int retorno=0;
    pA= fopen("archivoTXT.txt", "r");
    if (pA!=NULL)
    {
        while(!feof(pA))
        {
        fgets(texto, 50, pA);
        strcat(texto, t);
        }
    fclose(pA);
    retorno=1;

    }
    printf("%s", texto);
    return=retorno;
}
