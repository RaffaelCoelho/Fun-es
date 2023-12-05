#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{

    printf("\n========================\n");
    printf("\tSENAI");
    printf("\n========================\n");
}

void limpa_tela()
{
    fflush(stdin);
    system("cls || clear");
}

void mostrar_idade(int idade){
printf("Idade: %d \n", idade);


}
int main()

{

    char nome[200];
    int idade;

    cabecalho();

    printf("Digite um nome:");
    gets(nome);

    printf("Digite uma idade:");
    scanf("%d", &idade);
    
    limpa_tela();
    cabecalho();

    printf("Nome: %s \n", nome);
    //printf("Idade: %d \n", idade);
    mostrar_idade(idade);
    
    
    return 0;
}