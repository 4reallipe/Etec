#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int nota;
	
	wprintf(L"Digite sua nota: \n");
	wscanf(L"%d",&nota);
	
	if(nota >= 7){
		wprintf(L"Passou de ano bb \n");
	}else {
		wprintf (L"Reprovado but \n");
	}
	
	system ("pause");
	return 0;
}