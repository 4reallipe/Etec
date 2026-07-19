#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade;
	wprintf(L"digite sua idade: \n");
	wscanf(L"%d",&idade);
	if(idade >= 18 && idade <= 60){
	wprintf(L"Está entre as idades \n");
	}else{
	wprintf (L"Não está entre as idades \n");
	}
	
	system ("pause");
	return 0;
}