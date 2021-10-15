#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados {
        int quantidade_atual;
        int quantidade_minima;
        char codigo[9];
        char data_validade[11];
        char nome[40];
            ;};

void inclui();
void lista();
int pesquisa();
int pesquisa1L();
int pesquisaVAL();
int pesquisaMIN();
void alteraESTO();
void altera();
void exclui();

int main()
{
        struct dados info;
        struct dados *p;
        int op;
        int i;
        int tam;    //n. de bytes da estrutura

        p = & info;
        tam = sizeof(info);


        while(1){
    //printf("tam %d",tam);
        printf(" 1 -Inclua dados  \n");
        printf(" 2 -Lista dados  \n");
        printf(" 3 -Pesquisa dados  \n");
        printf(" 4 -pesquisa por 1 letra  \n");
        printf(" 5 -pesquisa por validade  \n");
        printf(" 6 -pesquisa n disponiveis  \n");
        printf(" 7 -Altera estoque  \n");
        printf(" 8 -Altera dados  \n");
        printf(" 9 -Exclui dados  \n");
        printf(" 10-Saida\n");
        scanf("%d", &op);
        getchar();


    switch(op)
                {
                case 1 : inclui(p, tam);   //passa como parametro o ponteiro para a estrutura e o n. de bytes da desta
                break;

                case 2: lista(p, tam);
                break;

                case 3: pesquisa(p, tam);
                break;

                 case 4: pesquisa1L(p, tam);
                break;

                 case 5: pesquisaVAL(p, tam);
                break;
                 case 6: pesquisaMIN(p, tam);
                break;
                 case 7: alteraESTO(p, tam);
                break;

                case 8: altera(p, tam);
                break;

                case 9: exclui(p, tam);
                break;

                case 10: exit(0);
                break;

                default: printf("\n opcao invalida\n");
                }
    };

}

void inclui(struct dados *ps, int tam)
{
    FILE *p, *p1;
    int cont = 0;
    int i;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    printf("contador antes %d\n",cont);
    fclose(p1);


    p = fopen("arquivo.txt", "a");

    if( p == NULL){
        printf("\nERRO");
        exit(1);
    }

    printf("insere o codigo numerico ai chefia:\n ");
    gets(ps->codigo);
    printf("iai insere a descricao ai chefia:\n");          //aqui os dados sao recebidos via teclado
    gets(ps->nome );
    printf("insere a quantidade atual chefia:\n");
    scanf("%d",&ps->quantidade_atual);
    printf("insere a quantidade minima ai chefia:\n");
    scanf("%d",&ps->quantidade_minima);
    printf("insere a data de validade ai chefia:\n ");
    gets(ps->data_validade);
    gets(ps->data_validade);

//system("pause");
    fwrite(ps, tam,1,p);
    fclose(p);

    cont++;

    p1 = fopen("contador.txt", "w");
    fprintf(p1,"%d",cont);
    printf("contador depois %d\n",cont);
    fclose(p1);
}

void lista(struct dados *ps, int tam)
{
    FILE *p, *p1;
    FILE *a;

    int i;
    int cont,comp;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    printf("%d\n",cont);
    fclose(p1);

    p = fopen("arquivo.txt", "r"); /*r" --> Abre o arquivo apenas para leitura.*/

    if( p == NULL)
        {
        puts("\nERRO\n");
        exit(1);
    }



    for(i=0;i<cont; i++){
        comp = i*tam;   //calcula o n. de bytes para posicionar o ponteiro do arquivo

    fseek(p,comp,0);    //posiciona o ponteiro no inicio do registro dentro do arquivo
    fread(ps,tam,1,p);   //le o registro
   if(ps->nome[0] != 12)
{
   printf("codigo %s\n",ps->codigo);
    printf("descricao: %s\n",ps->nome);
    printf("quantidade atual %d\n",ps->quantidade_atual);
    printf("quantidade minima %d\n",ps->quantidade_minima);
    printf("data de validade %s\n",ps->data_validade);    //verifica se esta apagado
}  //imprimi registro na tela

    }
        fclose(p);
}

