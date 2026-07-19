#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int idade;
	wprintf(L"digite sua idade: \n");
	wscanf(L"%d",&idade);
	if(idade >= 18 && idade <= 70){
	wprintf(L"Voto Obrigatório \n");
	}else if (idade>=16 && idade<18 || idade>70){
	wprintf (L"Voto Opcional \n");
	} else {
		wprintf(L"Não pode votar \n");
	}
	
	system ("pause");
	return 0;
}