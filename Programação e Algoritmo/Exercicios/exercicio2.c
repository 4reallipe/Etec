#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade,aut;
	
	wprintf(L"Digite sua idade: \n");
	wscanf(L"%d",&idade);
	
	if(idade >= 16){
	wprintf(L"Pode viajar \n");
	}else {
		wprintf(L"Possui autorização dos responsáveis? 1 para sim, 2 para não \n");
		wscanf(L"%d",&aut);
		if (aut == 1){
			wprintf (L"Pode viajar \n");
		} else{
			wprintf (L"não pode viajar \n");
		}
	}
	
	system ("pause");
	return 0;
}