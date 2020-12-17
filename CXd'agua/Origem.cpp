
#include<stdlib.h>//Biblioteca
#include<stdio.h>//Biblioteca
#include<locale.h>//Biblioteca

int opcao = -1;//Variavel
float CX;//Quantidade de agua na caixa-Variavel
float Mes[12]{ 0,0,0,0,0,0,0,0,0,0,0,0 };//Meses-Variavel
float Gast[12]{ 0,0,0,0,0,0,0,0,0,0,0,0 }; // Quantidade gasta-Variavel
float Chuva[12];//Quantidade de chuva-Variavel
int M = 1;//Variavel

int main()//Começo do algoritmo
{
	setlocale(LC_ALL, "Portuguese");//Para usar acentos e caracteres




	printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente mais bonito
	printf("\t\t\t\t\t\tContagem do Reservatório\n");//Título
	printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente mais bonito
	printf("\t\t\t\t     Digite o tamanho em mm de seu reservatório: ");
	scanf_s("%f", &CX);//Guarda o tamanho em mm do reservatorio
	printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente mais bonito
	
	while (opcao != 0) //Laço de repetição
	{
		system("cls");//
		printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente mais bonito
		printf("\t\t\t\t\t\tContagem do Reservatório\n");//Título
		printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente
		printf("\t\t\t\t\t   Capacidade do reservatório de %.0f\n", CX);//Mostra para o usuario a capacidade antes definida por ele em mm do reservatorio
		printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente mais bonito
		printf("preencha com as informaçoes necessarias as questoes abaixo selecionando os meses de 1 á 12, e 0 para ver a tabela com as suas respectivas entradas e saidas. \n\n");//Opçoes 
		printf("_______________________________________________________________________________________________________________________\n\n");// Apenas para deixar visivelmente mais bonito
		scanf_s("%d", &opcao);//Guarda opçao
		

			switch (opcao)//Estrutura de seleçao
			{
			case 0:
				if (Mes[0] >= 0)//Condição
				{
					printf("\t\t\t|  Janeiro  | %.2f mm |\n", Gast[0]);//Tabela
				}
				if (Mes[1] >= 0)//Condição
				{
					printf("\t\t\t| Fevereiro | %.2f mm |\n", Gast[1]);//Tabela
				}
				if (Mes[2] >= 0)//Condição
				{
					printf("\t\t\t|   Março   | %.2f mm |\n", Gast[2]);//Tabela
				}
				if (Mes[3] >= 0)//Condição
				{
					printf("\t\t\t|   Abril   | %.2f mm |\n", Gast[3]);//Tabela
				}
				if (Mes[4] >= 0)//Condição
				{
					printf("\t\t\t|    Maio   | %.2f mm |\n", Gast[4]);//Tabela
				}
				if (Mes[5] >= 0)//Condição
				{
					printf("\t\t\t|   Junho   | %.2f mm |\n", Gast[5]);//Tabela
				}
				if (Mes[6] >= 0)//Condição
				{
					printf("\t\t\t|   Julho   | %.2f mm |\n", Gast[6]);//Tabela
				}
				if (Mes[7] >= 0)//Condição
				{
					printf("\t\t\t|  Agosto   | %.2f mm |\n", Gast[7]);//Tabela
				}
				if (Mes[8] >= 0)//Condição
				{
					printf("\t\t\t| Setembro  | %.2f mm |\n", Gast[8]);//Tabela
				}
				if (Mes[9] >= 0)//Condição
				{
					printf("\t\t\t|  Outubro  | %.2f mm |\n", Gast[9]);//Tabela
				}
				if (Mes[10] >= 0)//Condição
				{
					printf("\t\t\t| Novembro  | %.2f mm |\n", Gast[10]);//Tabela
				}
				if (Mes[11] >= 0)//Condição
				{
					printf("\t\t\t|  Dezembro | %.2f mm |\n", Gast[11]);//Tabela
				}
				system("pause");//pausa a case 
				break;//para a case

			case 1:
				printf("JANEIRO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", CX); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[0]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[0]);//Guarda quantidade gasta
				Mes[0] = CX + Chuva[0] - Gast[0];//Calculo mensal do reservatorio
				if (Mes[0] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[0] = 0;//Limite minimo
				}
				if (Mes[0] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[0] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[0]); //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 2:
				printf("FEVEREIRO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[0]);//Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[1]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[1]);//Guarda quantidade gasta
				Mes[1] = Mes[0] + Chuva[1] - Gast[1];//Calculo mensal do reservatorio
				if (Mes[1] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[1] = 0;//Limite minimo
				}
				if (Mes[1] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[1] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[1]);   //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 3:
				printf("MARÇO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[1]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[2]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[2]);//Guarda quantidade gasta
				Mes[2] = Mes[1] + Chuva[2] - Gast[2];//Calculo mensal do reservatorio
				if (Mes[2] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[2] = 0;//Limite minimo
				}
				if (Mes[2] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[2] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[2]); //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 4:
				printf("ABRIL\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[2]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[3]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[3]);//Guarda quantidade gasta
				Mes[3] = Mes[2] + Chuva[3] - Gast[3];//Calculo mensal do reservatorio
				if (Mes[3] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[3] = 0;//Limite minimo
				}
				if (Mes[3] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[3] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[3]);  //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 5:
				printf("MAIO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[3]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[4]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[4]);//Guarda quantidade gasta
				Mes[4] = Mes[3] + Chuva[4] - Gast[4];//Calculo mensal do reservatorio
				if (Mes[4] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[4] = 0;//Limite minimo
				}
				if (Mes[4] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[4] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[4]); //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 6:
				printf("JUNHO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[4]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[5]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[5]);//Guarda quantidade gasta
				Mes[5] = Mes[4] + Chuva[5] - Gast[5];//Calculo mensal do reservatorio
				if (Mes[5] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[5] = 0;//Limite minimo
				}
				if (Mes[5] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[5] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[5]);   //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 7:
				printf("JULHO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[5]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[6]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[6]);//Guarda quantidade gasta
				Mes[6] = Mes[5] + Chuva[6] - Gast[6];//Calculo mensal do reservatorio
				if (Mes[6] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[6] = 0;//Limite minimo
				}
				if (Mes[6] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[6] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[6]);  //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 8:
				printf("AGOSTO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[6]);//Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[7]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[7]);//Guarda quantidade gasta
				Mes[7] = Mes[6] + Chuva[7] - Gast[7];//Calculo mensal do reservatorio
				if (Mes[7] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[7] = 0;//Limite minimo
				}
				if (Mes[7] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[7] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[7]); //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte 
				system("pause");//pausa a case 
				break;//para a case

			case 9:
				printf("SETEMBRO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[7]);//Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[8]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[8]);//Guarda quantidade gasta
				Mes[8] = Mes[7] + Chuva[8] - Gast[8];//Calculo mensal do reservatorio
				if (Mes[8] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[8] = 0;//Limite minimo
				}
				if (Mes[8] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[8] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[8]);   //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 10:
				printf("OUTUBRO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[8]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[9]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[9]);//Guarda quantidade gasta
				Mes[9] = Mes[8] + Chuva[9] - Gast[9];//Calculo mensal do reservatorio
				if (Mes[9] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[9] = 0;//Limite minimo
				}
				if (Mes[9] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[9] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[9]);   //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case

			case 11:
				printf("NOVEMBRO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[9]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[10]);//Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[10]);//Guarda quantidade gasta
				Mes[10] = Mes[9] + Chuva[10] - Gast[10];//Calculo mensal do reservatorio
				if (Mes[10] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[10] = 0;//Limite minimo
				}
				if (Mes[10] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[10] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n\n", Mes[10]); //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case



			case 12:
				printf("DEZEMBRO\n");//Mes
				printf("Caixa d'água com %.2f mm de água \n", Mes[10]); //Quantidade atual de água no reservatorio no mes
				printf("Quantidade de chuva em mm: \n");//Quantidade de chuva do mes
				scanf_s("%f", &Chuva[11]); //Guarda a quantidade de chuva
				printf("Quantidade gasta de água no mes: \n");//Usuario diz quanto gastou
				scanf_s("%f", &Gast[11]);//Guarda quantidade gasta
				Mes[11] = Mes[10] + Chuva[11] - Gast[11];//Calculo mensal do reservatorio
				if (Mes[11] <= 0)//Condição
				{
					printf("A caixa d'água esta vazia!\n");//Mensagem para o usuario 
					Mes[11] = 0;//Limite minimo
				}
				if (Mes[11] >= CX)//Condição
				{
					printf("A caixa d'água esta cheia!\n");//Mensagem para o usuario 
					Mes[11] = CX;//Limite maximo
				}
				printf("Caixa d'água com %.2f mm!\n", Mes[11]); //Resultado da quantidade de agua no reservatorio em mm no mes-valor inicial do reservatorio pro mes seguinte
				system("pause");//pausa a case 
				break;//para a case
			}
	}
	system("pause");//pausa o programa
	return 0; //Fim do programa
}