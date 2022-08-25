#include <stdio.h>
#include <stdlib.h>
#define max 10 

int tipoMatriz();
int validaNum(int escolhaMatriz);
int linhaMatriz();
int colunaMatriz(int i);
void matrizOrdemUser();
void montaMatrizOrdem(int i, int j);


int main() 
{



    int escolha = tipoMatriz(); //Variável 

    if(escolha == 0) {
        printf("%d", escolha);
    } if (escolha == 1) {
        matrizOrdemUser();
    } 




    getchar();
    return 0;

}

int tipoMatriz() //Captura o tipo da matriz.
{ 
    
    int escolhaMatriz;
        printf("\n\n\n\tEscolha se sera matriz quadrada[ixi] ou matriz A[lxc]. ");
        printf("\n\n\t\tPara 0 - Q[ixi]\t| 1 - A[lxc]: ");
        scanf("%d%*c", &escolhaMatriz);
        escolhaMatriz = validaNum(escolhaMatriz);

    return escolhaMatriz;
}

int validaNum(int escolhaMatriz) //Restringe a escolha -- ERRO com caractéres.
{
    int escolhaValida = escolhaMatriz;
    int erroNum = 0;

    do{
            if(escolhaValida != 0 && escolhaValida != 1) {
              
                    erroNum = 9;
                    printf("\n\n\n\tEscolha se sera matriz quadrada[ixi] ou matriz A[lxc]. ");
                    printf("\n\n\t\tPara 0 - Q[ixi]\t| 1 - A[lxc]: ");
                    scanf("%d%*c", &escolhaValida);
            } else {
                erroNum =0;
            }
        }while(erroNum != 0);

    
    return escolhaValida; 
}

void matrizOrdemUser() 
{
    printf("\n\n\t\t----***Matriz Ordem***----");
    
    int i, j;

    i = linhaMatriz();
    j = colunaMatriz(i);
    montaMatrizOrdem(i, j);
}

int linhaMatriz() //Quantidade de linhas.
{
    
    int linha;

    printf("\n\n\tDigite o numero de linhas[10 linha max]: ");
    scanf("%d%*c", &linha);

    if(linha > max) {
        do{

         printf("\n\n\t%d linhas - Excedeu o limite[%d] de linhas", linha, max);
         printf("\n\tDigite uma nova quantidade: ");
         scanf("%d%*c", &linha);

        } while (linha > max);
    }

    return linha;
}

int colunaMatriz(int i) //Quantidade de colunas
{
    int coluna;

    printf("\n\n\tDigite o numero de colunas[10 linha max]: ");
    scanf("%d%*c", &coluna);

    if(coluna > max) {
        do{

         printf("\n\n\t%d linhas - Excedeu o limite[%d] de colunas", coluna, max);
         printf("\n\tDigite uma nova quantidade: ");
         scanf("%d%*c", &coluna);

        } while (coluna > max);

        return coluna;
    } if(coluna == i) {

        do{

         printf("\n\n\tNumero de linha igual ao de culunas");
         printf("\n\tDigite uma nova quantidade: ");
         scanf("%d%*c", &coluna);

        } while (coluna == i);
    }

    return coluna;
}

void montaMatrizOrdem(int i, int j) //Monta a matriz
{ 
    int linha,coluna;
    float matriz[i][j];
     
    printf("\n\n\t\t\t<>Matriz[%dx%d]<>", i ,j);

    for(linha = 0; linha < i; linha++) {
        printf("\n\n\tDigite os %d valores da matriz na linha %d: ", j, linha);
        for(coluna = 0; coluna < j ; coluna++){
            scanf("%f", &matriz[linha][coluna]);
        }
    }
    
    printf("\n");

    for(linha = 0; linha < i; linha++) {
        for( coluna = 0; coluna < j; coluna++) {
            printf("\t\t%.2f\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

}
