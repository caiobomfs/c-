#define ex1
#include "stdio.h"
#include "stdlib.h"


#ifdef ex1
main()
{
    FILE *p;
    char a;
    int contagem = 0;


    if((p = fopen("arq.txt","w"))==NULL)
    {
        printf("erro na abertura do arquivo");
        exit(0);

    }
    while(a!='0')
    {
        putc(a,p);
        scanf("%c",&a);
        contagem++;
    }
    fclose(p);

    if((p = fopen("arq.txt","r"))==NULL)
    {
        printf("erro na abertura do arquivo");
        exit(0);
    }

    //a = getc(p);
    for(int i = 0;i<contagem;i++)
    {
        putchar(getc(p));
    }
    fclose(p);

}

#endif

#ifdef ex2
int nreg;
FILE *p;
struct data{
char nome[10];
char telefone[9];
char aniversario[6];
};
struct data registro;
void aniversariantes();
void catalogo();
void lerregatual();
void pesquisa();
void add1total();
void inserir();
void remover();
void listartodos();


main()
{


    lerregatual();

    //printf("%d",nreg);
    //getchar();

	//nreg = fread()
    int option = -1;
    printf("Bem vindo a Agenda de contatos!!!\n");
    printf("escolha a opção desejada\n\n");


    while(option !=7)
    {
        printf("\n1 - inserir contato.\n2 - remover contato.\n3 - pesquisar um contato pelo nome.\n4 - listar todos os contatos.\n5 - listar os contatos cujo nome inicia com uma dada letra.\n6 - imprimir os aniversariantes do mês.\n7 - sair.\n\n");
        scanf("%d",&option);
        switch (option)
        {
            case 1:
            {
                inserir();

                break;
            }
            case 2:
            {
                remover();
                break;
            }
            case 3:
            {
                pesquisa();
                break;
            }
            case 4:
            {
                listartodos();

                break;
            }
            case 5:
            {
                catalogo();
                break;
            }
            case 6:
            {
                aniversariantes();
                break;
            }
            case 7:
            {
                break;
                break;
            }
            default:
            {
                printf("Opcao invalida");
                break;
            }
        }
    }
}

