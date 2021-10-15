#define ex6
#include "stdio.h"
#include "windows.h"
#include "string.h"
#include "conio.h"
#include "math.h"
#ifdef ex1
void regua(char vc,int vi,long vl,float vf,double vd,unsigned char vuc,unsigned int vui, unsigned long vul)
{
    printf("        10        20        30        40        50        60        70\n");
    printf("1234567890123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %c         %6d         %ld                   %.0f                   %.0lf",vc,vi,vl,vf,vd);
    printf("          %c                   %d                   %ld",vuc,vui,vul);
}

main()
{
char varchar;
int varint;
long varlong;
float varfloat;
double vardouble;
unsigned char varuchar;
unsigned int varuint;
unsigned long varulong;

printf("entre com os valores ");
scanf("%c",&varchar);
scanf("%d",&varint);
scanf("%ld",&varlong);
scanf("%f",&varfloat);
scanf("%lf",vardouble);
scanf("%c",&varuchar);
scanf("%d",&varuint);
scanf("%ld",&varulong);
regua(varchar,varint,varlong,varfloat,vardouble,varuchar,varuint,varulong);

}
#endif
#ifdef ex2
void soma(int *p)
{
    for(int i = 1;i<3;i++)
    {
    p[0]+=p[i];
    }
}
void sub(int *p)
{
    for(int i = 1;i<3;i++)
    {
    p[0]-=p[i];
    }
}
void mult(int *p)
{
    for(int i = 1;i<3;i++)
    {
    p[0]*=p[i];
    }
}
void div(int *p)
{
    for(int i = 1;i<3;i++)
    {
    p[0]/=p[i];
    }
}

main()
{
    int n[3];
    char varchar = 'a';
    while(varchar!='+'&&varchar!='-'&&varchar!='*'&&varchar!='/')
    {
    printf("letra selecionada = %c\n",varchar);
    printf("escreva a operacao aritmetica +, - , * ou / ");
    scanf("%c",&varchar);
    }

    printf("escreva 3 numeros ");


    if(varchar=='+')
    {
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    soma(n);
    printf("a soma deu %d",n[0]);
    }

    if(varchar=='-')
    {
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    sub(n);
    printf("a soma deu %d",n[0]);
    }

    if(varchar=='*')
    {
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    mult(n);
    printf("a soma deu %d",n[0]);
    }

    if(varchar=='/')
    {
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    div(n);
    printf("a soma deu %d",n[0]);
    }

}

#endif



#ifdef ex3
bool pesquisa(char letra, char *vetor, int tamanho);

main() {
    static char vetor[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
    char letra;
    puts("Digite uma letra: ");
    letra = getchar();
    puts("Resultado: ");
    if(pesquisa(letra,&vetor[0],sizeof(vetor))) {
        puts("valor encontado");
    } else {
        puts("valor nao encontrado");
    }
}

bool pesquisa(char letra,char *vetor,int tamanho) {
    int i;
    for(i=0;i<tamanho;i++) {
        if(letra==vetor[i]) {
            return 1;
        } else {
            return 0;
        }
    }
}

#endif

#ifdef ex4
int compara(char*a,char*b)
{
    int p1=0,p2=0;
     for(int i = 0;a[i]!='\0';i++)
    {
        p1++;
    }
    for(int i = 0;b[i]!='\0';i++)
    {
        p2++;
    }
    if(p1>p2)
    {
        return 2;
    }
    else if(p1<p2)
    {
        return 3;
    }
    else
        {
        p2=0;
        for(int i = 0;i<p1;i++)
        {
            if(a[i]==b[i])
            {
                p2++;
            }
        }
    if(p1 == p2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    }
}

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
    int passou=1;

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

    passou = compara(pa,pb);
    printf("%d",passou);


}
#endif

#ifdef ex5
struct dados {
    char nome[40];
    char end[40];
    char cidade[40];
    char estado[3];
    char cep[9];
};

void recepcao(dados *pessoas);
void exibicao(dados *pessoas);

main() {
    int i, op;
    struct dados pessoas[3];
    do {
        printf("\nEscolha uma opcao:\n1 - Inserir dados\n2 - Exibir dados\n3 - Sair.\n-->");
        scanf("%d",&op);
        getchar();
        switch(op) {
            case 1: recepcao(pessoas);
            break;
            case 2: exibicao(pessoas);
            break;
            case 3: printf("\nEncerrando...\n");
            break;
        }
    } while(op != 3);
}

void recepcao(dados *pessoas) {
    int i;
    for(i=0; i<3; i++) {
        puts("Digite seu nome: ");
        gets(pessoas[i].nome);
        puts("Digite seu endereco: ");
        gets(pessoas[i].end);
        puts("Digite sua cidade: ");
        gets(pessoas[i].cidade);
        puts("Digite seu estado: ");
        gets(pessoas[i].estado);
        puts("Digite seu cep: ");
        gets(pessoas[i].cep);
        printf("\n");
    }
}

void exibicao(dados *pessoas) {
    int i;
    for(i=0;i<3;i++) {
        printf("\n");
        printf("Nome: %s\n",pessoas[i].nome);
        printf("Endereco: %s\n",pessoas[i].end);
        printf("Cidade: %s\n",pessoas[i].cidade);
        printf("Estado: %s\n",pessoas[i].estado);
        printf("Cep: %s\n",pessoas[i].cep);
    }
}
#endif
#ifdef ex6
struct dados {
    char nome[40];
    char end[40];
    char cidade[40];
    char estado[3];
    char cep[9];
};

void recepcao(dados *pessoas);
void exibicao(dados *pessoas);
void procurar(dados *pessoas);
void alterar(dados *pessoas);
void excluir(dados *pessoas);
int checarNome(char *nome, dados *pessoas);

main() {
    int i, op;
    struct dados pessoas[3];
    do {
        printf("\nEscolha uma opcao:\n1 - Inserir dados\n2 - Exibir dados \n3 - Procurar\n4 - Alterar\n5 - Excluir\n6 - Sair.\n-->");
        scanf("%d",&op);
        getchar();
        switch(op) {
            case 1: recepcao(pessoas);
            break;
            case 2: exibicao(pessoas);
            break;
            case 3: procurar(pessoas);
            break;
            case 4: alterar(pessoas);
            break;
            case 5: excluir(pessoas);
            break;
            case 6: printf("\nEncerrando...\n");
            break;
        }
    } while(op != 6);
}

void recepcao(dados *pessoas) {
    int i;
    for(i=0; i<3; i++) {
        puts("Digite seu nome: ");
        gets(pessoas[i].nome);
        puts("Digite seu endereco: ");
        gets(pessoas[i].end);
        puts("Digite sua cidade: ");
        gets(pessoas[i].cidade);
        puts("Digite seu estado: ");
        gets(pessoas[i].estado);
        puts("Digite seu cep: ");
        gets(pessoas[i].cep);
        printf("\n");
    }
}

void exibicao(dados *pessoas) {
    int i;
    for(i=0;i<3;i++) {
        printf("\n");
        printf("Nome: %s\n",pessoas[i].nome);
        printf("Endereco: %s\n",pessoas[i].end);
        printf("Cidade: %s\n",pessoas[i].cidade);
        printf("Estado: %s\n",pessoas[i].estado);
        printf("Cep: %s\n",pessoas[i].cep);
    }
}

void procurar(dados *pessoas) {
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, pessoas);
    if(i >= 0){
        printf("\nNome: %s\nEndereco: %s\nCidade: %s\nEstado: %s\nCep: %s\n", pessoas[i].nome,pessoas[i].end,pessoas[i].cidade,pessoas[i].estado,pessoas[i].cep);
    }
}

