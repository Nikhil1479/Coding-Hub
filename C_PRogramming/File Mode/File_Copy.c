#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("Read.c","r");
	if(fs==NULL)
	{
		puts("Cannot open sources file\n");
		
	}
	ft=fopen("CopyFirst.c","w");
	if(ft==NULL)
	{
		puts("Cannot open target file\n");
		fclose(fs);
		
	}
	while((ch=fgetc(fs))!=EOF)
	fputc(ch,ft);
	
	fclose(fs);
	fclose(ft);
}