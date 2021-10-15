#define ex4
#include "stdio.h"
#include<math.h>
#ifdef ex1


    char c = 127;
    int i = 32767;
    short si = 32767;
    long li = 2147483647;
    unsigned char uc = 255;
    unsigned int ui = 65535;
    unsigned short usi  = 65535;
    unsigned long uli = 4294967295;
    float f = 3.4E+38;
    double d = 1.7E+308;

main()
{
    printf("LIMITES POSITIVOS\n");
    printf("\nCHAR = %c\n",c);
    printf("INTEIRO = %d\n",i);
    printf("SHORT = %hd\n",si);
    printf("LONG = %ld\n",li);
    printf("UNSIGNED CHAR = %u\n",uc);
    printf("UNSIGNED INT = %u\n",ui);
    printf("UNSIGNED SHORT = %hu\n",usi);
    printf("UNSIGNED LONG = %lu\n",uli);
    printf("FLOAT = %g\n",f);
    printf("DOUBLE = %g\n",d);

    char c1 = -128;
    int i1 = -32768 ;
    short si1 = -32768;
    long li1 = -2147483648;
    unsigned char uc1 = 0;
    unsigned int ui1 = 0;
    unsigned short usi1 = 0;
    unsigned long uli1 = 0;
    float f1 = -3.4E+38;
    double d1 = -1.7E+308;

    printf("\nVALORES NEGATIVOS\n");

    printf("\nCHAR = %c\n",c1);
    printf("INTEIRO = %d\n",i1);
    printf("SHORT = %hd\n",si1);
    printf("LONG = %ld\n",li1);
    printf("UNSIGNED CHAR = %u\n",uc1);
    printf("UNSIGNED INT = %u\n",ui1);
    printf("UNSIGNED SHORT = %hu\n",usi1);
    printf("UNSIGNED LONG = %lu\n",uli1);
    printf("FLOAT = %g\n",f1);
    printf("DOUBLE = %g\n",d1);
}
#endif

#ifdef ex2

main()
{
    char c;
    unsigned char uc;
    short s;
    long l;
    int i;
    float f;
    double d;
    unsigned int ui;
    unsigned long ul;

    printf("DIGITE UM NUMERO SHORT: ");
    scanf("%d",&s);
    printf("DIGITE UM NUMERO LONG: ");
    scanf("%ld",&l);
    printf("DIGITE UM NUMERO INT: ");
    scanf("%d",&i);
    printf("DIGITE UM NUMERO FLOAT: ");
    scanf("%f",&f);
    printf("DIGITE UM NUMERO DOUBLE: ");
    scanf("%lf",&d);
    printf("DIGITE UM CARACTER: ");
    scanf("%c",&c);
    c = getchar();

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");


    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.1f%21.0lf%18c\n",f,d,c);
}
#endif
#ifdef ex3

main()
{
    char c;
    unsigned char uc;
    short s;
    long l;
    int i;
    float f;
    double d;
    unsigned int ui;
    unsigned long ul;

    printf("DIGITE UM NUMERO SHORT: ");
    scanf("%d",&s);
    printf("DIGITE UM NUMERO LONG: ");
    scanf("%ld",&l);
    printf("DIGITE UM NUMERO INT: ");
    scanf("%d",&i);
    printf("DIGITE UM NUMERO FLOAT: ");
    scanf("%f",&f);
    printf("DIGITE UM NUMERO DOUBLE: ");
    scanf("%lf",&d);
    printf("DIGITE UM UNSIGNED INT: ");
    scanf("%u",&ui);
    printf("DIGITE UM UNSIGNED LONG: ");
    scanf("%lu",&ul);
    printf("DIGITE UM UNSIGNED CHAR: ");
    scanf("%c",&uc);
    uc = getchar();
    printf("DIGITE UM CARACTER: ");
    scanf("%c",&c);
    c = getchar();

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");


    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.1f%21.0lf%18c\n",f,d,c);
    printf("%10u%20u%20lu",uc,ui,ul);
}
#endif

#ifdef ex4

main()
{

    int A=30,B=70;

    printf("VARIAVEIS INICIAIS SAO...\n");
    printf("A=%d\nB=%d\n",A,B);

    A = A+B;
    B = A-B;
    A = A-B;

    printf("\nVARIAVEIS PERMUTADAS SAO...\n");
    printf("A=%d\nB=%d",A,B);
}
#endif

#ifdef ex5

main()
{
    int lim,mul,x,MENOR=0;

    printf("LIMITE: ");
    scanf("%d",&lim);
    printf("MULTIPLO: ");
    scanf("%d",&mul);

    for(x=lim+mul+1;x>lim;x--)
    {
        if(x%mul==0)
        {
            if(x<MENOR)
            {
                MENOR = x;
            }
                else if(MENOR==0)
                {
                    MENOR = x;
                }
        }
    }
    printf("MENOR MULTIPLO DE %d MAIOR QUE O LIMITE MINIMO EH %d = %d",mul,lim,MENOR);
}
#endif
#ifdef ex6

main()
{
    int H,M,S,s;

    printf("DIGITE OS SEGUNDOS: ");
    scanf("%d",&s);

    H = s/3600;
    S = s%3600;
    M = S/60;
    S = S-(M*60);

    if(H==0)
    {
        printf("%d SEGUNDOS SAO = %dmin %dseg",s,M,S);
    }
        else if(H==1)
        {
            printf("%d SEGUNDOS SAO = %dh %dmin %dseg",s,H,M,S);
        }
            else
            {
                printf("%d SEGUNDOS SAO = %dhrs %dmin %dseg",s,H,M,S);
            }
}
#endif // ex6

#ifdef ex7

main()
{
    int A,B=0,C=0,D=0;

    do
    {
        printf("DIGITE UM NUMERO POSITIVO DE 3 DIGITOS: ");
        scanf("%d",&A);
        if(A<99 || A>999)
        {
            printf("DIGITE UM NUMERO POSITIVO DE 3 DIGITOS!!!\n");
        }
    }while(A<99 || A>999);

    D = A;

    for(;A>0;)
    {
        B = A%10;
        C = C*10+B;
        A = A/10;
    }

    printf("NUMERO ORIGINAL  = %d\n",D);
    printf("NUMERO INVERTIDO = %d\n",C);
}
#endif
#ifdef ex8


int main()
{
    int valorreais, nota100, nota50, nota10, nota1, aux;
    printf("digite o valor ");
    scanf("%d",&valorreais);

    nota100 = valorreais / 100;
    aux = valorreais % 100;
    nota50 = aux / 50;
    aux = aux % 50;
    nota10 = aux / 10;
    nota1 = aux % 10;

    printf("NOTAS DE 100 = %d\n",nota100);
    printf("NOTAS DE 50 = %d\n",nota50);
    printf("NOTAS DE 10 = %d\n",nota10);
    printf("NOTAS DE 1 = %d\n",nota1);

    return 0;
}
#endif

