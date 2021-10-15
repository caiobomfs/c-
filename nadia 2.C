#define ex8


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#ifdef ex1
#include <stdio.h>

int main()
{
    int k, i, a, b;
    k = 0;
    do{
        printf("Digite a quantidade de numeros a serem exibidos: ");
        scanf("%d", &k);
    }while(k < 1);

    a = 0;
    b = 0;

    for(i = 1 ;i <= k; i++){
        a = a + 3;
        b = b + 4;
        printf("a = %d \n", a);
        printf("b = 1/%d \n", b);
    }
}
    #endif




    #ifdef ex2
#include <stdio.h>

int main()
{
    int k, i, a, b, c, d;
    k = 0;
    do{
        printf("Digite a quantidade de numeros a serem exibidos: ");
        scanf("%d", &k);
    }while(k < 1);

    a = 0;
    b = 0;

    for(i = 1 ;i <= k; i++){

        printf("a = %d/", i*2);
        printf("%d \n", i*5);
        b = b + 2;
        c = b * b;

        d = 8 * i;

        if((c%d) == 0){
            printf("b = %d\n", c / d);
        }
        else{
            printf("b = %d/", c);
            printf("%d \n", d);
        }
    }
}

    #endif





#ifdef ex3
#include <stdio.h>

int main()
{
    int k, i, soma;//Declaração das variaveis
    soma = 0;//Atribuindo valor 0 à variavel
    k = 0;//Atribuindo valor 0 à variavel
    do{
        printf("Digite a quantidade de pessoas: ");
        scanf("%d", &k);
    }while(k < 1);//Validação para a quantidade de pessoas não ser negativa

    int n[k];//Declaração da variavel array para inserção das idades
    for(i = 0; i < k; i++){
        do{
            printf("Digite a idade da pessoa numero %d: ", i+1);
            scanf("%d", &n[i]);
            if(n[i] < 0){
                printf("A idade deve ser maior ou igual a zero! Digite novamente: \n");
            }//Valida se a idade é menor que 0 para mandar a mensagem na tela
        }while(n[i] < 0); // Loop para inserir idade maior que 0
        soma = soma + n[i]; //Soma as idades
    }
    printf("A soma das idades e: %d anos", soma);//Exibe na tela a soma das idades
}

#endif




    #ifdef ex4

 #include <stdio.h>

int main()
{
    int k, i, numPar;//Declaração das variaveis int
    float multiplo, qtde;//Declaração das variaveis float
    numPar = 0;//Atribuindo valor 0 à variavel
    k = 0;//Atribuindo valor 0 à variavel
    qtde = 0;
    do{
        printf("Digite a quantidade de numeros pares: ");
        scanf("%d", &k);
    }while(k < 1);//Validação para a quantidade de numeros pares não ser negativa

    for(i = 0; i < k; i++){
        numPar = numPar + 2;
        if((numPar % 5)== 0){
            multiplo = multiplo + numPar;
            qtde++;

            printf("%d\n", numPar);
        }//Faz a divisão por 5 e verifica se tem resto 0, caso tenha é um multiplo de 5, e exibe na tela para saber quais foram os numeros pares multiplos de 5
    }
    if(qtde > 0){
        printf("A media dos pares multiplos de 5 e: %.0f", multiplo / qtde);//Exibe na tela a media dos pares multiplos de 5
    }
    else{
        printf("Nao possui pares multiplos de 5!");//Exibe na tela que não foram obtidos pares multiplos de 5
    }
}


        #endif



      #ifdef ex5
int main()
{
    int k, i, qtdeZero, qtdePn;//Declaração das variaveis int
    k = 0;//Atribuindo valor 0 à variavel
    qtdeZero = 0;
    qtdePn = 0;
    do{
        printf("Digite a quantidade de numeros a serem digitados: ");
        scanf("%d", &k);
    }while(k < 1);//Validação para a quantidade de numeros a serem digitados não ser negativa

    int Num[k];//Declaração da variavel array

    for(i = 0; i < k; i++){
        printf("Digite um numero: ");
        scanf("%d", &Num[i]);
        if(Num[i] != 0){
            if(Num[i]%2 == 0){ //validação se é par
                if(Num[i] < 0){ //Validação se é negativo
                    qtdePn++;
                }
            }
        }
        else{
            qtdeZero++;
        }
    }
    if(qtdeZero > 0){
        printf("A quantidade de Zeros digitados foi: %d \n", qtdeZero);//Exibe na tela a quantidade de Zeros digitados
    }
    else{
        printf("Nao digitaram zero \n");//Exibe na tela a mensagem de erro
    }
    if(qtdePn > 0){
        printf("A quantidade de Pares Negativos foi: %d", qtdePn);//Exibe na tela a quantidade de Pares Negativos
    }
    else{
        printf("Nao digitaram pares negativos");//Exibe na tela a mensagem de erro
    }
}




        #endif





     #ifdef ex6
main(){

    int k, i, qtdeMult;
    qtdeMult = 0;
    k = 0;
    do{
        printf("Digite a quantidade de numeros a serem recebidos: ");
        scanf("%d", &k);
        if(k<=0){
            printf("A quantidade de numeros deve ser maior que zero! \n");
        }
    }while(k <= 0);

    int Num[k];

    for(i = 0; i < k ; i++){
        do{
            printf("Digite um numero positivo: ");
            scanf("%d", &Num[i]);
            if(Num[i]<= 0){
                printf("O numero deve ser positivo! \n");
            }
        }while(Num[i]<= 0);

        if((Num[i]%7) == 0){
            qtdeMult++;
        }
    }

    if(qtdeMult > 0){
        printf("A quantidade de multiplos de 7 foi: %d", qtdeMult);
    }
    else{
        printf("Nao tiveram multiplos de 7!");
    }
}

#endif




    #ifdef ex7
#include <stdio.h>

main(){
    int x, i;
    float prod;
    x = 0;
    prod = 1;
    do{
        printf("Digite a quantidade de numeros a serem digitados: ");
        scanf("%d", &x);
        if(x <= 0){
            printf("A quantidade de numeros a serem digitados deve ser maior que 0! \n");
        }
    }while(x <= 0);

    int h[x];

    for(i = 0; i < x; i++){
        do{
            printf("Digite um valor: ");
            scanf("%d", &h[i]);
            if(h[i] < 15){
                printf("O valor digitado deve ser maior ou igual a 15! \n");
            }
        }while(h[i] < 15);
        prod = prod * h[i];
    }
    printf("O produto dos valores digitados e: %.0f", prod);
}

        #endif


    #ifdef ex8
int main()
{
    int k, i;
    int soma;//Declaração das variaveis
    soma = 0;
    k = 0;
    do{
        printf("Digite a quantidade de pessoas: ");
        scanf("%d", &k);
    }while(k < 1);

    int n[k];
    for(i = 0; i < k; i++){
        do{
            printf("Digite o peso da pessoa numero %d: ", i+1);
            scanf("%d", &n[i]);
            if(n[i] < 0){
                printf("A idade deve ser maior ou igual a zero! Digite novamente: \n");
            }//Valida se a idade é menor que 0 para mandar a mensagem na tela
        }while(n[i] < 0); // Loop para inserir idade maior que 0
        soma = soma + n[i]; //Soma as idades
    }
    printf("A soma dos pesos: %d quilos", soma/i);//Exibe na tela a soma das idades
}

        #endif


