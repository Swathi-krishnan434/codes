#include<stdio.h>
#include<stdlib.h>
#include<string.h> //bcz we used malloc() its a library function
void main()
{
int i,j,k; //initialization

char* text=(char*)malloc(sizeof(char));
char* pattern=(char*)malloc(sizeof(char));
char* rep=(char*)malloc(sizeof(char));
printf("Enter the text:"); //bcz we are 
scanf(" %[^\n]",text);
printf("Enter the pattern:");
scanf(" %[^\n]",pattern);
printf("Enter the replace string:");
scanf(" %[^\n]",rep);

int textlen=strlen(text); //we are using string functions so we have to use  string .h
int replen=strlen(rep);
int patlen=strlen(pattern);


for(i=0;i<=textlen-patlen;i++)
{
	for(j=0;j<patlen;j++)
	{
		if(text[i+j]!=pattern[j])
		{
			break;
		}
	}
	if(j==patlen)
	{
		printf("Position  found is %d",i); //i have 12 position 
		break;
	
	}
}
if(patlen==replen)
{
	for(k=0;k<replen;k++)
	{
		text[i]=rep[k];
		i++;
	}
	printf("\nUpdated Text is: %s",text);
}
else
{
	printf("Not possible to replace the string");
}
}

































