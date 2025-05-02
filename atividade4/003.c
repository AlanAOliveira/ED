#include <stdio.h>

typedef struct hospede {
    int codigo;
    float peso;
    char sexo;
}hospede;

typedef hospede hotel[10];

void maisPesado(hotel Pessoa, int * fim){
    float maiorpeso = 0;
    hospede maispesado;

    if(*fim<0){
        printf("Nao existem pessoas cadastradas\n\n");
        return;
    }

    for(int i; i<= *fim; i++){
        if(Pessoa[i].peso > maiorpeso){
            maispesado = Pessoa[i]; 
        }
    }

    printf("Codigo: %i,\nPeso: %.2f,\nSexo: %c\n", maispesado.codigo,maispesado.peso, maispesado.sexo);

}

void menosPesado(hotel Pessoa, int * fim){

    if(*fim<0){
        printf("Nao existem pessoas cadastradas\n\n");
        return;
    }
    //como nao e possivel saber o maximo peso possivel o primeiro valor e o de uma pessoa aleatoria
    float menorpeso = Pessoa[0].peso;
    hospede menospesado = Pessoa[0];

    for(int i; i<= *fim; i++){
        if(Pessoa[i].peso < menorpeso){
            menospesado = Pessoa[i]; 
        }
    }

    printf("Codigo: %i,\nPeso: %.2f,\nSexo: %c\n", menospesado.codigo,menospesado.peso, menospesado.sexo);

}

void mostrarPessoa(){
}

void inserirPessoa(){
}

void removerPessoa(){
}

void numeroPessoas(int fim){
    if(fim > -1)
        printf("Existem %i hospedes\n\n", fim + 1);
    else
        printf("Nao existem pessoas cadastradas\n\n");
}

void listarPessoas(hotel Pessoa, int * fim){    
    if(*fim<0){
        printf("Nao existem pessoas cadastradas\n\n");
        return;
    }

    for(int i; i<= *fim; i++){
        printf("cod: %i, peso: %.2f, sexo: %c\n", Pessoa[i].codigo,Pessoa[i].peso, Pessoa[i].sexo);
    }
}

void erroMensagem(){
}

int main(){
    hotel Pessoa;
    int fim = -1;
    int i;

    int opcao;
    do{
        printf("Digite a opcao desejada:\n");
        printf("1.Pessoa mais pesada\n");
        printf("2.Pessoa menos pesada\n");
        printf("3.Mostrar os dados de uma pessoa, a partir do seu codigo.\n");
        printf("4.Inserir os dados de uma pessoa.\n");
        printf("5.Remover uma pessoa, a partir do seu codigo.\n");
        printf("6.Mostrar o numero de pessoas hospedadas.\n");
        printf("7.Mostrar a relacao de pessoas hospedadas.\n");
        printf("8.Fim.\n");
        scanf("%i", &opcao);
        fflush(stdin);//limpa o input do teclado em caso de entrada de char
        switch (opcao){
            case 1:{
                maisPesado(Pessoa, &fim);
                break;
            }
            case 2:{
                menosPesado(Pessoa, &fim);
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
                numeroPessoas(fim);
                break;
            }
            case 7:{
                listarPessoas(Pessoa, &fim);
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

