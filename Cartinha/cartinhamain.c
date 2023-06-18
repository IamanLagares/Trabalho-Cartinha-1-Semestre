//C�digo feito para o projeto da mat�ria de Projeto Interdisciplinar, que tem como fim auxiliar o usuario a cadastrar crian�as no sistema, visto que, 
//� presente o problema de organiza��o ao guardar os cadastros, pois n�o existe um padr�o correto para sanar o problema. 
//Com isso, o algoritmo foi criado com o intuito de automatizar o processo de matriculas, criando um padr�o, facilitando assim o trabalho do usu�rio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {
	
	setlocale(LC_ALL,"");
	
	int datan,opcao;
	char nomeresp[50],cpfresp[50],cidade[80],rua[50],numrua[50],nome[50],cpf[50],letters[10];
	
		printf("---------- BEM VINDO AO SISTEMA DE CARTINHAS ----------\n"); 
		
		printf("---------- DADOS DO RESPONS�VEL ----------\n");  /*Cadastro do respons�vel*/
			
			printf("Informe o nome: ");
			scanf(" %[^\n]s",&nomeresp);
		
			printf("Informe o CPF: ");
			scanf("%s",&cpfresp);
		
			printf("Informe a cidade: ");
			scanf(" %[^\n]s",&cidade);
			
			printf("Informe a rua: ");
			scanf(" %[^\n]s",&rua);
			
			printf("Informe o n�mero: ");
			scanf(" %[^\n]s",&numrua);
		
				system ("cls");
			
		printf("---------- DADOS DA CRIAN�A ----------\n"); /*Cadastro da Crian�a*/
		
			printf("Informe o nome da crian�a: ");
			scanf(" %[^\n]s",&nome);
			
			printf("Informe o CPF: ");
			scanf("%s",&cpf);
			
			printf("Informe a data de nascimento de forma simples ex:DDMMAA: ");
			scanf("%d",&datan);
		
				system ("cls");
			
		printf("---------- GERAR MATRICULA ----------\n"); /*Processo para criar a matricula e finalizar cadastro*/
		
			printf("Insira a primeira letra de cada nome da crian�a, de forma maiuscula: ");
			fflush(stdin);
			scanf("%s",&letters);	
			
			printf("-\n");
			printf("-\n");
			printf("-\n");
			printf("-\n");
			
			printf("DIGITE 1 PARA CONTINUAR A OPERA��O E 2 PARA VOLTAR AO CADASTRO ");
			fflush(stdin);
			scanf("%d",&opcao);				
				
				system ("cls");
				
			switch (opcao){
				case 1:
					printf("CADASTRO REALIZADO COM SUCESSO!\n");
					printf("---------- DADOS DO RESPONS�VEL ----------\n");
						printf("%s\n",nomeresp);
						printf("%s\n",cpfresp);
						printf("%s %s %s\n",cidade,rua,numrua);
					printf("------------------------------\n");
						printf("----------- DADOS DA CRIAN�A ----------\n");
						printf("%s\n",nome);
						printf("%d\n",datan);
						printf("%s\n",cpf);
					printf("------------------------------\n");
						printf("MATRICULA DA CRIAN�A : #%s%d\n",letters,datan);
						break;
				case 2:
					return main();
					break;
				default:
					printf("OP��O INV�LIDA\n");
					break;
						
					}
	
		return 0;
}
