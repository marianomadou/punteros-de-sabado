#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    char texto[100]="Los pelos verdes de Agustìn, ponete una gorra";
    f=fopen("miArchivo2.html", "w");

    /*fprintf(f, "<HTML><HEAD></HEAD><BODY><h1>");
    fprintf(f,"%s", texto);
    fprintf(f,"</h1></BODY></HTML>");*/

    fprintf(f, "<HTML><HEAD></HEAD><BODY><h1> %s </h1></BODY></HTML>", texto);

    fclose(f);

    return 0;
}
