#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<wchar.h>

int main (void){
	setlocale(LC_ALL,"portuguese");	
	int num;
	wprintf(L"digite seu número: \n");
	wscanf(L"%d",&num);
	if(num >= 10 && num <= 20){
	wprintf(L"Está entre \n");
	}else {
	wprintf (L"Está fora but \n");
	}
	
	system ("pause");
	return 0;
}