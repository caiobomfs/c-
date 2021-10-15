#define ex1
#include<stdio.h>
#include<stdlib.h>

#include <string.h>
#include <conio.h>
#include <math.h>
#include<float.h>
#ifdef ex1

char vetor[]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char pesquisa(char b);

    int main()
    {
        char a;

        printf("Digite um caracater: ");
        scanf("%c",&a);
        getchar();

     pesquisa(a);
    }

    char pesquisa(char b)
    {
        char resposta;
        int i;
        int cont = 0;
        for(i=0; i<=13; i++)
        {
            if(vetor[i]==b)
                {
                cont++;
                }
        }
        if(cont>0)
        {
            resposta = printf("Caracter contido no vetor");
        }
        else
        {
            resposta = printf("Caracater nao contido no vetor");
        }

        return(resposta);
    }



#endif






#ifdef ex2



float a = 0;
float b = 0;
float r = 0;
char sinal = '+';
 int soma() { r = a + b;}
    int subtracao() { r = a - b;}
    int multiplicacao() { r = a * b;}
    int divisao() { r = a / b;}

    main()
    {
      printf("Digite o valor de A: ");
      scanf("%f \n", a);
      printf("Digite o valor de B: ");
      scanf("%f\n", b);
      printf("Digite o tipo de operação [ + ou - ou * ou / ]: ");
      scanf("%c \n", sinal );
    }
    #endif
    #ifdef ex3




  float a = 0;
  float  b = 0;
  int  r = 0;
  char sinal = '+';
  void soma() { r = a + b;}
    void subtracao() { r = a - b;}
    void multiplicacao() { r = a * b;}
    void divisao() { r = a / b;}

    main()
    {
      printf("Digite o valor de A: ");
      scanf("%d \n", a);
      printf("Digite o valor de B: ");
      scanf("%d\n", b);
      printf("Digite o tipo de operação [ + ou - ou * ou / ]: ");
      scanf("%c \n", sinal );
    }

    #endif
    #ifdef ex4

    int main(void)
{
    float a, b;
    char sinal;

    printf("\n\t\tCalculadora com 4 operacoes : \n\n");
    printf("Digite o valor de A: ");
      scanf("%f \n", a);
      printf("Digite o valor de B: ");
      scanf("%f\n", b);
      printf("Digite o tipo de operação [ + ou - ou * ou / ]: ");
      scanf("%c \n", sinal );
    switch(sinal)
    {
    case '+':
     printf("\n = %.2f\n", a+b);
     break;
    case '-':
     printf("\n = %.2f\n", a-b);
     break;
    case '*':
    case 'x':
     printf("\n = %.2f\n", a*b);
     break;
    case '/':
    case':':
     printf("\n = %.2f\n", a/b);
     break;
    default:
     printf("\n Operacao impossivel de ser realizada!!\n");
    }
      system ("PAUSE");
    return 0;
}

#endif
#ifdef ex5
char str1[10];
char str2[10];
int validaString(char str1[10], char str2[10]);
int main()
{
int result=0;
int fim=0;
do{
printf("Digite uma string de ate 10 caracteres: ");
scanf("%s", &str1);
printf("Digite uma string de ate 10 caracteres: ");
scanf("%s", &str2);
result = validaString(str1 , str2);
printf("\n Retorna 0 se forem diferentes\n Retorna 1 se forem iguais\n Retorna 2 se a 1 for maior que a 2\n Retorna 3 se a 2 for maior que a 1\n\n");
printf("O resultado e %d\n\n", result);
printf("Digite 1 para finalizar ou qualquer tecla para continuar: ");
scanf("%d", &fim);
}while(fim != 1);
}
int validaString(char str1[10], char str2[10]){
int i;
int ver=0;
int ver1=0;
int ver2=0;
for(i=0; i<10;i++){
    if(str1[i] == 0 && str2[i] != 0){
       ver ++;
    }else
    if(str1[i] != 0 && str2[i] == 0){
        ver1++;
    }
    if(str1[i] != str2[i]){
        ver2++;
    }
 }
    if(ver > 0){
        return 3;
    }else if(ver1 > 0){
        return 2;
    }else if(ver2 > 0){
        return 0;
    }
    else{
        return 1;
    }
}