void alterar(dados *pessoas) {
    int i;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, pessoas);
    if(i >= 0) {
        puts("Digite seu novo nome: ");
        gets(pessoas[i].nome);
        puts("Digite seu novo endereco: ");
        gets(pessoas[i].end);
        puts("Digite sua nova cidade: ");
        gets(pessoas[i].cidade);
        puts("Digite seu novo estado: ");
        gets(pessoas[i].estado);
        puts("Digite seu novo cep: ");
        gets(pessoas[i].cep);
        printf("\n");
    }
}

void excluir(dados *pessoas) {
    int i, j;
    char nome[40];
    puts("Digite o nome: ");
    gets(nome);
    i = checarNome(nome, pessoas);
    if(i >= 0) {
        strcpy(pessoas[i].nome,"");
        strcpy(pessoas[i].end,"");
        strcpy(pessoas[i].cidade,"");
        strcpy(pessoas[i].estado,"");
        strcpy(pessoas[i].cep,"");
        printf("\n\"Excluido\"\n");
    }
}

int checarNome(char *nome, dados *pessoas) {
    int i,j,c = 0;
    for(i=0; i<3; i++) {
        if(strlen(nome)==strlen(pessoas[i].nome)) {
            for(j=0; j<strlen(nome); j++) {
                if(nome[j]==pessoas[i].nome[j]) {
                    c++;
                }
            }
            if(c == strlen(pessoas[i].nome)) {
                puts("Nome encontrado!");
                return i;
            } else {
                c = 0;
            }
        }
    }
    puts("Nome nao encontrado!");
    return -1;
}

#endif
/*

/*****************************************************************************

			EXERCICIOS

*****************************************************************************
OBS.: Todos os programa devem ser finalizados pelo usuario.

1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o
    conteudo de cada um dos membros numa função e imprima-os no video no
    seguinte fomato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

2 - Escreva um programa que receba n valores via teclado, receba também a
    operação a ser executada. Quando for digitado "=" o programa deve mostrar
    o resultado acumulado dos n valores. As operações aritmeticas e a entrada
    de dados devem ser funções que recebe os valores usando ponteiros.

3 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa no
    video na funcao main(). O vetor é uma variavel local na função main().Passe
    como parametro para a funcao o vetor e a letra digitada usando ponteiros.
    (utilize o comando return)
    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y

4 - Escreva um programa que receba em 2 funcao 2 strings de ate' 10 caracteres.
    Os vetores sao declaradas como variavel local na função main().
    Escreva uma funcao que recebe as strings com parametros usando ponteiros
    e compare estas 2 strings.
    Retorne como resultado da comparacao 0 se forem DIFERENTES, 1 se forem
    IGUAIS, 2 se a string 1 for maior que a string 2, 3 se a string 2 for maior
    que a string 1 e 4 se as string tem tamanhos iguais mas são diferentes.

5 - Escreva um programa com a estrutura abaixo. Defina um vetor de estruturas
    de 4 elementos.Receba os 4 registros sequencialmente pelo teclado numa
    função e imprima todos os registros no video em outra função. Faça um menu.
    Coloque no menu a opção de sair também. Utilize o comando switch.
    (vetor de estruturas)
                nome, end, cidade, estado, cep

6 - Acrescente ao menu do exercicio anterior as funcoes de procura, altera e
    exclui um registro.
*/
