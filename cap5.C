#define ex5
#include "stdio.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include<locale.h>
#ifdef ex1


main(){


char vlstr1[7];
char vlstr2[7];
char vlstr3[7];
char vlstr4[7];
char vlstr5[7];



printf("digite o 1 nome:\n");
gets(vlstr1);

printf("digite o 2 nome:\n");
gets(vlstr2);

printf("digite o 3 nome:\n");
gets(vlstr3);
printf("digite o 4 nome:\n");
gets(vlstr4);
printf("digite o 5 nome:\n");
gets(vlstr5);



printf("\n\n\n\n\n");
printf("         10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("  %s%38s\n",vlstr1,                vlstr5);
printf("        %s%26s\n",vlstr2,  vlstr4);
printf("               %s\n",vlstr3);

;

printf("\n\n\n\n\n");
}
#endif
#ifdef ex2
main(){


char vlstr[3][10];
printf("Digite o vetor 1\n");
gets(vlstr[0]);
printf("Digite o vetor 2\n");
gets(vlstr[1]);
printf("Digite o vetor 3\n");
gets(vlstr[2]);

printf("\n\n");
printf("         10        20        30        40        50\n");
printf("12345678901234567890123456789012345678901234567890\n");
printf("  %s%20s%20s",vlstr[0],vlstr[1],vlstr[2]);

printf("\n\n\n");
}
#endif
#ifdef ex3



int main() {
  char str1[10],str2[10];
  int i;

  printf("Digite a primeira frase:");
  fflush(stdout);
  fgets(str1,10,stdin);

  printf("Digite a segunda :");
  fflush(stdout);
  fgets(str2,10,stdin);



     i = 0;
     while (str1[i] != 0 &&
            str1[i] == str2[i])  {

     }

     if (str1[i] == 0 && str2[i] == 0)  {
        printf("As frases sao iguais\n");
     } else {
        printf("As frases nao sao iguais\n");
     }

  return 0;
}
#endif
#ifdef ex4

int main()
{
int validaString(char str[4]);
char str[4];
int valida=0;
int fim=0;
do{
printf("Digite a sigla de um dia da semana como: seg, ter, qua, qui, sex, sab, dom: ");
scanf("%s", &str);

valida = validaString(str);

switch(valida){

    case 11:{
        printf("Segunda-Feira");
        break;
    }
    case 12:{
        printf("Terca-Feira");
        break;
    }
    case 13:{
        printf("Quarta-Feira");
        break;
    }
    case 14:{
        printf("Quinta-Feira");
        break;
    }
    case 15:{
        printf("Sexta-Feira");
        break;
    }
    case 16:{
        printf("Sabado");
        break;
    }case 17:{
        printf("Domingo");
        break;
    }
    default :{
        printf("Dia invalido\n\n");
        return main();
    }
}
printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}

int validaString(char str[4]){
char seg[4] = "seg";
char ter[4] = "ter";
char qua[4] = "qua";
char qui[4] = "qui";
char sex[4] = "sex";
char sab[4] = "sab";
char dom[4] = "dom";
int i;
int ver=5;
int d1 =0;
int d2 =0;
int d3 =0;
int d4 =0;
int d5 =0;
int d6 =0;
int d7 =0;

for(i=0; i<4;i++){
    if(seg[i] != str[i]){
        d1++;
    } if(seg[i] == 0 && str[i] != 0){
        d1++;
    }else if(i==2 && d1 == 0){
        ver = 11;
    }

    if(ter[i] != str[i]){
        d2++;
    } if(ter[i] == 0 && str[i] != 0){
        d2++;
    }else if(i==2 && d2 == 0){
       ver = 12;
    }
    if(qua[i] != str[i]){
        d3++;
    } if(qua[i] == 0 && str[i] != 0){
        d3++;
    }else if(i==2 && d3 == 0){
       ver = 13;
    }
    if(qui[i] != str[i]){
        d4++;
    } if(qui[i] == 0 && str[i] != 0){
        d4++;
    }else if(i==2 && d4 == 0){
       ver = 14;
    }
    if(sex[i] != str[i]){
        d5++;
    } if(sex[i] == 0 && str[i] != 0){
        d5++;
    }else if(i==2 && d5 == 0){
       ver = 15;
    }

    if(sab[i] != str[i]){
        d6++;
    } if(sab[i] == 0 && str[i] != 0){
        d6++;
    }else if(i==2 && d6 == 0){
       ver = 16;
    }

    if(dom[i] != str[i]){
        d7++;
    } if(dom[i] == 0 && str[i] != 0){
        d7++;
    }else if(i==2 && d7 == 0){
       ver = 17;
    }
}
    if(d1 > 0 && d2 > 0 && d3 > 0 && d4 > 0 && d5 > 0 && d6 > 0 && d7 > 0){
        return 0;
    }else{
        return ver;
    }
}

#endif
#ifdef ex5



    int main()
{


       char str[11];
       int i;

        int c;
            do{

        printf("Digite 10 caracteres: ");
        scanf("%s",&str);


        for(i=0; str[i]!='\0'; i++)
            {

            if(str[i]>=97 && str[i]<=122)
                {
            str[i]= str[i]-32;
                }
            }

        printf("%s",str);
printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }

 #endif


#ifdef ex6
 int main()
{


       char str[11];
       int i;

        int c;
            do{

        printf("Digite 10 caracteres: ");
        scanf("%s",&str);


        for(i=0; str[i]!='\0'; i++)
            {
            if(str[i]>=65 && str[i]<=89)
                {
            str[i]= str[i]+32;
                }
        }

        printf("%s",str);

           printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
    }


#endif

#ifdef ex7
int main()
{
char vet[50]={0};
int vet2[50]={0};
int ver=0;
int i;
int fim=0;

do{
    printf("Digite uma string: ");
    scanf("%s", &vet);
printf("A palavra convertida e ");
    for(i=0; i<50;i++){
        if(vet[i] != 0){
            vet2[i] = (int) vet[i]+1;
            printf("%c", vet2[i]);
        }
    }
    printf("\nDigite 1 para finalizar ou qualquer tecla para continuar: ");
    scanf("%d", &fim);
}while(fim != 1);
}





#endif
#ifdef ex8
int main()
{


    char str[20];
	int numcaractere = 0;
	char c;

	do{
    printf("Digite uma palavra: ");
	gets(str);

	while(str[numcaractere] != '\0')
	{
		++numcaractere;
	}

	printf("A palavra %s possui %d caracteres.\n", str, numcaractere);

    printf("\n\nDeseja continuar? ");
    printf("\n 1 - Sim\n");
    printf("\n 2 - Nao\n");
    scanf("%d",&c);

        }while(c==1);


}






#endif
