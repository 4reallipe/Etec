#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade;
	wprintf(L"digite sua idade: \n");
	wscanf(L"%d",&idade);
	if(idade >= 18){
	wprintf(L"Pode tirar carteira \n");
	}else{
	wprintf (L"Não pode tirar carteira  \n");
	}
	
	system ("pause");
	return 0;
}