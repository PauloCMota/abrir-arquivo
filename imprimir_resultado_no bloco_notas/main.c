#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    int x,y,z,tam;
    char nome[100];
    char tamchar[100];
    char nomeDigitado[100] = {"O nome digitado foi : "};
    char tamanhoDoNome[100] = {"O nome tem letras"};
    FILE *f = fopen("Arquivo.txt", "w");
    setlocale(LC_ALL,"Portuguese");

    for(x=1; x<=2; x++)
    {
        printf("Digite um nome : ");
        gets(nome);
        tam = strlen(nome);
        sprintf(tamchar,"%i" , tam);
        printf("Esse nome tem %i \n Letras. \n\n ", tam );
        fputs(nome , f);
        fputs(tamchar , f);


    }
    printf("\n\n");
    system("pause");
    fclose(f);
    return 0;
}
