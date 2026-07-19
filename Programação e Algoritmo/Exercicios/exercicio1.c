#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	wprintf(L"Digite sua idade: \n");
	wscanf(L"%d", &idade);
	
	system("cls");
	
	if(idade>=18){
		wprintf(L"Maior de idade. \n");
	} else{
		wprintf(L"Menor de idade. \n");
	}
	
	system("pause");
	return 0;
}
