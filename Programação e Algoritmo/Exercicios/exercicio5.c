#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int nota;
	wprintf(L"digite sua nota: \n");
	wscanf(L"%d",&nota);
	if(nota >= 0 && nota <= 10){
	wprintf(L"Está entre \n");
	}else{
	wprintf (L"Não está entre \n");
	}
	
	system ("pause");
	return 0;
}