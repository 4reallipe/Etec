#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade,alt;
	
	wprintf(L"Digite sua idade: \n");
	wscanf(L"%d",&idade);
	wprintf(L"Digite sua altura em cm: \n");
	wscanf(L"%d",&alt);
	if(idade >= 12 && alt >= 140){
	wprintf(L"Pode entrar \n");
	}else {
	wprintf (L"Cresce but \n");
	}
	
	system ("pause");
	return 0;
}