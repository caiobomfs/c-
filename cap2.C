#define ex5


#include <stdio.h>
#include <stdlib.h>



#ifdef ex1
int main()
{
    int soma = 0;
    int num;
    int cont = 0;
    float media;

    while(num>0){
    printf("digite um numero: ");
    scanf("%d",&num);

        if(num>0){
        soma=soma+num;
        cont++;
        }
    }
    media = (float)soma/(float)cont;
    printf("a media dos numeros positivos 'e: %f", media);


    }
    #endif





    #ifdef ex2

    int main(){

    int min= 1;
    int max = 99;
    int n;
    char r;

    printf("-------pense em um Numero-------");
    printf("\n\n----use > caso seja maior----");
    printf("\n----use < caso seja menor----");
    printf("\n----use = caso seja o numero pensado----\n\n");




        while(r!='=')
            {
            printf("\no numero e' maior, menor ou igual a %d ?" , n=(max+min)/2);
            scanf("%c",&r);



            if(r=='>'){
            min = n;
            n=(max+min)/2;
            getchar();

            }
            else if(r=='<')
            {
            max= n;
            n=(max+min)/2;
            getchar();


            }
            }


        printf("o numero pensado e': %d\n",n);



    }
    #endif






#ifdef ex3

int main()

{

int min= 1;
    int max = 99;
    int n;
    char r;

    printf("-------pense em um Numero-------");
    printf("\n\n----use > caso seja maior----");
    printf("\n----use < caso seja menor----");
    printf("\n----use = caso seja o numero pensado----\n\n");

    do{

          printf("\no numero e' maior, menor ou igual a %d ?" , n=(max+min)/2);
          scanf("%c",&r);

    switch(r)
            {
            case '>':
            {
             min = n;
             n=max+min/2;
             getchar();
             break;
            }


            case '<':
            {
            max = n;
            n=(max+min)/2;
            getchar();
            break;
            }

            case '=':
            {
            printf("o numero pensado e': %d",n);
            getchar();
            break;
            }

            default:
            {
            printf("\nopcao invalida");
            }


            }
            }while(r!='=');
}
#endif




    #ifdef ex4

    int main (){

    setlocale (LC_ALL, "Portuguese");
	int hrsinicio, hrsfinal, minuinicio, minfinal, segsinicio, segsfinal;
	int totalhora, totalminuto, totalsegundo;

	printf ("Digite a hora que foi feita a chamada: ");
	scanf ("%d", &hrsinicio);

	printf ("\nDigite o minuto: ");
	scanf ("%d", &minuinicio);

	printf ("\nDigite os segundos: ");
	scanf ("%d", &segsinicio);

    printf ("\nDigite a hora que foi finalizada a chamada: ");
	scanf ("%d", &hrsfinal);

	printf ("\nDigite o minuto: ");
	scanf ("%d", &minfinal);

	printf ("\nDigite os segundos: ");
	scanf ("%d", &segsfinal);

    totalhora =  hrsfinal - hrsinicio;
    totalminuto = minfinal - minuinicio;
    totalsegundo = segsfinal - segsinicio;

    if (totalminuto<60 && totalhora >= 1){
        totalhora = totalhora-1;
    }

    printf ("\n\n-------> Duração da ligação: %d:%d:%d", totalhora, totalminuto, totalsegundo);

	}



        #endif




      #ifdef ex5

      int main()
        {

            float f,r,n,mod;
            int num,dem;

            printf("digite o numerador: ");
            scanf("%d",&num);

            printf("digite o denominador: ");
            scanf("%d",&dem);

            r=num/dem;
            mod=num%dem;
            f=mod/dem;

             printf("o inteiro é %.f, o resto é %f e a parte fracionario e %f\n",r,mod,f);

            if(f<=0.24)
                {
                 r = r+0.0;
                printf("O numero arrendondado e':%.1f",r);
                }
                    else if(f>=0.25 && f<=0.74)
                    {
                        r =r+0.5;
                    printf("O numero arrendondado e':%.2f",r);
                    }
                        else
                        {
                        n=r+1;
                        printf("O numero arrendondado e':%.f",n);
                        }

        }
        #endif




     #ifdef ex6

     int main()
     {

         int l; /*quantidade a ser abastecido*/
         int tipo;
         float p,pag,d;/* p -preço sem desconto, pag - total a pagar com desconto, d - desconto dado */


         printf("Digite com quantos litros deseja abastecer: ");
         scanf("%d",&l);
         printf("****Digite 1 para gasolina ou 2 para Alcool**** \n");
         printf("Informe o tipo de Combustivel: ");
         scanf("%d",&tipo);
         getchar();

        printf("o tipo 'e: %d\n",tipo);

         switch(tipo)

            {
                case 1:

                    {
                        p = l * 3.88;
                        if(l<20){
                        pag = p - (l*0.04);
                        }
                        else{
                            pag = p - (l*0.06);
                            }

                    break;
                    }

              case 2:
                    {

                    p=l*3.18;
                        if(l<20){
                        pag = p - (l*0.03);
                        }
                        else{
                            pag = p - (l*0.05);

                                }

                    break;
                    }

                default:
                {
                printf ("\nA opcao escolhida e' invalida. \n");
                }
            }
         printf("Preco normal e' R$ %.2f: \n",p);
         printf("Valor com desconto e' R$ %.2f: \n",pag);
         printf("Seu desconto foi de R$ %.2f",d=p-pag);

     }
#endif



    #ifdef ex7
   int main()
        {
            float d;
            float l;
            float c;

            printf("digite a distancia percorrida em km: " );
            scanf("%f",&d);

            printf("digite quantos litros foram consumidos: " );
            scanf("%f",&l);

            c=d/l;

            if(c<8){
            printf("venda o carro!");
            }
            else if(c>8 && c<14)
            {
             printf("economico");
            }
            else{
            printf("super economico");
            }


        }

        #endif




    #ifdef ex8
    int main()

    {

        char sexo;
        float h,p;

        printf("Informe seu sexo: m ou h.\n");
        scanf("%c",&sexo);

        switch(sexo)
            {
                case 'h':
                case 'H':
                {
                 printf("\ninforme sua altura: ");
                 scanf("%f",&h);

                 p = (72.7 * h ) - 58;
                 printf("Seu peso ideal é: %2.f", p);
                 break;
                }
                case 'm':
                case 'M':
                {
                 printf("\ninforme sua altura: ");
                 scanf("%f",&h);

                 p = (62.1 * h ) - 44.7;
                 printf("Seu peso ideal é: %2.f", p);
                 break;
                }
                default:
                {
                printf("*****\nOpcao invalida*****");
                }

            }
        }
        #endif


















