#include<stdio.h>
qualitypoints();
main(){
	qualitypoints();
	
	
}
qualitypoints(){
	int num;
	printf("enter your average\n");
	scanf("%d",&num);
	if ((num>=90)&&(num=100))
	{
		printf("4");
		
	}
	if (((num>=80))&&(num<90))
	{
		printf("3");
	}
	if ((num>=70)&&(num<80))
	{
		printf("2");
	}
	if ((num>=60)&&(num<70))
	{
		printf("1");
	}
 if(num<59)
  {
  	printf("0");
  }
}
