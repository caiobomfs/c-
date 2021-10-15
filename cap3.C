#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define ex7

#ifdef ex1


main()
{
    char C;

    do {

    int A,B;

    system("cls\n"); /*LIMPA A TELA*/
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d",&A);

    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d",&B);

    printf("A + B = %d\n",A+B);
    printf("A - B = %d\n",A-B);
    printf("A * B = %d\n",A*B);
    if(B==0)
    {
        printf("IMPOSSIVEL DIVIDIR POR 0!!\n");
    }
        else
        {
            printf("A / B = %d\n",A/B);
        }
    do{
        printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &C);
printf("\n resposta %c\n", C);

}

while((C!='s')&&(C!='n'));

    }while(C=='s');}

#endif

#ifdef ex2

main()
{
    char r;

    do{

    int A,B,C;

    system("cls\n");
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d",&A);
    C = A;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d",&B);

    printf("A += B = %d\n",A += B);
    A = C;
    printf("A -= B = %d\n",A -= B);
    A = C;
    printf("A *= B = %d\n",A *= B);
    A = C;
    if(B==0)
    {
        printf("IMPOSSIVEL DIVIDIR POR 0!!\n");
    }
        else
        {
            printf("A /= B = %d\n",A /= B);
        }
    do{
        printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &r);
printf("\n resposta %c\n", r);

}

while((r!='s')&&(r!='n'));

    }while(r=='s');}

#endif

#ifdef ex3


main()
{
    char r;

    do{

    float A,B,C;

    system("cls\n");
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%f",&A);
    C = A;
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%f",&B);

    printf("A += B = %.1f\n",A += B);
    A = C;
    printf("A -= B = %.1f\n",A -= B);
    A = C;
    printf("A *= B = %.1f\n",A *= B);
    A = C;
    if(B==0)
    {
        printf("IMPOSSIVEL DIVIDIR POR 0!!\n");
    }
        else
        {
            printf("A /= B = %.1f\n",A /= B);
        }
    do{
       printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &r);
printf("\n resposta %c\n", r);

}

while((r!='s')&&(r!='n'));

    }while(r=='s');}
#endif // ex3

#ifdef ex4

main()
{
    char r;

    do{

    int A,B;
    system("cls\n");
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d",&A);

    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d",&B);
    printf("\n");

    printf("HEXADECIMAL A & B = %x\nDECIMAL     A & B = %d\n",A&B,A&B);
    printf("\n");
    printf("HEXADECIMAL A | B = %x\nDECIMAL     A | B = %d\n",A|B,A|B);
    printf("\n");
    printf("HEXADECIMAL A ^ B = %x\nDECIMAL     A ^ B = %d\n",A^B,A^B);
    printf("\n");
    do{
       printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &r);
printf("\n resposta %c\n", r);

}

while((r!='s')&&(r!='n'));

    }while(r=='s');}
#endif

#ifdef ex5

main()
{
    char r;
    do{

    unsigned int A;

    system("cls\n");
    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d",&A);

    A = A >>3;
    printf("\nNUMERO DIVIDIDO POR 8 = %5u\n",A);
    A = A <<3;
    printf("NUMERO MULTIPLICADO POR 8 = %u\n",A);

    do{
       printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &r);
printf("\n resposta %c\n", r);

}

while((r!='s')&&(r!='n'));

    }while(r=='s');}
#endif // ex5

#ifdef ex6

main()
{
    char r;
    do{

    int A,B,C;

    system("cls\n");
    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%d",&A);
    C = A;

    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%d",&B);
    printf("\n");

    printf("A >= 120 && B < 240 = %d\n",A =  A>=120 && B<240);
    A = C;
    printf("A != 60  || B == 120 = %d\n",A = A!=60 || B==120);
    A = C;
    printf("(A*25) == 100 && (B+10) >= 100 = %d\n",A = (A*25)==100 && (B+10)>=100);
    A = C;
    printf("((A + 300)/5) >= 100 || (B - 200) <= 200 = %d\n",((A+300)/5)>=100 || (B-200)<=200);
    A = C;

    do{
        printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &r);
printf("\n resposta %c\n", r);

}

while((r!='s')&&(r!='n'));

    }while(r=='s');}
#endif

#ifdef ex7

