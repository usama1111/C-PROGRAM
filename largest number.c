#include<stdio.h>
main()
{
	int a ,b,c,max,i;
	printf("enter three numbers \n");
	
	scanf("%d %d %d",&a,&b,&c);
	

	
		if((a>b)&&(a>c))
{
				max=a;
		printf("largest number is %d",max);
}
	if((b>a)&&(b>c))
{
		max=b;
	printf("largest number is %d",max);
}
	if((c>a)&&(c>b))
	{ max=c;
	
		printf("largest number is %d",max);
	}
	
	
}