void aniversariantes()
{
    lerregatual();
    char encontrar[3],*ppesquisa,refer[3],*rf;
    int k;
    int encontrado=0;
    printf("Escreva o mes para receber os aniversariantes de 1 a 12 \n");
    gets(encontrar);
    gets(encontrar);
    ppesquisa = &encontrar;
    if((p = fopen("agenda.txt","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}

    //encontrar;
    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);
    //printf("k = %d\n",k);


	printf("\n");
    fread(&registro,sizeof(registro),1,p);


    refer[0] = registro.aniversario[3];
    refer[1] = registro.aniversario[4];
    rf = &refer;
    //printf(" %c eh igual a %c ? \n",encontrar,refer);
    if(*ppesquisa==*rf)
    {

        printf("registro %d \n",i+1);
        //printf("registro numero %d\n\n",i+1);
        printf("nome: %s\n",registro.nome);
        printf("telefone %s\n",registro.telefone);
        printf("aniversario %s\n",registro.aniversario);
        encontrado=1;
    }
    }
    fclose(p);
    if(encontrado==0)
    {
        printf("nao ha aniversariantes com o mes escolhido \n");
    }
}

void catalogo()
{
    lerregatual();
    char encontrar,refer;
    int k;
    int encontrado=0;
    printf("Escreva a letra do catalogo  em maiusculo\n");
    scanf("%c",&encontrar);
    scanf("%c",&encontrar);
    if((p = fopen("agenda.txt","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}

    //encontrar;
    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);
    //printf("k = %d\n",k);


	printf("\n");
    fread(&registro,sizeof(registro),1,p);


    refer = registro.nome[0];

    //printf(" %c eh igual a %c ? \n",encontrar,refer);
    if(encontrar==refer)
    {

        printf("registro %d \n",i+1);
        //printf("registro numero %d\n\n",i+1);
        printf("nome: %s\n",registro.nome);
        printf("telefone %s\n",registro.telefone);
        printf("aniversario %s\n",registro.aniversario);
        encontrado=1;
    }
    }
    fclose(p);
    if(encontrado==0)
    {
        printf("nao ha registros com essa letra inicial \n");
    }

}

void pesquisa()
{
    lerregatual();
    char encontrar[10],*ppesquisa,*refer;
    int k;
    int encontrado=0;

    if((p = fopen("agenda.txt","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}
    printf("Escreva o nome para Encontrar\n");
    gets(encontrar);
    gets(encontrar);
    ppesquisa = &encontrar;
    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);
    //printf("k = %d\n",k);


	printf("\n");
    fread(&registro,sizeof(registro),1,p);


    refer = &registro.nome;

    //printf(" %s eh igual a %s ? \n",ppesquisa,registro.nome);
    if(*ppesquisa==*refer)
    {

        printf("nome encontrado no registro %d \n",i+1);
        //printf("registro numero %d\n\n",i+1);
        printf("nome: %s\n",registro.nome);
        printf("telefone %s\n",registro.telefone);
        printf("aniversario %s\n",registro.aniversario);
        encontrado=1;
    }
    }
    fclose(p);
    if(encontrado==0)
    {
        printf("nome nao encontrado no registro \n");
    }

}
void lerregatual()
{
    FILE *pn;
    if((pn = fopen("registros.txt","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}
	fscanf(pn,"%d ",&nreg);

    fclose(pn);
}

void add1total()
{
    FILE *pn;
    if((pn = fopen("registros.txt","w"))==NULL)
	{
	printf("arquivo origem ja criado \n");

	}
	fprintf(pn,"%d ",nreg+=1);

    fclose(pn);
}

void inserir()
{
    lerregatual();
    if((p = fopen("agenda.txt","a"))==NULL)
	{
	printf("erro na abertura do arquivo \n");
	exit(0);
	}
	printf("\nEscreva o novo registro numero %d \n",nreg+1);
	printf("Nome ");
	gets(registro.nome);
	gets(registro.nome);
	printf("Telefone ");
	gets(registro.telefone);
	printf("Aniversario 00/00 ");
	gets(registro.aniversario);

	fwrite(&registro,sizeof(registro),1,p);

	fclose(p);
	add1total();

}

void remover()
{
    if(nreg==0)
    {
        printf("Nao ha registros para remover");

    }
    else
    {
        int nremove=-1;
        char del = '\0';
        if((p = fopen("agenda.txt","r+"))==NULL)
        {
        printf("erro na abertura do arquivo \n");
        exit(0);
        }

        while(nremove<0||nremove>nreg)
        {
        printf("qual registro deseja remover? escolha entre 1 e %d \naperte 0 para cancelar\n",nreg);
        scanf("%d",&nremove);
        }
        if(nremove>0)
        {


            fseek(p,(nremove-1)*sizeof(registro),0);


            for(int i = 0;i<25;i++)
            {
                putc(del,p);
            }

        }

    }


	fclose(p);
}
void listartodos()
{



    lerregatual();
    int k=0;
    if((p = fopen("agenda.txt","r"))==NULL)
	{
	printf("erro na abertura do arquivo \n");
	exit(0);
	}

    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);



	printf(" \n\n");
    fread(&registro,sizeof(registro),1,p);

    printf("registro numero %d\n\n",i+1);
    printf("nome: %s\n",registro.nome);
    printf("telefone %s\n",registro.telefone);
    printf("aniversario %s\n",registro.aniversario);
    }
    fclose(p);


}
#endif


#ifdef ex3
int nreg;
FILE *p;
struct data{
int cd;
char desc[30];
char qtd[20];
};
struct data registro;
void aniversariantes();
//void catalogo();
void lerregatual();
void pesquisa();
void add1total();
void inserir();
void remover();
void listartodos();


main()
{


    lerregatual();
    printf("registro atual %d ",nreg);

    int option = -1;
    printf("armazem do marcao \n");
    printf("escolha a opção desejada\n\n");


    while(option !=7)
    {
        printf("\n1 - entrada de produtos.\n2 - retirada de produtos.\n3 - pesquisar uma mercadoria pela descrição.\n4 - listar todos os produtos.\n5 - listar os produtos não disponíveis.\n7 - sair.\n\n");
        scanf("%d",&option);
        switch (option)
        {
            case 1:
            {
                inserir();

                break;
            }
            case 2:
            {
                remover();
                break;
            }
            case 3:
            {
                pesquisa();
                break;
            }
            case 4:
            {
                listartodos();

                break;
            }
            case 5:
            {
                aniversariantes();
                break;
            }
            case 6:
            {
                break;
                break;
            }
            default:
            {
                printf("Opcao invalida");
                break;
            }
        }
    }
}


void aniversariantes()
{
    lerregatual();
    char encontrar,*ppesquisa,refer,*rf;
    int k;
    int encontrado=0;
    encontrar='0';
    ppesquisa = &encontrar;
    if((p = fopen("produtos","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}

    //encontrar;
    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);
    //printf("k = %d\n",k);


	printf("\n");
    fread(&registro,sizeof(registro),1,p);


    refer = registro.qtd[0];
    rf = &refer;
    if(i==0)
    {
    printf(" registros indisponiveis  \n");
    }
    if(encontrar==refer)
    {

        //printf("registros %d \n",i+1);
        //printf("registro numero %d\n\n",i+1);
        printf("registro %d\n",registro.cd);
        printf("descricao %s\n",registro.desc);
        printf("quantidade %s\n",registro.qtd);
        encontrado=1;
    }
    }
    fclose(p);
    if(encontrado==0)
    {
        printf("nao foram encontrados registros vazios \n");
    }
}



void pesquisa()
{
    lerregatual();
    char encontrar[10],*ppesquisa,*refer;
    int k;
    int encontrado=0;

    if((p = fopen("produtos","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}
    printf("Escreva o nome para Encontrar\n");
    gets(encontrar);
    gets(encontrar);
    ppesquisa = &encontrar;
    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);
    //printf("k = %d\n",k);


	printf("\n");
    fread(&registro,sizeof(registro),1,p);


    refer = &registro.desc;

    //printf(" %s eh igual a %s ? \n",ppesquisa,registro.nome);
    if(*ppesquisa==*refer)
    {

        printf("descricao encontrada no registro %d \n",i+1);
        //printf("registro numero %d\n\n",i+1);
        printf("codigo %d\n",registro.cd);
        printf("descricao %s\n",registro.desc);
        printf("quantidade %s\n",registro.qtd);
        encontrado=1;
    }
    }
    fclose(p);
    if(encontrado==0)
    {
        printf("nome nao foi encontrado no registro \n");
    }

}



void remover()
{
    int removido=0;
    if(nreg==0)
    {
        printf("Nao ha produtos para remover");

    }
    else
    {
        int nremove=-1;
        char del = '\0';
        if((p = fopen("produtos","r+"))==NULL)
        {
        printf("erro na abertura do arquivo \n");
        exit(0);
        }

        while(nremove<0||nremove>nreg)
        {
        printf("qual registro deseja remover? escolha entre 1 e %d \naperte 0 para cancelar\n",nreg);
        scanf("%d",&nremove);
        }
        if(nremove>0)
        {
            //printf("numero para apagar %d ",(nremove-1)*sizeof(registro));

            //printf("size of registro é  %d",sizeof(registro)-sizeof(int));
            fseek(p,((nremove-1)*sizeof(registro)+(sizeof(registro)-22)),0);

            putc('0',p);
            for(int i = 0;i<19;i++)
            {
            putc('\0',p);
            }

        }

    }


	fclose(p);
}



void listartodos()
{
    lerregatual();
    int k=0;
    if((p = fopen("produtos","r"))==NULL)
	{
	printf("erro na abertura do arquivo \n");
	exit(0);
	}

    for(int i=0;i<nreg;i++)
    {
    k = i*sizeof(registro);
    fseek(p,k,0);
    //printf("k = %d\n",k);


	printf(" \n\n");
    fread(&registro,sizeof(registro),1,p);

    //printf("registro numero %d\n\n",i+1);
    printf("codigo %d\n",registro.cd);
    printf("descric %s\n",registro.desc);
    printf("quantidade %s\n",registro.qtd);
    }
    fclose(p);
}


void add1total()
{
    FILE *pn;
    if((pn = fopen("regprodutos","w"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}
	fprintf(pn,"%d ",nreg+=1);

    fclose(pn);
}

void lerregatual()
{
    FILE *pn;
    if((pn = fopen("regprodutos","r"))==NULL)
	{
	printf("arquivo origem ja criado \n");
	//exit(0);
	}
	fscanf(pn,"%d ",&nreg);

    fclose(pn);
}


void inserir()
{
    lerregatual();
    if((p = fopen("produtos","a"))==NULL)
	{
	printf("erro na abertura do arquivo \n");
	exit(0);
	}
    registro.cd=nreg+1;
    printf("registro.cd %d ",registro.cd);
	printf("coloque a descricao do produto ");
	gets(registro.desc);
	gets(registro.desc);
	printf("coloque a quantidade ");
	gets(registro.qtd);
	fwrite(&registro,sizeof(registro),1,p);

	fclose(p);
	add1total();

}

#endif

#ifdef ex4
int exponet(int x ,int y)
{
    int n;
    n = x;
    for(int i=1;i<y;i++)
    {
        n*=x;
    }
    return(n);
}

struct data
{
    int x;
    int y;
};
struct data exp;

main()
{
    FILE *p;
    printf("escreva o primeiro numero ");
    scanf("%d",&exp.x);
    printf("escreva exponencial ");
    scanf("%d",&exp.y);

    if((p = fopen("expo","w"))==NULL)
    {
        printf("erro na abertura do arquivo");
        exit(0);

    }
    fwrite(&exp,sizeof(exp),1,p);
    fclose(p);


    if((p = fopen("expo","r"))==NULL)
    {
        printf("erro na abertura do arquivo");
        exit(0);

    }

    fread(&exp,sizeof(exp),1,p);


    printf(" o exponencial deu %d",exponet(exp.x,exp.y));
    printf("\naperte enter para finalizar");
    getchar();

}
#endif


/*****************************************************************************

			EXERCICIOS

*****************************************************************************

4 - A partir do exercico 7 do capitulo de funcoes, retire o vetor de estrutura e
    passe a escrever e ler os registros direto no arquivo. (utilize a funcao fseek).
*/

