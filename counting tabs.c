#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	int a,b,c,d,f=0,g=0;
	fp=fopen("myfile.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
        break;
        d++;
		if(ch==' ')
		a++;
		if(ch=='\t')
		b++;
		if(ch=='\n')
		c++;
		if(ch=='A' || ch=='Z')		
		f++;
		if(ch='a'|| ch =='z')
		g++;
		
	}
	
	
	
	printf("the small are  %d",g);
	
	
	
}
