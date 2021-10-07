#include<stdio.h>
int main()
{
	FILE *fp;
	int a[10],i,s=0;
	fp=fopen("data.in","r");
	for(i=0;i<10;i++)
	{
		fscanf(fp,"%d",&a[i]);
		s+=a[i];
	}
	printf("\n\tSUM : %d",s);
	for(i=9;i>=0;i--)
	printf("\n\t%d",a[i]);
	fclose(fp);
	return(0);
}