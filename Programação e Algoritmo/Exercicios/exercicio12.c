#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int senha;
	
	wprintf(L"Digite sua pin: \n");
	wscanf(L"%d",&senha);
	
	if(senha == 1234){
		wprintf(L"Bem vindo! \n");
	}else{
		wprintf (L"Senha incorreta otario \n");
	}
	
	system ("pause");
	return 0;
}