#endif
#ifdef ex6
int fatorial(int a);

main()
{
    int num;
    int c;
            do{


    printf("Digite um numero: ");
    scanf("%d", &num);


    printf("a soma dos algarimos dos numeros fatoriais e' %d: ",fatorial(num));
    printf("\n\nDeseja continuar? ");
           printf("\n 1 - Sim\n");
           printf("\n 2 - Nao\n");
           scanf("%d",&c);

        }while(c==1);
}

int fatorial(int a)
{
    int fat=1;
    while(a!=1)
        {
         fat = fat*a;
         a--;
        }
     int soma =0;
     while (fat!=0){
        soma = soma + (fat%10);
        fat = fat/10;
     }

    return(soma);

}


#endif
#ifdef ex7
int exponencial(int a, int b);

    main()

    {

        int num, exp;
        int c;
            do{


        printf("\nDigite o numero: ");
        scanf("%d",&num);

        printf("\nDigite o expoente: ");
        scanf("%d",&exp);

        printf("%d elevado a %d = %d",num,exp,exponencial(num,exp));
        printf("\n\nDeseja continuar? ");
        printf("\n 1 - Sim\n");
        printf("\n 2 - Nao\n");
        scanf("%d",&c);

        }while(c==1);

    }

    int exponencial(int a, int b)
    {
        int cont =0;
        int res;

        if(b == 0)
        {
            res=1;
        }
        else if(b ==1)
        {
            res=a;
        }
        else
        {
            while(cont<=b)
        {
        res = a*a;
        cont++;
        }
        }
        return(res);
    }



#endif

#ifdef ex8

int main()
{
   int multiplicar(int n1, int n2);
   int decomporNumero(int a);
   int verificaPosit(int a);
   int a=0;
   int b=0;
   int verifA=0;
   int verifB=0;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    verifA = verificaPosit(a);
    verifB= verificaPosit(b);

    if(verifA == 1 && verifB == 1){
        printf("%d", somar(decomporNumero(a),decomporNumero(b)));

    }else if(verifA == 0 && verifB == 0){
        printf("%d", multiplicar(decomporNumero(a),decomporNumero(b)));
    }
}


int verificaPosit(int a)
{
    if(a > 0){
        return 1;
    }else if(a == 0){
        return -1;
    }else{
        return 0;
    }
}


int somar(int n1, int n2){
    return n1 + n2;
}

int multiplicar(int n1, int n2){
    return n1 * n2;
}

int decomporNumero(int a){

int dig =0;
int digC =0;
int mod =-1;
int u = 0;
int d = 0;
int c = 0;
int uM = 0;
int dM = 0;
int cM = 0;
int uMM = 0;
int dMM = 0;
int cMM = 0;
int uB = 0;

mod = a%10;
dig = a/10;

if(mod == 0){
    u = 0;
}
if(mod != 0){
    u = mod;
}
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        d = mod;
        if(digC == 0){
            dig = 0;
        }
    }
    if (digC != 0){
        mod = digC%10;
        dig = digC /10;
        c = mod;
         if(dig == 0){
            digC = 0;
         }
    }
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        uM = mod;
        if(digC == 0){
            dig = 0;
        }
    }

    if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        dM = mod;
        if(dig == 0){
            digC = 0;
         }
    }
     if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        cM = mod;
        if(digC == 0){
            dig = 0;
        }
    }

     if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        uMM = mod;
        if(dig == 0){
            digC = 0;
         }
    }
    if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        dMM = mod;
        if(digC == 0){
            dig = 0;
        }
    }

      if(digC != 0){
        mod = digC%10;
        dig = digC/10;
        cMM = mod;

        if(dig == 0){
            digC = 0;
         }
    }
      if(dig != 0){
        mod = dig%10;
        digC = dig/10;
        uB = mod;
        if(digC == 0){
            dig = 0;
        }
    }
if(a > 0){
    return u + d + c + uM + dM + cM + uMM + dMM + cMM + uB;
}else if(a < 0){
    return u * d * c * uM * dM * cM * uMM * dMM * cMM * uB;
}
}
#endif