main()
{
    char c;
    float C=0,K=0,F=0;

    do{
        do{
            printf("1-TRANSFORMAR GRAUS CELSIUS EM FAHRENHEIT E KELVIN\n");
            printf("2-TRANSFORMAR GRAUS FAHRENHEIT EM CELSIUS E KELVIN\n");
            printf("3-TRANSFORMAR GRAUS KELVIN EM CELSIUS E FAHRENHEIT\n");
            printf("4-SAIR DO PROGRAMA\n");
            printf("\n");
            printf("DIGITE UMA OPCAO:");
            c = getche();
            if(c!='1' && c!='2' && c!='3' && c!='4')
            {
                printf("\nDIGITE UMA OPCAO VALIDA!!\n");
            }
            printf("\n");
        }while(c!='1' && c!='2' && c!='3' && c!='4');

    switch(c)
    {
        case '1':
        {
            printf("\nDIGITE A TEMPERATURA EM CELSIUS: ");
            scanf("%f",&C);

            K=C+273;
            F=1.8*C+32;

            printf("\nTEMPERATURA EM FAHRENHEIT %.2f\n",F);
            printf("TEMPERATURA EM KELVIN %.2f\n",K);
            printf("\n");
        }
        break;
        case '2':
        {
            printf("\nDIGITE A TEMPERATURA EM FAHRENHEIT: ");
            scanf("%f",&F);

            C=(F-32)/1.8;
            K=C+273;

            printf("\nTEMPERATURA EM CELSIUS %.2f\n",C);
            printf("TEMPERATURA EM KELVIN %.2f\n",K);
            printf("\n");
        }
        break;
        case '3':
        {
            printf("\nDIGITE A TEMPERATURA EM KELVIN: ");
            scanf("%f",&K);

            C=K-273;
            F=1.8*(K-273)+32;

            printf("\nTEMPERATURA EM CELSIUS %.2f\n",C);
            printf("TEMPERATURA EM FAHRENHEIT %.2f\n",F);
            printf("\n");
        }
        break;
    }
    }while(c!='4');
}
#endif

#ifdef ex8

main()
{
        int a1,a2,a3,b1,b2,b3,c1,c2,c3,chk;

        inicio:
            for(;;){
                printf("Digite o dia do nascimento:");
                scanf("%d",&a1);
                printf("Digite o mes do nascimento:");
                scanf("%d",&a2);
                printf("Digite o ano do nascimento:");
                scanf("%d",&a3);

                printf("Digite o dia atual:");
                scanf("%d",&b1);
                printf("Digite o mes atual:");
                scanf("%d",&b2);
                printf("Digite o ano atual:");
                scanf("%d",&b3);

                c3=b3-a3;
                if(b2>=a2){
                    if(b1>=a1){
                    }else{
                        c3--;
                    }
                }else{
                    c3--;
                }
                printf("A sua idade e' %d.\n\n",c3);

                printf("1- Digitar novo numero.   2- Sair.");
                scanf("%d",&chk);

                if(chk==1){
                    goto inicio;
                }else{
                    break;
                }
            }
}
#endif // ex8

#ifdef ex9


main()
{
    const int chave_meses[] = {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6}; //chaves dos meses
    const int max_dias_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //maximo de dias por mes
    const char *dias_semana[] = {"DOMINGO", "SEGUNDA", "TERCA", "QUARTA", "QUINTA", "SEXTA", "SABADO"};
    int dia, mes, ano;
    int bissexto = 0;
    int chave_ano = 0;
    int chave_mes = 0;
    int dia_semana = 0;
    int soma = 0;
    char r;

    do{
        do{
            printf("DIGITE O ANO: ");
            scanf("%d", &ano);
            if(ano <=1000)
            {
                printf("DIGITE UM ANO SUPERIOR A 1000\n");
            }
        }while (ano <= 1000);
        do {
            printf("DIGITE O MES: ");
            scanf("%d", &mes);

            chave_mes = chave_meses[mes - 1];

        }while (mes < 1 || mes > 12);

        while (1) {
            printf("DIGITE O DIA: ");
            scanf("%d", &dia);

            bissexto = 0;

            if (mes == 2 && ano % 4 == 0 && (ano % 400 == 0 || ano %100 != 0)) {
                bissexto = 1;
              }
            if (dia >= 1 && dia <= max_dias_mes[mes - 1] + bissexto) {
                break;
              }
            printf("ENTRE COM UM DIA ENTRE 1 e %d\n", max_dias_mes[mes - 1] + bissexto);

        }

        if (ano < 2000) {
            chave_ano = ((ano % 100) / 4 + ((ano % 100) % 7)) % 7;
        } else {
            ano -= 100;
            chave_ano = (((ano % 100) / 4) + ((ano % 100) % 7)) % 7 - 1;
        }

        if (bissexto == 1 && (mes == 1 || mes == 2)) {
            chave_ano -= 1;
        }
        soma = dia + chave_mes + chave_ano;

        int i;
        for (i = soma; i >= 1; i--) {
            if (i % 7 == 0) {
                dia_semana = soma - i == 0 ? 7 : soma - i;
                break;
            }
        }
        printf("O DIA DA SEMANA = %s\n", dias_semana[dia_semana - 1]);

        do{
        printf("DESEJA CONTINUAR?\nDIGITE S PARA SIM N PARA NAO\n");
        scanf(" %c", &r);
printf("\n resposta %c\n", r);

}

while((r!='s')&&(r!='n'));

    }while(r=='s');}
#endif
