#include<stdio.h>

main()
{
   int a ,b,c,max,i;
   
   
   printf("enter three numbers \n");
   

   scanf("%d %d %d",&a,&b,&c);
   


   
      if((a>b)&&(a>c))
{

            max=a;
            
      printf("large is %d",max);

}
   if((b>a)&&(b>c))
{
      max=b;
   printf("large is is %d",max);
}
   if((c>a)&&(c>b))
   { max=c;
   
   
      printf("large is %d",max);
      
   }
   
   
}
