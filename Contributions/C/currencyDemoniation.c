#include<stdio.h>
#include<conio.h>

void main()
{
	int notes[]={2000,500,200,100,50,20,10,5,2,1},amt,i;
	clrscr();
	printf("Enter an amount : ");
	scanf("%d",&amt);
	printf("\nCurrency denominations are :\n");
	for(i=0;amt!=0;i++)
	{
		if(amt/notes[i]!=0)
		{
			printf("\n%4d x %d",notes[i],amt/notes[i]);
			amt=amt%notes[i];
		}
	}
	getch();
}
