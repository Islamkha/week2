#include <stdio.h>

int main ()
{
	int i;
	int a;
	int b;
	int c;
	int somma;
	char name[20];
	printf(" IT QUIZ\n");
	printf(" 1. Inizia il gioco \b\n 0. Esci\n");
	scanf("%d",&i); //fare l'utente scegliere 
	switch (i) 
	{
		case 1:
		printf(" Inserisce Il Nome\n");
		scanf("%c", &name); // l'utente dovrebbe scrivere il nome ***non risulta***
		printf(" *Benvenuto*\n",name);
		printf(" Scegli la risposta corretta\n");
		printf(" A-Quanti bit in ogni byte ?\n");
		printf(" 1. 8 bit \n\b 2. 32 bit \n\b 3. 256 bit\n");
		scanf("%d", &a); // Scrive la risposta che la mette in int a
		if (a==1)
		{
			printf(" *Vero* \n");
		}
		else
		{
			printf(" X-Falso-X \n");
		}
		
		printf(" B- 172.16.15.20 e un indirizzio IP di Classe ?\n");
		printf(" 1. A \n\b 2. B \n\b 3. C");
		scanf("%d", &b);
		if (b==2)
		{
			printf(" *Vero* \n");
		}
		else
		{
			printf(" X-Falso-X \n");
		}

		printf(" C- Quale commando usiamo per creare nuovo file su Linux ?\n");
		printf(" 1. cat \n\b 2. mkdir \n\b 3. touch");
		scanf("%d", &c);
		if (c==3)
		{
			printf(" *Vero* \n");
		}
		else
		{
			printf(" X-Falso-X \n");
		}
		
		somma = a + b + c; // dovrebbe fare la somma e metterla nel int somma 
		
		printf(" IL TUO RISOLTATO E:\n",&somma);// dovrebbe scrivere la somma
		
		break;
		case 0:
		printf(" Riprova\n");
		break;

	return 0;
}
}
