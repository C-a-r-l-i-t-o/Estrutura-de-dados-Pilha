#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Só pode busca e insercao de valores na pilha
ela tem o push e o pop- (push para colocar e pop igual a tirar)
a pilha esta cheia quando topo== n-1, e vazia quando topo=-1 

se precisar de organizar e posivel fazer com um vetor auxiliar (pode usar uma outra pilha 
auxiliar), tem que encontrar a melhor forma para ordenar 

se for dinamica e so realocar os ponteiros ( colocarqur uma tipagem de ordenamento)

recuperar a pilha usa a funcao peek

create 
destroy
is_
*/


#define TAM 4

struct pilha{
    int topo;
    int informar[TAM];

};
//-----------------------------------------------------------------------------------
void push(struct pilha *p, int info){
        if(p-> topo < TAM)
        {

            printf(">>>>>>>>>>INSERIR>>>>>> : %d\n", info); 
        p-> informar [p->topo] = info; //onde contera uma nova informacao
        p-> topo++; // update da variavel topo, onde recebe proximo informacao.
        }
            else{
            printf("Pilha cheia, impossivel INSERIR elemento! \n \n");
            }
}
//-----------------------------------------------------------------------------------
// valor e a variavel que recebe o informacao que sera retirado da pilha 
// enseguida fazendo a varredura para ver se tem mais instancias a ser retirado
// o decremento eh para atualizar o topo
// obtendo a informacao
// update da posicao e a informacao sem valor
int pop (struct pilha *p, int valor) {
    if (p-> topo > 0){
    p->topo --;
    valor = p-> informar[p-> topo];
    p-> informar[p->topo] = -1;

    printf("<<<<<<<<<<<RETIRAR<<<<<<<<<<<<<< :%d\n", valor);

        return valor; 
        } 
        else {
            printf("Pilha vazia, impossivel RETIRAR elemento! \n\n");

            return -1;    

         }
}
//----------------------------------------------------------------------------------
// posicoes com informacoes para ser impressas
void imprimir (struct pilha p){
    printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨PILHA¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n\n");
    for (int i= 0; i < p.topo; i++)
        printf(" %d", p.informar[i]);
    printf("\n\n");
    printf("*******************************************************************\n\n");

}
int main(){
    int i = 0, valor_retirado;
    struct pilha pi;    //comando para guardar a pilha element
    pi.topo; 
    for(i=0; i <TAM; i++) {
        pi.informar[i] = -1;
    }

    //Colocando valore para a pilha ser imprimida na tela
    
    push(&pi,99);
    imprimir(pi);





    
    return 0;
}

//------------------------------------------------

/*  
    //TAD DE PILHA.H

    #ifndef STATIC_STACK
    #DEFINE STATIC_STACK

    #include <stdbool.h>

    typedef struct _static_stack  StaticStack



    #endif //



*/