#define ex2
#include "stdio.h"

#ifdef ex1



main(){
int numint1,numint2,numint3;
float numfloat1,numfloat2,numfloat3;
long numlong1, numlong2,numlong3;
double numdouble1,numdouble2,numdouble3;
unsigned int numu1,numu2,numu3;

printf("Digite 3 numeros inteiros: \n");
scanf("%d",&numint1);
scanf("%d",&numint2);
scanf("%d",&numint3);

printf("Digite 3 numeros float: \n");
scanf("%f",&numfloat1);
scanf("%f",&numfloat2);
scanf("%f",&numfloat3);

printf("Digite 3 numeros long: \n");
scanf("%ld",&numlong1);
scanf("%ld",&numlong2);
scanf("%ld",&numlong3);

printf("Digite 3 numeros double: \n");
scanf("%f",&numdouble1);
scanf("%f",&numdouble2);
scanf("%f",&numdouble3);

printf("Digite 3 numeros unsigned: \n");
scanf("%d",&numu1);
scanf("%d",&numu2);
scanf("%d",&numu3);

printf("        10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
//        int                 long                unsigned
//                  float               double
printf("  %-6d              %-11l         %-6d \n",numint1,numlong1,numu1);
printf("            %-15.0f     %-15.0f \n",numfloat1,numdouble1);
printf("  %-6d              %-11l        %-6d \n",numint2,numlong2,numu2);
printf("            %-15.0f     %-15.0f \n",numfloat2,numdouble2);
printf("  %-6d              %-11l        %-6d \n",numint3,numlong3,numu3);
printf("            %-15.0f4     %-15.0f \n",numfloat3,numdouble3);


}
#endif

#ifdef ex2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char entrada[100];
    char entradaespelhada[100];
    char metade1[50];
    char metade2[50];
    int tam=0;
    int tamcalc=0;
    int metade=0;

    printf("Digite uma frase ou palavra para saber se ela e' um palindromo: ");
    scanf("%99[^\n]", entrada);

    for(tam=0; entrada[tam]!='\0'; tam++);
    tamcalc=tam;
    metade=tam/2;

    for(int x=0;x<tam;x++){
        tamcalc--;
        entradaespelhada[x]=entrada[tamcalc];
    }
    entradaespelhada[tam]='\0';

    for(int x = 0; x<metade;x++){
        metade1[x]=entrada[x];
    }
    metade1[metade]='\0';

    for(int x=0;x<metade;x++){
        metade2[x]=entradaespelhada[x];
    }
    metade2[metade]='\0';

    if(strcmp(metade1,metade2)==0){
        printf("E' palindromo");
    }
    else
        printf("nao e' palindromo");

    printf("\nEntrada:%s \nEntrada espelhada:%s  \nprimeira metade:%s \nsegunda metade:%s \ntamanho da string:%i \nmetade da string:%i",entrada,entradaespelhada,metade1,metade2,tam,metade); // impressao de todas as variaveis usadas.

}
#endif

#ifdef ex3
#include <stdio.h>

int main(){

    int vet1[2][3][3];
    int x,y,z;

    printf("Digitacao dos valores inteiros\n\n");
    for(x=0;x<=1;x++){
        for(y=0;y<=2;y++){
            for(z=0;z<=2;z++){
                vet1[x][y][z]=0;
                printf("pagina %d, linha %d, coluna %d: ",x+1,y+1,z+1);
                scanf("%d",&vet1[x][y][z]);
                printf("\n");
            }
        }
    }
    printf("\n\nImpressao dos valores\n\n");
    for(x=0;x<=1;x++){
        printf("Pagina %d\n\n",x+1);
        for(y=0;y<=2;y++){
            for(z=0;z<=2;z++)
                printf("%d\t",vet1[x][y][z]);
            printf("\n");
        }
        printf("\n\n");
    }
return 0;
}
#endif
#ifdef ex4
 main(){
int a[2][3];
int b[2][3];
int c[2][3];

printf("digite o valor de A 1 1: \n");
scanf("%d",&a[0][0]);
printf("digite o valor de A 1 2: \n");
scanf("%d",&a[0][01]);
printf("digite o valor de A 1 3: \n");
scanf("%d",&a[0][02]);
printf("digite o valor de A 2 1: \n");
scanf("%d",&a[01][0]);
printf("digite o valor de A 2 2: \n");
scanf("%d",&a[01][01]);
printf("digite o valor de A 2 3: \n");
scanf("%d",&a[01][02]);
printf("digite o valor de B 1 1: \n");
scanf("%d",&b[0][0]);
printf("digite o valor de B 1 2: \n");
scanf("%d",&b[0][01]);
printf("digite o valor de B 1 3: \n");
scanf("%d",&b[0][02]);
printf("digite o valor de B 2 1: \n");
scanf("%d",&b[01][0]);
printf("digite o valor de B 2 2: \n");
scanf("%d",&b[01][01]);
printf("digite o valor de B 2 3: \n");
scanf("%d",&b[01][02]);
int x, y;
for(x=0;x<2;x++){
    for(y=0;y<3;y++){
        c[x][y]=a[x][y]*b[x][y];
        printf(" %d  %d resultado %d * %d: %d\n", x+1, y+1,a[x][y],b[x][y], c[x][y] );
    }
}

}
#endif

