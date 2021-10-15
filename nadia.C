#define ex2


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//1.	Ler um número inteiro e imprimir seu sucessor e seu antecessor
#ifdef ex1
int main()
{
    int a;


    printf("digite um numero: ");
    scanf("%d",&a);
    printf("antecessor %d \n  predecessor %d \n",a-1,a+1);
}
    #endif




//2.	Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.
    #ifdef ex2
int main()
{
    float a;



    printf("digite um numero: ");
    scanf("%f",&a);
    printf("valor com reajuste de 10 por cento: %f  ",a*1.10);
}

    #endif





//3.	Informar um preço de um produto e calcular novo preço com desconto de 9%.
#ifdef ex3
int main()
{
    float a;



    printf("digite um numero: ");
    scanf("%f",&a);
    printf("valor com desconto de 9 por cento: %f  ",a*0.9);
}

#endif



//4 Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.
    #ifdef ex4
int main()
{
    float a,b,c;// a= valor hora aula ,b= numero de aulas dadas, c= % de desconto INSS


do{
    printf("digite o valor da hora aula : \n");
    scanf("%f",&a);
   if(a<=0){
   printf("digite um valor maior q 0 \n");
   }
}while(a<=0);

    printf("digite o numero de aulas dadas:\n ");
    scanf("%f",&b);
    printf("digite a porcentagem de desconto do INSS: \n ");
    scanf("%f",&c);
    printf("valor salario liquido: %f  ",a*b-a*c/100);
}



        #endif


//5.	 Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
      #ifdef ex5
int main()
{
    float a;



    printf("digite uma temperatura em celcius : ");
    scanf("%f",&a);
    printf("temperatura em farenheit %f  ",(a  - 32) * 5/9 );
}




        #endif


//6.	Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre:
//a.	A idade dessa pessoa
//b.	Quantos anos essa pessoa terá em 2020



     #ifdef ex6
int main()
{
    int a,b;



    printf("digite o seu ano de nascimento: \n");
    scanf("%d",&a);
     printf("digite o ano atual  :\n ");

    scanf("%d",&b);
    printf("sua idade :%d  ",b-a);
    printf("vc tera %d anos em 2020",2020-a);
}


#endif



//7.	O custo ao consumidor de um carro novo é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
//a.	O valor correspondente ao lucro do distribuidor
//b.	O valor correspondente aos impostos
//c.	O preço final do veículo

    #ifdef ex7

int main()
{
    float a,b,c;

do{
    printf("digite o valor o preço de fabrica do veiculo  : \n");
    scanf("%f",&a);
   if(a<=0){
   printf("digite um valor maior q 0 \n");
   }
}while(a<=0);

    printf("digite o percentual de lucro do distribuidor:\n ");
    scanf("%f",&b);
    printf("digite o percentual dos impostos: \n ");
    scanf("%f",&c);
    printf("valor do lucro do distribuidor: %f  \n",a*b/100);
printf("valor o dos impostos: %f  \n",a*c/100);
printf("valor total do veiculo: %f  ",a+a*b/100+a*c/100);
}
        #endif

//8.	Elabore um programa que efetue o cálculo do reajuste de salário de um funcionário. Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo salário

    #ifdef ex8
int main()
{
    float a;

do{
    printf("digite um salario maior que zero \n");
    scanf("%f",&a);
   if(a<=0){
   printf(" valor invalido \n");
   }
}while(a<=0);

if(a<800){
    printf("salario antigo :%f \n",a);
    printf("salario com reajuste de 15 por cento :%f \n",a+a*0.15);
    }else if (a>=800 || a<=1000){
     printf("salario antigo :%f \n",a);
    printf("salario com reajuste de 10 por cento :%f \n",a+a*0.10);
}else  printf("salario antigo :%f \n",a);
    printf("salario com reajuste de 5 por cento :%f \n",a+a*0.05);}


        #endif

//9.	Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a média for maior ou igual a 5. Caso contrário informe que ele está reprovado. Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não. As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.
#ifdef ex9

int main()
{
    int a,b,c,d;

do{
    printf("digite uma nota maior que 0 e menor que 10: \n");
    scanf("%d",&a);
   if(a<0 ||a>10 ){
   printf("digite um valor maior q 0 e menor que 10 \n");
   }
}while(a<0||a>10 );
do{
    printf("digite uma nota maior que 0 e menor que 10: \n");
    scanf("%d",&b);
   if(b<0 ||b>10 ){
   printf("digite um valor maior q 0 e menor que 10 \n");
   }
}while(b<0||b>10 );
do{
    printf("digite uma nota maior que 0 e menor que 10: \n");
    scanf("%d",&c);
   if(c<0 ||c>10 ){
   printf("digite um valor maior q 0 e menor que 10 \n");
   }
}while(c<0||c>10 );
do{
    printf("digite uma nota maior que 0 e menor que 10: \n");
    scanf("%d",&d);
   if(d<0 ||d>10 ){
   printf("digite um valor maior q 0 e menor que 10 \n");
   }
}while(d<0||d>10 );

if ((a+b+c+d)/4>=5)
    printf("o aluno foi aprovado com a media :%d",(a+b+c+d)/4 );
    else
    printf("o aluno foi reprovado com a media :%d",(a+b+c+d)/4 );
}


        #endif
