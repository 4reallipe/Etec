#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>
int main (void){
	setlocale(LC_ALL,"portuguese");	
	int num;
	wprintf(L"digite seu número: \n");
	wscanf(L"%d",&num);
	if(num == 5 || num == 10){
	wprintf(L"Igual \n");
	}else {
	wprintf (L"Diferente \n");
	}
	
	system ("pause");
	return 0;
}