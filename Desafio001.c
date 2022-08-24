#include <stdio.h>
#include <stdlib.h> 

int tipoMatriz();
void matrizOrdem();

int main() {

    int tipoM = tipoMatriz();

    if(tipoM == 0) {
        printf("\n\n\tMatriz escolhida: [Matriz Quadrada].");
    } else {
        
    }

    getchar();
    return 0;

}

int tipoMatriz(){
    
    int escolha;

    printf("\n\tEscolha se sera matriz quadrada[ixi] ou matriz A[lxc]. ");
    printf("\n\n\t\tPara 0 - Q[ixi]\t| 1 - A[lxc]: ");
    scanf("%d%*c", &escolha);
    
    
        while(escolha > 1) {

            printf("\n\tEscolha invalida, Digite: ");
            printf("\n\n\t\t {0} - Q[ixi]\t| {1} - A[lxc]: ");
            scanf("%d%*c", &escolha);
            
            while(escolha < 0) {

                printf("\n\tEscolha invalida, Digite: ");
                printf("\n\n\t\t {0} - Q[ixi]\t| {1} - A[lxc]: ");
                scanf("%d%*c", &escolha);
    
            }

        }

    return escolha;
}



void matrizOrdem() {

}