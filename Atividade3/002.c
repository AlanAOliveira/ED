#include <stdio.h>

typedef struct hospede {
    int codigo;
    float peso;
    char sexo;
}hospede;

typedef hospede hotel[10];

void maisPesado(){
}

void menosPesado(){
}

void mostrarPessoa(){
}

void inserirPessoa(){
}

void removerPessoa(){
}

void numeroPessoas(){
}

void listarPessoas(){
}

void erroMensagem(){
}


int main(){
    hotel Pessoa;

    int opcao;
    do{
        printf("Digite a opcao desejada:\n");
        printf("1.Pessoa mais pesada\n");
        printf("2.Pessoa menos pesada\n");
        printf("3.Mostrar os dados de uma pessoa, a partir do seu código.\n");
        printf("4.Inserir os dados de uma pessoa.\n");
        printf("5.Remover uma pessoa, a partir do seu código.\n");
        printf("6.Mostrar o número de pessoas hospedadas.\n");
        printf("7.Mostrar a relação de pessoas hospedadas.\n");
        printf("8.Fim.\n");
        scanf("%i", &opcao);
        fflush(stdin);//limpa o input do teclado em caso de entrada de char
        switch (opcao){
            case 1:{
                maisPesado();
                break;
            }
            case 2:{
                menosPesado();
                break;
            }
            case 3:{
                mostrarPessoa();
                break;
            }
            case 4:{
                inserirPessoa();
                break;
            }
            case 5:{
                removerPessoa();
                break;
            }
            case 6:{
                numeroPessoas();
                break;
            }
            case 7:{
                listarPessoas();
                break;
            }
            case 8:{
                printf("Fim\n");
                break;
            }
            default:
                erroMensagem();
        }
    }while(opcao != 8);


 return 0;
}

