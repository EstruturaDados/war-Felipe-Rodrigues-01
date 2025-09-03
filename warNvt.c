#include <stdio.h>
#include <string.h>

//Constante Global
#define MAX_TERRITORIO 5

//Definição da Struct
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

//Função principal (main)
int main(){
    struct Territorio areas[MAX_TERRITORIO]; //criando um vetor do tipo struct
    int totalTerritorios = 0;

    //Solicitando que o usuario cadastre os territorios
    printf("==================================\n"); //estilização
    printf("----Iremos Cadastrar os Territorios----\n"); //estilização
    for(int i = 0; i < MAX_TERRITORIO; i++){
        printf("==================================\n"); //estilização
        printf("Digite o nome do %d° territorio: ", i + 1);
        scanf("%s", areas[i].nome);

        printf("Digite uma cor: (Ex: Azul, vermelho)");
        scanf("%s", areas[i].cor);

        printf("Digite a quantidade de tropas:");
        scanf("%d", &areas[i].tropas);
        ("==================================\n"); //estilização
    }



    //Exibindo Territorios
    printf("==================================\n"); //estilização
    printf("----Exibindo Territorios----\n");
    for (int i = 0; i < MAX_TERRITORIO; i++){
        printf("============== Território %d ==============\n", i + 1); //estilização
        printf("Nome do territorio:%s\n", areas[i].nome);
        printf("Cor do Exercito:%s\n", areas[i].cor);
        printf("Número de Tropas:%d\n", areas[i].tropas);
        ("==================================\n"); //estilização
    }



    
    
    
    
    
    
    
    
    
    return 0;
}