//10.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto é o produto dos três números anteriores. Calcule e exiba a soma dos quadrados de cada um dos quatro números. Caso o resultado seja menor que 50000, solicite novos dados.



#ifdef ex10
int main()

{int a,b,c;
    do
{


do
{
    printf("digite um numero maior que 10 e menor que 25 \n");
    scanf("%d",&a);
   if(a<=10||a>=25 )
{
   printf("valor invalido \n");
}
}
while(a<=10||a>=25 );
do
{
    printf("digite um numero maior ou igual a zero \n");
    scanf("%d",&b);
   if(b<0)
{
   printf("valor invalido \n");
}
}
while(a<0 );
printf("a soma dos quadrados e %d",c=(a*a)+(b*b)+((a+b)*(a+b))+(a*b*(a+b))   );
if(c<5000)
{
printf("a soma dos quadrados tem que ser maior que 5000");

}
}   while(c<5000);

}
        #endif



//1.	Escrever um algoritmo que leia dois valores inteiros distintos e informe qual é o maior.

#ifdef ex11

int main()

{
int a,b;



    printf("digite o primeiro valor : \n");
    scanf("%d",&a);
    do{ printf("digite o segundo valor :\n ");
     scanf("%d",&b);
     if(b==a){printf("os numeros tem que ser diferentes\n");}
    }while(b==a);
if(a>b){printf("a e maior\n");}
else{printf("b e maior \n");}
}
#endif
//2.	Escrever um algoritmo que leia três números quaisquer e informe qual é o maior e se eles forem todos igual informe ao usuário e solicite novos dados.
#ifdef ex12
int main()

{
int a,b,c;


do{
    printf("digite o primeiro valor : \n");
    scanf("%d",&a);
    printf("digite o segundo valor :\n ");
     scanf("%d",&b);
      printf("digite terceiro valor :\n ");
     scanf("%d",&c);
     if(b==a||c==a||b==c){printf("os numeros tem que ser diferentes\n");}
    }while(b==a||c==a||b==c);
if(a>b&&a>c){printf("a e maior\n");}
else if(b>a&&b>c) {printf("b e maior \n");}
else {printf("c e maior \n");}

}


#endif
//3.	Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar

#ifdef ex13
int main()

{
    int a;
 printf("digite um valor : \n");
    scanf("%d",&a);
if( a% 2 == 0){
    printf("o numero %d e par", a);
} else {printf("o numero %d e impar",a);}
}
#endif
//4.	Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo. Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.

//a.	Garantir que cada lado é menor que a soma dos outros dois lados.
//b.	O triângulo é equilátero quando todos os lados são iguais.
//c.	O triângulo é isóscele quando apenas dois lados são iguais.
//d.	O triângulo é escaleno quando todos os lados são diferentes.


#ifdef ex14
int main()

{int a,b,c;

do
{
    printf("digite o primeiro lado do triangulo \n");
    scanf("%d",&a);
    printf("digite o segundo lado do triangulo \n");
    scanf("%d",&b);
    printf("digite o terceiro lado do triangulo \n");
    scanf("%d",&c);

if(a+b<c || a+c<b ||c+b<a)
{
   printf("nenhum dos lados pode ser maior que a soma dos  outros \n");
}
}
while(a+b<c || a+c<b ||c+b<a);
if(a == b && b == c && c == a)
{
    printf("triangulo equilatero \n");
}
else if (a == b || b == c || c == a){
    printf("triangulo isoceles \n");}
    else{printf("triangulo escaleno\n");}
}
#endif


#ifdef ex15
int main()
{
    float a,b;


do{
    printf("digite o valor do salario minimo : \n");
    scanf("%f",&a);
   if(a<=0){
   printf("digite um valor maior q 0 \n");
   }
}while(a<=0);

    printf("digite o numero de aulas trabalhadas:\n ");
    scanf("%f",&b);

    printf("valor da hora trabalhada %f \n ",a/2);
    printf ("salario bruto : %f \n",a/2*b);
    printf("imposto equivale a : %f \n",(a/2*b)*0.03);
    printf("salario a receber : %f \n",(a/2*b)-((a/2*b)*0.03));
}



