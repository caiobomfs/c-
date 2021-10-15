#define ex6
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#ifdef ex1
char varChar;
int varInt = 0;
long int varLong = 0;
unsigned int varUnsigned = 0;
float varFloat = 0;
double varDouble = 0;
unsigned long varUnLong = 0;
unsigned char varUnChar;

main(){

    printf("digite o char:");
    scanf("%c", &varChar);
    printf("digite o int: ");
    scanf("%d", &varInt);
     printf("digite o long: ");
    scanf("%ld", &varLong);
     printf("digite o unsigned: ");
    scanf("%u", &varUnsigned);
     printf("digite o float: ");
    scanf("%f", &varFloat);
     printf("digite o double: ");
    scanf("%lf", &varDouble);
     printf("digite o unsigned long: ");
    scanf("%lu", &varUnLong);
     printf("digite o unsigned char: ");
    scanf("%u", &varUnChar);



    printf("        10        20        30        40        50        60\n");
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-5d               %-10d          %-10u\n", varInt, varLong, varUnsigned);
    printf("              %-15.2f     %-15lf     %c\n", varFloat, varDouble, varChar);
    printf("         %-10d          %c\n", varUnLong, varChar);
}
#endif

#ifdef ex2
main()
{
struct data{
char nome[10];
char end[40];
char cidade[40];
char estado[30];
char cep[10];
};

struct data registro[4];
struct data *pt;


for(int i=0;i<4;i++)
{
    pt = &registro[i];
    printf("\nentre com o %d registro \n",i+1);
    printf("\nnome ");
    gets(pt->nome);
    printf("\nendereco ");
    gets(pt->end);
    printf("\ncidade ");
    gets(pt->cidade);
    printf("\nestado ");
    gets(pt->estado);
    printf("\ncep \n");
    gets(pt->cep);
}
for(int i = 0;i<4;i++)
{
    pt = &registro[i];
    printf("\ninformacoes do %d registro \n",i+1);
    printf("\nnome %s",pt->nome);
    printf("\nendereco %s",pt->end);
    printf("\ncidade %s",pt->cidade);
    printf("\nestado %s",pt->estado);
    printf("\ncep %s",pt->cep);

}

printf("\n\naperte enter para sair");
getchar();
}

#endif

#ifdef ex3
main()
{
    char *pc,*pcv,c;
    char cc[14] = {"bdfhjlmoqsuwy"};


    pcv = cc;
    pc = &c;


    printf("escreva um caracter e aparecera .1. se eh igual ao caracter da lista de cima, ou .0. se for diferente\n");
    scanf("%c",pc);
    puts(cc);


    for(int i = 0;i<13;i++)
    {
        if(*pc == pcv[i])
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
#endif


#ifdef ex4
int passa_de_10(char k[])
    {
        int numero = 0;
        int maximo = 10;
        for(int i = 0;k[i]!='\0';i++)
        {
            numero ++;
        }
        if(numero > maximo)
        {
            printf("voce digitou uma palavra com MAIS de dez letras \n");
            //puts(k);
            for(int x = 0;k[x]!='\0';x++)
            {
            k[x]='\0';
            }

            return 1;
        }
        else
        {
            return 0;
        }
    }



main()
{
    char a[200],b[200],*pa,*pb;
    int passou=1,p1=0,p2=0;

    pa = a;
    pb = b;

    do
    {
    printf("escreva a primeira coisa com ate 10 caracteres \n");
    gets(pa);
    passou = passa_de_10(pa);
    }while(passou==1);


    do
    {
    printf("escreva outra coisa ate 10 caracteres \n");
    gets(pb);
    passou = passa_de_10(pb);
    }while(passou==1);

    printf("primeira escrita / %s /\n segunda escrita / %s /\n",pa,pb);


    for(int i = 0;pa[i]!='\0';i++)
    {
        p1++;
    }
    for(int i = 0;pb[i]!='\0';i++)
    {
        p2++;
    }
    if(p1!=p2)
    {
        printf("As Palavras Nao sao iguais");
    }
    else
    {
        p2=0;
        for(int i = 0;i<p1;i++)
        {
            if(pa[i]==pb[i])
            {
                p2++;
            }
        }
    if(p1 == p2)
    {
        printf("As Palavras sao iguais");
    }
    else
    {
        printf("As Palavras Nao sao iguais");
    }
    }
}

#endif



#ifdef ex5
main() {
    int *p = (int *) malloc(sizeof(int)), i=0;
    float media = 0;

    do {
        printf("\nDigite um numero: ");
        scanf("%d",p);
        if((*p) < 0) { break; }
        i++; media+=(*p);
    } while(1==1);

    printf("\nMedia: %.2f", media/i);
}
#endif


#ifdef ex6
typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

unsigned long dist_dias (Data inicio, Data fim);
int bissexto (int ano);

int dias_mes[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                       {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int main(void) {
	Data dia1, dia2;

	printf("Coloque data incial no formato: dia/mes/ano   ex : 01/01/2000\n");
	scanf("%d/%d/%d", &dia1.dia, &dia1.mes, &dia1.ano);
	printf("Coloque data final no formato: dia/mes/ano\n");
	scanf("%d/%d/%d", &dia2.dia, &dia2.mes, &dia2.ano);

	printf("A distancia em dias: %lu\n", dist_dias (dia1, dia2));

	return 0;
}


int bissexto (int ano) {
	return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}


unsigned long dist_dias (Data inicio, Data fim) {
	unsigned long idias, fdias;

	unsigned long def_anos = 0;

	register int i;
	int dbissexto;

	idias = inicio.dia;
	dbissexto = bissexto (inicio.ano);
	for (i = inicio.mes - 1; i > 0; --i)
		idias += dias_mes[dbissexto][i];

	fdias = fim.dia;
	dbissexto = bissexto (fim.ano);
	for (i = fim.mes - 1; i > 0; --i)
		fdias += dias_mes[dbissexto][i];

	while (inicio.ano < fim.ano)
		def_anos += 365 + bissexto(inicio.ano++);

	return def_anos - idias + fdias;
}
#endif




/****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que receba via teclado um char, int, long, unsigned,
    float, double, unsigned long e unsigned char, declare ponteiros para os
    mesmos e imprima-os no video utilizando o operador de conteudo * no
    seguinte formato:

            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char

2 - Com a estrutura abaixo, defina um vetor de estruturas de 4 elementos.
    Receba os dados pelo teclado usando ponteiros e imprima-os no video
    também usando ponteiros. Utilize um comando de loop. (vetor de estruturas)
              nome, end, cidade, estado, cep

3 - Receba um caracter via teclado usando ponteiros e compara com o vetor abaixo
    usando ponteiros. mostre como resultado se são IGUAIS ou DIFERENTES.
    vetor -> b,d,f,h,j,l,m,o,q,s,u,w,y

4 - Receba 2 string de ate 10 caracteres via teclado, compare-as usando ponteiros
    e mostre como resultado se são IGUAIS ou DIFERENTES.

5 - Escreva um programa que receba via teclado numeros inteiros positivos usando
    ponteiros. Quando o numero digitado for negativo o programa deve parar e calcula
    a media dos valores digitados e mostrar o resultado.

6 - Escreva um programa que contenha uma estrutura representando uma data
    valida. Essa estrutura deve conter os campos dia, mes e ano. Em seguida,
    leia duas datas e armazene nessa estrutura usando ponteiros. Calcule e exiba o numero de dias que decorrem entre as duas datas usando ponteiros.
*/
