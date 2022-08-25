#include <stdio.h>
#include <stdlib.h>
#define max 10

int tipoMatriz();
int validaNum(int escolhaMatriz);
int linhaMatriz();
int colunaMatriz(int i);
char repete();
void matrizOrdemUser();
void montaMatrizOrdem(int i, int j);
void montaMatrizQuadrada(int b);


int main()
{
    char loop = ' ';
    do{

    int escolha = tipoMatriz(); //Variável

    if(escolha == 0) {

        matrizQuadrada();
    } if (escolha == 1) {
        matrizOrdemUser();
    }
    loop = repete();
    }while(loop == ' ');


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
        printf("\t\t");
        for( coluna = 0; coluna < j; coluna++) {
            printf("%.2f\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

}

void matrizQuadrada()
{
    int b;

    printf("\n\n\t\t----***Matriz Quadrada***----");
    b = linhaColunaMatriz();
    montaMatrizQuadrada(b);


}

int linhaColunaMatriz()
{

    int linhaColuna;

    printf("\n\n\tDigite o numero de Linhas/Colunas[10 max]: ");
    scanf("%d", &linhaColuna);

    if(linhaColuna > max) {
        do{

         printf("\n\n\t%d linhas - Excedeu o limite[%d] de linhas/colunas", linhaColuna, max);
         printf("\n\tDigite uma nova quantidade: ");
         scanf("%d%*c", &linhaColuna);

        } while (linhaColuna > max);
    }

    return linhaColuna;

}

void montaMatrizQuadrada(int b) //monta a matriz Quadrada
{

    int lc = b-1;
    int linha,coluna;
    float matrizQ[b][b];

    for(linha = 0; linha < b; linha++){
        printf("\n\n\tDigite os %d valores da matriz na linha %d: ", b, linha);
        for(coluna = 0; coluna < b; coluna++) {
            scanf("%f%*c", &matrizQ[linha][coluna]);
        }
    }

    //----------------Matriz Completa------------------
    printf("\n");
    printf("\n\n\t\t\t<>Matriz[%dx%d]<>\n", b, b);
    printf("\n");
    for(linha = 0; linha < b; linha++) {
        printf("\t\t");
        for( coluna = 0; coluna < b; coluna++) {
            printf("%.2f\t", matrizQ[linha][coluna]);
        }
        printf("\n");
    }

    //----------------Diagonal Principal----------------
    printf("\n");
    printf("\n\n\t\t\t<>Diagonal Principal<>\n");
    printf("\n");
    for(linha = 0; linha < b; linha++) {
        printf("\t\t");
        for( coluna = 0; coluna < b; coluna++) {
            if(linha == coluna){

                printf("%.2f\t", matrizQ[linha][coluna]);

            } else {
                printf("$$$\t");
            }
        }
        printf("\n");
    }

    //----------------Transversa----------------
    printf("\n");
    printf("\n\n\t\t\t<>Transversa<>\n");
    printf("\n");

    for(linha = 0; linha < b ; linha++) {
        printf("\t\t");
        for(coluna = 0; coluna < b; coluna++){
            if(linha < coluna){
               printf("%.2f\t", matrizQ[linha][coluna]);
            } if(coluna == linha){
                printf("%.2f\t", matrizQ[linha][coluna]);
            } if(linha > coluna) {
                printf("$$$\t");
            }

        }
        printf("\n");
    }


    //----------------Diagonal Secundária----------------
    printf("\n");
    printf("\n\n\t\t\t<>Diagonal Secundaria<>\n");
    printf("\n");
    for(linha = 0; linha < b; linha++) {
        printf("\t\t");
        for(coluna = 0; coluna < b; coluna++) {
            if(linha + coluna == lc) {
                printf("%.2f\t", matrizQ[linha][coluna]);
            } else {
                printf("$$$\t");
            }
        }
        printf("\n");
    }


//----------------Transversa----------------
    printf("\n");
    printf("\n\n\t\t\t<>Transversa<>\n");
    printf("\n");
    for(linha = 0; linha < b; linha++) {
        printf("\t\t");
        for(coluna = 0; coluna < b; coluna++) {

                printf("%.2f\t", matrizQ[coluna][linha]);

        }
        printf("\n");
    }
}

char repete() //Mantem o programa em loop
{
    char varLoop;
    printf("\n\nPara continuar a operar digite: ");
    printf("\n[SPACE+ENTER]Continuar\t[TECLA+ENTER]Finaliza");
    scanf("%c%*c", &varLoop);

    return varLoop;
}
