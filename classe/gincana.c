#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int opt;
    // Votos - meninos (xerife)
    int Joao = 0, Pedro = 0, Leandro = 0;
    // Votos - meninas (sinhazinha)
    int Maria = 0, Julia = 0, Bruna = 0;
    int qtd; 
    int voto;

    //Menu de áreas
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

        // Área de exploração da gincana
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
        
            //Área de compra de cartelas 
            case 2:{
                int categoria;

            printf("\n == Categoria ==\n");
            printf("[1] Votar no XERIFE (meninos)\n");
            printf("[2] Votar na SINHAZINHA (meninas)\n");
            printf("Escolha a categoria:");
            scanf(" %d", &categoria);

            if (categoria != 1 && categoria !=2){
                printf("Categoria invalida. Tente novamente.\n");
                break;
            }
            if (categoria == 1){
                printf("\n\n Candidatos a xerife \n\n");
                printf("1 - Joao\n");
                printf("2 - Pedro\n");
                printf("3 - Leandro\n");
                printf("Digite o numero do candidato escolhido: ");
                scanf(" %d", &voto);

            printf("Quantas cartelas voce deseja comprar? ");
            scanf("%d", &qtd);

            switch (voto){
                case 1: Joao += qtd; break;
                case 2: Pedro += qtd; break;
                case 3: Leandro += qtd; break;
                default:(printf("Inválido!\n"));
            }
            }
            else if(categoria == 2){
                printf("\n\n Candidatos a sinhazinha\n\n");
                printf("4 - Maria\n");
                printf("5 - Julia\n");
                printf("6 - Bruna\n");
                printf("Digite o numero do canditado escolhido: ");
                scanf(" %d", &voto);

            printf("Quantas cartelas voce deseja comprar? ");
            scanf("%d", &qtd);

            switch (voto){
                case 4: Maria += qtd; break;
                case 5: Julia += qtd; break;
                case 6: Bruna += qtd; break;
                default:
                    printf("Invalido!\n");
            }
        }
            else {
                printf("Categoria invalida. Tente novamente.\n");
            }
            printf("Voto registrado!\n");
            break;

            //Área feita para mostrar os ganhadores
            case 3:
            printf("\n RESULTADOS  \n");

            printf("\n--XERIFE (meninos)--\n");
            printf("Joao: %d votos\n", Joao);
            printf("Pedro: %d votos\n", Pedro);
            printf("Leandro: %d votos\n", Leandro);

            printf("\n--SINHAZINHA (meninas)--\n");
            printf("Maria: %d votos\n", Maria);
            printf("Julia: %d votos\n", Julia);
            printf("Bruna: %d votos\n", Bruna);

            int maiorX = Joao;
    
            if (Pedro > maiorX) maiorX = Pedro;
            if (Leandro > maiorX) maiorX = Leandro;

            int maiorS = Maria;
            if (Julia > maiorS) maiorS = Julia;
            if (Bruna > maiorS) maiorS = Bruna;

            printf("\nGanhadores:\n");
            printf("\nXERIFE:\n ");
            if (Joao== maiorX) printf("Joao com %d votos!\n", maiorX);
            if (Pedro== maiorX) printf("Pedro com %d votos!\n", maiorX);
            if (Leandro== maiorX) printf("Leandro com %d votos!\n", maiorX);

            printf("\nSINHAZINHA:\n ");
            if (Maria== maiorS) printf("Maria com %d votos!\n", maiorS);
            if (Julia== maiorS) printf("Julia com %d votos!\n", maiorS);
            if (Bruna== maiorS) printf("Bruna com %d votos!\n", maiorS);
            break;

            case 0: 
            printf("Encerrando o programa...\n");
            exit(0);

            default:
            printf("Opcao invalida.\n");
            }
        }
    }
    return 0;
}