#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>
#include<wls>

int main(void){
	
	char produto[30];
	int qtde;
	float valor, total, desconto;
	
	setlocale(LC_ALL,"Portuguese");
	wprintf(L"SISTEMA DE GESTÃO \n");
	wprintf(L"Digite o nome do Produto\n");
	wscanf(L"%S",produto); // Serve como 'leia', precisa definir oq ele vai receber 
	
	wprintf(L"Digite a Quantidade: \n ");
	wscanf(L"%d",&qtde); // Precisa  do & para ler números
	
	wprintf(L"Digite o preço: \n "); // %s texto, %d int, %f decimal
	wscanf(L"%f",&valor);
	
	wprintf(L"Digite o desconto: \n ");
	wscanf(L"%f",&desconto);
	
	system("cls");
	total = (qtde * valor) * desconto;
	
	wprintf(L"SISTEMA DE GESTÃO \n");
	wprintf(L"Produto: %S \n",produto);
	wprintf(L"Quantidade: %d \n",qtde);
	wprintf(L"Desconto: %f \n",desconto);
	wprintf(L"Total à pagar: %.2f \n",total);
	if(total >= 200){
		wprinf(L"Desconto de 5 %%");
	}else{
		wprinf(L"Desconto de 10 %%");
	}
	
	system("pause");
	return 0;
}