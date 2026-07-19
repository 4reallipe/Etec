#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade;
	
	wprintf(L"Digite sua idade: \n");
	wscanf(L"%d",&idade);
	
	if(idade < 12 || idade >= 60){
		wprintf(L"ganhou desconto \n");
	}else {
		wprintf (L"Sem desconto \n");
	}
	
	system ("pause");
	return 0;
}