#include <stdio.h>
#include <locale.h>


int main(){
    
    int opt;
    //int Joao = 0, Pedro = 0, Miguel = 0;
    //int Maria = 0, Julia = 0, Bruna = 0;
    int qtd;

    while (1)
    {
        printf("\nMENU\n");
        printf("[1] Explicacao da gincana\n");
        printf("[2] Comprar cartela \n");
        printf("[3] Ver ganhadores\n");
        printf("[0] Sair \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opt);

        if(opt == 0) {
            printf("Saindo...\n");
            break;
        }

        switch (opt) {

            case 1:
            printf("\n\n EXPLICACAO DA GINCANA \n\n");
            printf("E ai, pessoal! Preparem os chapeus e os vestidos de chita! \n");
            printf("A nossa tradicional Gincana Junina de Xerife e Sinhazinha esta de volta e a competicao vai ser quente!\n");
            printf("Este ano, a disputa pelo titulo mais cobicado da festa envolve nao so carisma, mas tambem muita estrategia!\n\n");

            printf("Como funciona? E simples e divertido!\n");
            printf("Os candidatos a Xerife e Sinhazinha estao com suas cartelas de voto a postos.\n");
            printf("Cada cartela vendida conta como um ponto para o seu candidato favorito.\n");
            printf("O objetivo e mobilizar a galera, vender o maximo de cartelas possivel e garantir a vitoria!\n\n");

            printf("- Cada cartela = um voto!\n");
            printf("- O candidato (ou dupla) que acumular a maior quantidade de cartelas vendidas ate o dia da apuracao\n");
            printf("  sera coroado o GRANDE VENCEDOR da nossa festa junina! \n\n");
            break;

            case 2:{
                int candidato;

            printf("\n\n COMPRAR CARTELA \n\n");
            printf("Escolha o candidato:\n");
            printf("[1] Joao\n");
            printf("[2] Pedro\n");
            printf("[3] Miguel\n");
            printf("[4] Maria\n");
            printf("[5] Julia\n");
            printf("[6] Bruna\n");
            printf('Escolha uma opcao:');
            scanf('%d', &candidato);    

            printf("Quantas cartelas voce deseja comprar? ");
            scanf("%d", &qtd);
            }

            if (qtd > 0) {
                printf("Voce comprou %d cartela(s) com sucesso!\n", qtd);
            }
            else {
                printf("Quantidade invalida. Tente novamente.\n");
            }
            break;        

            case 3:
            printf("\n\n VER GANHADORES \n\n");
            printf("Os ganhadores da gincana serao anunciados no dia da festa junina!\n");
            printf("Fique ligado e boa sorte a todos os participantes!\n");
            break;
        }
    }
    return 0; 
}