#define ex2
#include "stdio.h"
#include <stdlib.h>
#include <math.h>


#ifdef ex1
struct data {
	char letter1;
	int number1;
	long number2;
	float number3;
	double number4;
	unsigned char letter2;
	unsigned int number5;
	unsigned long number6;
	};

	struct dados infoexe1;

main()
{
printf("digite o char\n");
scanf("%c", &infoexe1.letter1);

printf("digite o inteiro\n");
scanf("%d",&infoexe1.number1);

printf("digite o long\n");
scanf("%d",&infoexe1.number2);

printf("digite o float\n");
scanf("%f",&infoexe1.number3);

printf("digite o double\n");
scanf("%lf",&infoexe1.number4);

printf("digite o unsigned char\n");
scanf("%u",&infoexe1.letter2);

printf("digite o unsigned int\n");
scanf("%u",&infoexe1.number5);

printf("digite o unsigned long\n");
scanf("%u",&infoexe1.number6);


printf("        10        20        30        40        50        60        70\n");
printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
printf("%5c%10d%15ld%20f%20f\n",infoexe1.letter1, infoexe1.number1,infoexe1.number2,infoexe1.number3,infoexe1.number4);
printf("%15u%15u%15u",infoexe1.letter2,infoexe1.number5,infoexe1.number6);
}
#endif

#ifdef ex2

main()
{
struct data{
char nome[10];
char end[40];
char cidade[40];
char estado[3];
char cep[9];
};

struct data registro[4];

for(int i=0;i<4;i++)
{
    printf("\nentre com o %d registro \n",i+1);
    printf("\nnome ");
    gets(registro[i].nome);
    printf("\nendereco ");
    gets(registro[i].end);
    printf("\ncidade ");
    gets(registro[i].cidade);
    printf("\nestado ");
    gets(registro[i].estado);
    printf("\ncep \n");
    gets(registro[i].cep);
}
for(int i = 0;i<4;i++)
{
    printf("\ninformacoes do %d registro \n",i+1);
    printf("\nnome %s",registro[i].nome);
    printf("\nendereco %s",registro[i].end);
    printf("\ncidade %s",registro[i].cidade);
    printf("\nestado %s",registro[i].estado);
    printf("\ncep %s",registro[i].cep);

}


}
#endif

#ifdef ex3
struct posicoes{
float x;
float y;

};
main()
{
float d;
struct posicoes a;
struct posicoes b;

printf(" entre com o primeiro ponto eixo X ");
scanf("%f",&a.x);
printf(" entre com o primeiro ponto eixo Y ");
scanf("%f",&a.y);
printf(" entre com o segundo ponto eixo X ");
scanf("%f",&b.x);
printf(" entre com o segundo ponto eixo Y ");
scanf("%f",&b.y);

d= (pow(b.x-a.x,2)+pow(b.y-a.y,2));

printf("\n\na distancia entre a \nposicao A(%.0f,%.0f)\ne \nposicao B(%.0f,%.0f)\ne igual a raiz de %.0f\nque seria %.3f",a.x,a.y,b.x,b.y,d,sqrt(d));
}
#endif







/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

2 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos. Receba os dados pelo teclado e imprima-os no video. Faça um
    menu. (vetor de estruturas)
		nome, end, cidade, estado, cep

3 - Crie uma estrutura para representar as coordenadas de um ponto no plano
    (posicoes X e Y). Em seguida, declare e leia do teclado um ponto e exiba a
    distancia dele ate' a origem das coordenadas, isto é, posição (0, 0). Para
    realizar o cálculo, utilize a fórmula a seguir:
           d = raiz quadrada de  (XB - XA)ao 2 +(YB -YA)ao 2
    Em que:
    d = distância entre os pontos A e B
    X = coordenada X em um ponto
    Y = coordenada Y em um ponto
*/

