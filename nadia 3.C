#define ex7


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#ifdef ex1
int main(){
    int numImpares;
    numImpares = 0;

    printf("Todos os numeros impares ate 100!\n");

    while(numImpares < 100){
        if((numImpares%2) == 1){
            printf("%d\n", numImpares);
        }
        numImpares++;
    }
}
    #endif




    #ifdef ex2
int main () {
    int numImpares;
    numImpares = 50;

    printf("Todos os numeros impares ate 100!\n");

    do{
        if((numImpares%2) == 1){
            printf("%d\n", numImpares);
        }
        numImpares++;
    }while(numImpares < 300);
}

    #endif





#ifdef ex3
int main(){
int a ;
int cont;
cont=2;
do{
    printf ("digite um numero inteiro maior que 2 \n");
    scanf("%d",&a );
    if (a<2 ){printf ( "numero invalido  \n");}
} while(a<2);
do{ if ((cont%2)==0){ printf("%d\n",cont);
        }cont++;



}while(cont<a);

}
#endif




    #ifdef ex4

 main(){

    int a ,qtdeMaiorIgual6, i;
    i = 0;
    qtdeMaiorIgual6 = 0;

    do{
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &a);

        if(a <= 0){
            printf("A quantidade de alunos deve ser maior do que 0!\n");
        }
    }while(a <= 0);

    float notas[a], somaNotas;
    somaNotas = 0;

    do{
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);

        if(notas[i] >= 6 ){
            qtdeMaiorIgual6++;
        }

        somaNotas = somaNotas + notas[i];
        i++;
    }while(i < a);

    printf("A media da turma foi: %.2f\n", somaNotas / a);
    if(qtdeMaiorIgual6 > 0){
        printf("A quantidade de notas maiores ou iguais a 6 foram: %d\n", qtdeMaiorIgual6);
    }
    else{
        printf("Nao foram obtidas notas maiores ou iguais a 6!\n");
    }
 }

        #endif



      #ifdef ex5
int main(){

int soma=0,a;
int cont;
cont=0;
while(soma<20)
{
    printf ("digite um numero inteiro  \n");
    scanf("%d",&a );

soma=soma+a;
    if (soma<20 ){printf ( "soma= %d  \n",soma);}
}
printf ( "soma= %d  \n",soma);


}



        #endif





     #ifdef ex6


#endif




    #ifdef ex7
int main (){
int a;
do{
printf("digite um numero positivo par ou impar\n ");
scanf("%d",&a);
if (a<0){
    printf("numero invalido \n");
}
}while(a<0);

if ((a%2)==0){printf("numero par");}
else if ((a%2)==1){printf("numero impar");}








}

        #endif


    #ifdef ex8


        #endif


#ifdef ex9



        #endif




#ifdef ex10
#include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 int main ()
 {
 setlocale(LC_ALL, "PORTUGUESE");
 int X=0, Y=0,somapar=0, cont=0, impar-1;


printf("Insira o VALOR DE X: ");
scanf("%d", &X);
printf("Insira o VALOR DE Y: ");
scanf("%d", &Y);


if (Y>X)
{

   for (cont=X; cont<=Y; cont++)
{
cont;

 if (cont%2==0)
 {
 somapar = somapar + cont;
  }

  else
  {
  impar = impar * cont;
   }

}
   }
  else
   {
    printf("X não pode ser maior que Y\n");
     }
    printf("A soma dos números pares nesse intervalo é %d\n", somapar);
    printf("A multiplicação dos números impares nesse intervalo é %d\n", impar);

  system ("pause");
   return 0;
     }




        #endif





#ifdef ex11


#endif

#ifdef ex12



#endif

#ifdef ex13

#endif



#ifdef ex14
,
#endif


#ifdef ex15


#endif

#ifdef ex16
int main()
{
int fat, n;
while (n<=0);{
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);
if (n<=0){
 printf("numero invalido") ;
}
}
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nFatorial calculado: %d", fat);
return 0;
}
#endif


#ifdef ex17
int main() {

   int p_nov, p_dez, p_jan, i, j, maior=-1, func_maior, soma;

   for (i=1; i<=15; i++) {

      printf("Informe a pontuação, para os meses de novembro, dezembro e janeiro, do funcionário: %d: ", i);

      scanf("%d %d %d", &p_nov, &p_dez, &p_jan);

      if (maior < p_nov) {

         maior = p_nov;

         func_maior = i;

      }

      if (maior < p_dez) {

         maior = p_dez;

         func_maior = i;

      }

      if (maior < p_jan) {

         maior = p_jan;

         func_maior = i;

      }

      soma = p_nov + p_dez + p_jan;

      printf("Funcionário %d\tPontuação total: %d\tPontuação média mensal: %.2f\n", i, soma, (float) soma / 3);

   }

   pintf("Maior pontuação: %d do funcionário: %d\n", maior, func_maior);

   return 0;

}


#endif


#ifdef ex18
int main() {
	int i, prim=2, posPrim=1, seg=7, posSeg=2, terc=3, posTerc=3,tam;
	printf("digite quantos numeros da sequencia vc quer ");
	scanf("%d",&tam);

	for (i=1;i<=tam;i++) {
		if (posPrim == i) {
			printf("%d \n", prim);
			prim = prim * 2;
			posPrim = posPrim + 3;
		}
		else
			if (posSeg == i) {
				printf("%d \n", seg);
				seg = seg * 3;
				posSeg = posSeg + 3;
			}
			else {
				printf("%d \n", terc);
				terc = terc * 4;
				posTerc = posTerc + 3;
			}
	}
	return 0;
}
#endif

