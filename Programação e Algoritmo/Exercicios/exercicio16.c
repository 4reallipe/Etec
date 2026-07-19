#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade;
	wprintf(L"digite sua idade: \n");
	wscanf(L"%d",&idade);
	if(idade >= 16){
	wprintf(L"Pode entrar \n");
	}else {
	wprintf (L"Cresce but kkkkkk \n");
	}
	
	system ("pause");
	return 0;
}