#endif
//escada
#ifdef ex16
int main()
{
    float a,b;
do{
    printf("digite a altura do degrau : \n");
    scanf("%f",&a);
   if(a<=0){
   printf("digite um valor maior q 0 \n");
   }
}while(a<=0);
do{
    printf("digite a altura que vc deseja chegar : \n");
    scanf("%f",&b);
   if(b<0){
   printf("digite um valor maior ou igual a 0 \n");
   }
}while(b<0);
printf("vc precisara subir %f degraus ",b/a);



}
#endif

//7.	Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso ideal, utilizando as seguintes fórmulas:
//a.	Para homens (72 * h) – 58
//b.	Para mulheres (62,1* h) – 44.7

#ifdef ex17


int main()
{
    float a,b;


do{
    printf(" digite 1 para homem ou 2 para mulher : \n");
    scanf("%f",&a);
   if(a==!1||a==!2){
   printf("digite h ou m \n");
   }
}while(a==!1||a==!2);
printf("digite sua altura :\n");
scanf("%f",&b);
if (a=1){
printf("seu peso ideal e : %f \n",(72*b)-58);


}
 else{printf("seu peso ideal e : %f",(62,1* b)-44.7);

             }


}

#endif


#ifdef ex18
int main()
{
    float a,b;
do{
    printf("digite o seu peso : \n");
    scanf("%f",&a);
   if(a<=0){
   printf("digite um valor maior q 0 \n");
   }
   printf("digite a sua altura : \n");
    scanf("%f",&b);
   if(b<=0){
   printf("digite um valor maior q 0 \n");
   }

}while(a<=0||b<=0);
if(a/(b)<18.5)
   {printf("seu imc e %f e esta abaixo de 18.5 ",a/(b));
}
else if (a/(b)>=18.5 ||a/(b)<25){
   printf("seu imc e %f e vc esta abaixo do peso ",a/(b));
}
else if (a/b>=25 || a/b<30){
     printf("seu imc e %f e vc esta com peso normal ",a/(b));
}
else { printf("seu imc e %f e vc esta acima do peso ",a/(b));}
}
#endif

#ifdef ex19
int main()
{
    float a,b;
do{
    printf("digite o seu peso : \n");
    scanf("%f",&a);
   if(a<=0){
   printf("digite um valor maior q 0 \n");
   }
   printf("digite a sua altura : \n");
    scanf("%f",&b);
   if(b<=0){
   printf("digite um valor maior q 0 \n");
   }

}while(a<=0||b<=0);

if(a<=60 && b<1.20)
   {printf("sua classificacao e A \n");
}
else if (a<=60 && b<=1.70){
   printf("sua classificacao e B \n");
}
else if (a<=60 && b>1.70){
     printf("sua classificacao e C \n");
}
else if ( a<=90 && b<1.20){
     printf("sua classificacao e D \n");
}
else if ( a<=90&& b<=1.70){
     printf("sua classificacao e E \n");
}
else if (a<=90&& b>1.70){
     printf("sua classificacao e F \n");
}
else if ( a>90 && b<1.20){
     printf("sua classificacao e G \n");
}
else if ( a>90 && b<=1.70){
     printf("sua classificacao e H \n");
}else if ( a>90 && b>1.70){
     printf("sua classificacao e I \n");

}}
#endif


#ifdef ex20
int main()
{
    int a,b,c;


do
{
    printf(" digite 1 para homem ou 2 para mulher : \n");
    scanf("%d",&a);
    if(a==!1||a==!2)
    {
        printf("digite h(1) ou m(2) \n");
    }
//printf("%d",a);
}
while(a==!1||a==!2);
do
    {
        printf(" digite sua idade : \n");
        scanf("%d",&b);
        if(b==0){
        printf("sabemos que vc n nasceu hoje\n");
   }
    }while(b==0);

printf("digite seu salario fixo :\n");
scanf("%d",&c);
   if(a==1)
  {
    printf("seu sexo e masculino \n");
   if (b>=30)   {
    printf("sua idade e: %d \n",b);
    printf("seu salario pos abono e : %d \n ",c+200);
  }
  else if (b<30)
  {
    //printf("seu sexo e masculino \n");
    printf("sua idade e: %d \n",b);
    printf("seu salario pos abono e : %d \n ",c+120);
  }
   } else if(a==2)
  {
    printf("seu sexo e feminino \n");
   if(b>=30){

    printf("sua idade e: %d \n",b);
    printf("seu salario pos abono e : %d \n",c+220);
   }
  else if (b<30)
  {
    //printf("seu sexo e feminino \n");
    printf("sua idade e: %d \n",b); // if a==1  m=a  a==m
    printf("seu salario pos abono e : %d \n",c+130);
  }}

}


#endif

