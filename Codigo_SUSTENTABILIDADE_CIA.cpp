#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <string.h>

int main(){
setlocale(LC_ALL, "Portuguese");  
char nome[100][30], end [100] [30],CNPJ[100][30],num[100][30];
int i = 1;
int quant;	
int opc;
		
	
	printf("Quantos Agendamentos desejam fazer?\n");
	scanf("%d",&quant);
	
	for(i=0; i<quant; i++){
		printf("Digite o nome da Empresa:\n");
		fflush(stdin);
		scanf("%s",&nome[i]);
		printf("Digite o CNPJ da Empresa:\n");
		fflush(stdin);
		scanf("%d",&CNPJ[i]);
		printf("Digite o Telefone da Empresa:\n");
		fflush(stdin);
		scanf("%d",&num[i]);
		printf("Digite o endereço da Empresa:\n");
		fflush(stdin);
		scanf("%s",&end[i]);
		printf("_______________________________________\n");
		
	}
	for(i=0; i<quant; i++){
	printf("Nome Empresa:%s\n",nome[i]);
	printf("CNPJ da Empresa:%s\n",CNPJ[i]);
	printf("Telefone da Empresa:%s\n",num[i]);
	printf("Endereço da Empresa:%s\n",end[i]);
	printf("CADASTRO FEITO COM SUCESSO!\n");
	printf("_______________________________________\n");
	}
	do{
	printf("1 - Visualizar Dados \n");
	printf("2 - Modificar Dados \n");
	printf("3 - Excluir Dados \n");
	printf("4 - Sair\n");
	printf("escolha uma das opcoes\n");
	

	scanf("%d",&opc);
	
switch(opc){
	case 1:
	
	printf("\tVISUALIZAR DADOS DO CLIENTE.\n\n");
	printf("Nome Empresa:%s\n",nome);
	printf("CNPJ da Empresa:%s\n",CNPJ);
	printf("Telefone da Empresa%s:\n",num);
	printf("Endereço da Empresa:%s\n",end);
		
		break;
	case 2:
	int modific;
	printf("Nome Empresa:%s\n",nome);
	printf("CNPJ da Empresa:%s\n",CNPJ);
	printf("Telefone da Empresa:%s\n",num);
	printf("Endereço da Empresa:%s\n",end);
	printf("_______________________________________\n");
	printf("\tMODIFICAR DADOS DO CLIENTE.\n");
	printf("\t1. Modificar o Nome.\n");
	printf("\t2. Modificar o CNPJ.\n");
	printf("\t3. Modificar o Telefone.\n");
	printf("\t4. Modificar o Endereço.\n");
	printf("\t5. Modificar todos os Dados.\n");
	scanf("%d",&modific);
	if(modific == 1){
		printf("Modifificar Nome: \n");
		scanf("%s",&nome);
	}
	else if(modific == 2){
		printf("Modifificar CNPJ: \n");
		scanf("%s",&CNPJ);
	}
	else if(modific == 3){
		printf("Modifificar Telefone: \n");
		scanf("%s",&num);
	}
	else if(modific == 4){
		printf("Modifificar endereço: \n");
		scanf("%s",&end);
	}else if(modific == 5){
		printf("Modifificar Nome: \n");
		scanf("%s",&nome);
		printf("Modifificar CNPJ: \n");
		scanf("%s",&CNPJ);
		printf("Modifificar Telefone: \n");
		scanf("%s",&num);
		printf("Modifificar endereço: \n");
		scanf("%s",&end);	
	}
		break;
		
	case 3:
		
	int excluir;
	printf("Nome Empresa:%s\n",nome);
	printf("CNPJ da Empresa:%s\n",CNPJ);
	printf("Telefone da Empresa:%s\n",num);
	printf("Endereço da Empresa:%s\n",end);
	printf("\tEXCLUSAO DOS DADOS DO CLIENTE.\n");
	printf("\t1 - EXCLUIR ... \n\t2 NAO EXCLUIR...");
	scanf("%d",&excluir);
	if(excluir == 1){
		memset(nome,0,sizeof(nome));
		memset(CNPJ,0,sizeof(CNPJ));
		memset(num,0,sizeof(num));
		memset(end,0,sizeof(end));
		printf("TODOS OS DADOS EXCLUIDOS.\n");
	}
	else{
		printf("DADOS NÃO EXCLUIDOS.\n");
	}		
	break;
	
	case 4:
		printf("ate mais\n");
		break;
		
		default:
				printf(" opçao invalida\n");
				break;
				
}
	
}while(opc != 4);


return 0;
}
	
