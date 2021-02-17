
#include <stdio.h>//pidcl bibliotek
#include <locale.h>
#include <math.h>

//ogoloshenya
int main() {  
	int a, b, c; //ogoloshenya zminoii
	int V; int S;
	setlocale(LC_CTYPE, "ru");//pereklyuchaemo keruluccu ale rozumiu sho git mene ne poyme, pushu transkripceu
	printf("Vedit chuslo a:   \n");//vuvedennia textu na ekran
	scanf_s("%d", &a);//vedenia zminoi a
	printf("Vedit chuslo b:   \n");//vuvedennia textu na ekran
	scanf_s("%d", &b);//vedenya zminoi d
	printf("Vedit chusloo  c:   \n");//vuvedennia textu na ekran
	scanf_s("%d", &c);//vedenya zminoi c
	V = a * b * c; //ob'em paralelepipeda
	S = (a * b + b * c + a * c) * 2;//Ploscha paralelepipeda
	printf("\t V \t S\n");//vuvedennia textu na ekran
	printf("\t %d \t %d\n", V, S);//vuvedennia textu na ekran


	 return 0;//vuhid iz programu
}