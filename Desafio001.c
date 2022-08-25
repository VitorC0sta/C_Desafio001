#include <stdio.h>
#include <stdlib.h> 

int tipoMatriz();
int validaNum(int escolha);


int main() 
{

    int escolha = tipoMatriz(); //Variável 

    printf("Escolha %d", escolha);
    

    getchar();
    return 0;

}

int tipoMatriz() //Captura o tipo da matriz.
{ 
    
    int escolha;
        printf("\n\n\n\tEscolha se sera matriz quadrada[ixi] ou matriz A[lxc]. ");
        printf("\n\n\t\tPara 0 - Q[ixi]\t| 1 - A[lxc]: ");
        scanf("%d%*c", &escolha);
        escolha = validaNum(escolha);

    return escolha;
}

int validaNum(int escolha) //Restringe a escolha -- ERRO com caractéres.
{
    int escolhaValida = escolha;
    int erroNum = 0;

    do{
            if (escolhaValida != 0 && escolhaValida != 1){
              
                    erroNum = 9;
                    printf("\n\n\n\tEscolha se sera matriz quadrada[ixi] ou matriz A[lxc]. ");
                    printf("\n\n\t\tPara 0 - Q[ixi]\t| 1 - A[lxc]: ");
                    scanf("%d%*c", &escolhaValida);
            } else {
                erroNum =0;
            }
        }while(erroNum != 0);

     escolhaValida;
    
    return escolhaValida; 
}