#ifdef ex5
#include <stdio.h>

int main() {

    int tamPar, tamImpar, i, vetDigitado[10], vetPar[10], vetImpar[10];
    tamPar = 0;
    tamImpar = 0;

    for (i = 0; i < 10; i++) {
        printf("\nDigite o %d.o numero: ", i + 1);
        scanf("%d%*c", &vetDigitado[i]);

        if (vetDigitado[i] % 2 == 0) {
            vetPar[tamPar] = vetDigitado[i];
            tamPar++;
        }
        else {
            vetImpar[tamImpar] = vetDigitado[i];
            tamImpar++;
        }
    }

    printf("\nVetor Par:\n");
    for (i = 0; i < tamPar; i++) {
        printf("%d\n", vetPar[i]);
    }

    printf("\nVetor Impar:\n");
    for (i = 0; i < tamImpar; i++) {
        printf("%d\n", vetImpar[i]);
    }
    return 0;
}
#endif
#ifdef ex6
int main() {

    int tamPar, tamImpar, i, vetDigitado[10], vetPar[10], vetImpar[10];
    tamPar = 0;
    tamImpar = 0;

    for (i = 0; i < 10; i++) {
        printf("\nDigite o %d.o numero: ", i + 1);
        scanf("%d%*c", &vetDigitado[i]);

        if (vetDigitado[i] % 2 == 0) {
            vetPar[tamPar] = vetDigitado[i];
            tamPar++;
        }
        else {
            vetImpar[tamImpar] = vetDigitado[i];
            tamImpar++;
        }
    }

    printf("\nVetor  u:\n");
    for (i = 0; i < tamImpar; i++) {
        printf("%d\n", vetImpar[i]);
    }

    printf("\nVetor w:\n");
    for (i = 0; i < tamPar; i++) {
        printf("%d\n", vetPar[i]);
    }

    return 0;}
#endif
#ifdef ex7
#include <stdlib.h>
#include <stdio.h>
int main()
{
int x[10];
int i, j, temp;
for (i = 0; i<10; i++)

{
printf("Digite um numero:");
scanf("%d",&x[i]);
}


for (i=0;i<10; i++)
for(j=i+1;j<10;j++)
{
if (x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}


printf("Vetor em ordem crescente: \n");
for(i=0;i<10;i++)
printf(" %d",x[i]);

system("pause");
return 0;
}
#endif
#ifdef ex8
#include <stdio.h>
#include <stdlib.h>

int main()
{

int matriz[5][5],	i, j, x, lin, col, achou=0;

for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("\ndigite um valor para o indice [%d][%d] da matriz:\n",i+1,j+1);
scanf("%d",&matriz[i][j]);
}
}
printf("\ninforme um valor X que deseja procurar na matriz:\n");
scanf("%d",&x);
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(matriz[i][j]==x)
{
lin = i;
col = j;
achou = 1;
}
}
}

if(achou == 1)
{
printf("valor %d encontrado na posicao [%d][%d]",matriz[lin][col],lin+1,col+1);
}
else
{
printf("\nVALOR NAO ENCONTRADO!\n");
}

system("pause");
return 0;
}

#endif
/*****************************************************************************

			EXERCICIOS

*****************************************************************************







6 - Escreva um programa que decomponha um vetor de inteiros em dois outros vetores,
    um contendo as componentes de valor ímpar e o outro contendo as componentes de
    valor par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2}.

7 - Receba via teclado dez valores numericos e ordene por ordem crescente estes
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado.
    Mostre ao final os valores em ordem.

8 - Leia uma matriz 5 x 5. Leia tambem um valor X. O programa dever fazer a busca
    desse valor na matriz e, ao final escrever a localizacao (linha e coluna) ou
    uma mensagem de ”nao encontrado”.
*/
