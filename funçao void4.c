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

void mostrar_idade(int idade)
{
    printf("Idade: %d \n", idade);
}

int somar(int n1, int n2)
{

    int resultado;
    resultado = n1 + n2;

    return resultado;
}

 int main()
{
 int primeironumero;
 int segundonumero;
 int soma;



    char nome[200];
    int idade;

    cabecalho();

    printf("Digite um nome:");
    gets(nome);

    printf("Digite uma idade:");
    scanf("%d", &idade);

    printf("Digite o primeiro numero:");
    scanf("%d", &primeironumero);

    printf("Digite o primeiro numero:");
    scanf("%d", &segundonumero);

    soma = somar(primeironumero, segundonumero);

    limpa_tela();
    cabecalho();

    printf("Nome: %s \n", nome);
    
    // printf("Idade: %d \n", idade);
    mostrar_idade(idade);
    
    printf("Primeiro numero: %d\n" , primeironumero);
    printf("Segundo numero: %d\n" , segundonumero);
    printf("Soma: %d\n" , soma);
    
    return 0;
}