int pesquisa(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    char nome1[20];
    int i=0,y, x;
    int cont;

     printf("Informe um nome para pesquisa: ");
    gets(nome1);

    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {  fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
        printf("n. do reg.: %d\n",y);
        return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}


int pesquisa1L (struct dados *ps, int tam )
{
       FILE *p;
    FILE *a;

    char letra;
    int i=0,y, x;
    int cont;



     printf("Informe uma letra para pesquisa: ");
    scanf("%c",&letra);

    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {
        fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo

        fread(ps,tam,1,p);

            if(letra == ps -> nome[0])


    {
        printf("n. do reg e nome.: %d,%s \n",y,ps->nome);
return y;
    }
    }
    printf("reg. nao existe\n");
return -1;
}


int pesquisaVAL(struct dados *ps, int tam)
{
      FILE *p;
    FILE *a;

    char val[11];
    int i=0,y, x;
    int cont;

     printf("Informe uma data de validade: ");
    gets(val);

    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {  fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo
        fread(ps,tam,1,p);
        for(x = 0; val[x] != '\0';x++){
            if(val[x] != ps ->data_validade[x]){
                break;
            }
        }

    if(val[x] == '\0' && ps ->data_validade[x] == '\0')
    {
        printf("n. do reg.: %d\n",y);
        return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}







int pesquisaMIN(struct dados *ps,int tam){

       FILE *p;
    FILE *a;


    int i=0,y, x;
    int cont;





    p = fopen("arquivo.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {
        fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo

        fread(ps,tam,1,p);

            if(ps->quantidade_atual <= ps ->quantidade_minima)


        {
        printf("n. do reg e nome.: %d,%d,%s \n",y,ps->quantidade_atual,ps->nome);
return y;
        }
    }
    printf(" n tem nada quase faltando\n");
return -1;

}


void alteraESTO(struct dados *ps, int tam){
FILE *p;
    FILE *a;

    char nome1[20];
    int i=0,y, x;
    int cont;
    int z;
     printf("Informe um nome para pesquisa: ");
    gets(nome1);

    p = fopen("arquivo.txt", "r+");
    a = fopen("contador.txt", "r+");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {  fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {



    printf("insere a nova quantidade  chefia:\n");
    scanf("%d",&z);
    (ps->quantidade_atual=ps->quantidade_atual+z);

//system("pause");
    fseek(p,y*tam,0);
    fwrite(ps, tam,1,p);
       fclose(p);
       return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}

void altera(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    char nome1[20];
    int i=0,y, x;
    int cont;

     printf("Informe um nome para pesquisa: ");
    gets(nome1);

    p = fopen("arquivo.txt", "r+");
    a = fopen("contador.txt", "r+");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {  fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
        printf("insere o novo codigo numerico ai chefia:\n ");
    gets(ps->codigo);
    printf("iai insere a nova descricao ai chefia:\n");          //aqui os dados sao recebidos via teclado
    gets(ps->nome );
    printf("insere a nova  quantidade atual chefia:\n");
    scanf("%d",&ps->quantidade_atual);
    printf("insere a nova quantidade minima ai chefia:\n");
    scanf("%d",&ps->quantidade_minima);
    printf("insere a nova data de validade ai chefia:\n ");
    gets(ps->data_validade);
    gets(ps->data_validade);

//system("pause");
    fseek(p,y*tam,0);
    fwrite(ps, tam,1,p);
       fclose(p);
       return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}

void exclui(struct dados *ps, int tam)
{
   FILE *p;
    FILE *a;

    char nome1[20];
    int i=0,y, x;
    int cont;

     printf("Informe a descrição do que vc quer excluir : ");
    gets(nome1);

    p = fopen("arquivo.txt", "r+");
    a = fopen("contador.txt", "r+");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    for(y=0;y<cont;y++)
    {  fseek(p,y*tam,0); //localizaçoa , deslocamento, deslocamento no comeco do arquivo
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
        ps->nome [0]=12; //atribuir a algo  e fazer aquele algo n ser listado
        puts(ps->nome);


//system("pause");
    fseek(p,y*tam,0);
    fwrite(ps, tam,1,p);
       fclose(p);
       return y;
    }
    }
    printf("reg. nao existe\n");
    return -1;
}
