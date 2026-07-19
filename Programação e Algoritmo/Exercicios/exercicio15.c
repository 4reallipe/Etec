#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int val;
	
	wprintf(L"Digite o valor da sua compra: ");
	wscanf(L"%d", &val);
	
	system("cls");
	
	if(val>=100){
		wprintf(L"Valor Total da Compra: %d R$ \n", val);
		wprintf(L"Ganhou brinde! \n");
	} else{
		wprintf(L"Valor Total da Compra: %d R$ \n", val);
		wprintf(L"Sem brinde. \n");
	}
	
	system("pause");
	return 0;
}
