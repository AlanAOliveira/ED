#include <stdio.h>
#include <stdlib.h> //o malloc é dessa biblioteca standart

typedef struct no
{
    float peso;
    struct no *prox; // apontador para o proximo elemento
} NO;


void main()
{
    NO *inicio = NULL, *aux, *aux2;

    float pesoDig;

    int opcao = 0;

    while(opcao != 4) {
        printf("Escolha uma das opcoes:\n1.inclusao de um novo peso.\n2.retirada de um peso ja existente.\n3.listagem total de todos os pesos armazenados no conjunto.\n4.Fim.\n");
        scanf("%i", &opcao);
        if(opcao == 1) {
            printf("Qual peso a ser adicionado?\n");
            scanf("%f", &pesoDig);
            aux = malloc(sizeof(NO));//aloca novo no
            aux->peso = pesoDig;//adiciona peso ao no
            aux->prox = NULL;//starta o proximo no como nulo

            if(inicio == NULL) {
                
                inicio =  aux; //primeiro no na lista vazia
            } else if(inicio->prox == NULL) {
                
                inicio->prox = aux;//primeiro no na lista com 1 peso
            } else {
                int flag = 0;//flag pra se encontrar o fim
                aux2 = inicio->prox;//comeca procurando pelo inico
                while(flag<1) {//loop que procura o ultimo no ai coloca o novo no com9 proximo
                    if(aux2->prox == NULL) {
                        aux2->prox = aux;
                        flag = 1;
                    }
                    aux2 = aux2->prox;
                }


            }

        } else if(opcao == 2) {
            if(inicio == NULL) {
                printf("lista vazia\n");//se o nicio for vazio ele nao tira nada
            } else {
                inicio = inicio->prox;//se tiver algo ai ele aponta o inicio para o segundo item
            }

        } else if(opcao == 3) {
            NO * item;
            item = inicio; //item a ser mostrado
            while(item != NULL) {// loop que ve se o item tem algo ai mostra
                printf("peso:%.2fKG\n", item->peso);
                item = item->prox;
            }
        }
    }

    return;

}

    