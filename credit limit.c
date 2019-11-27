
	
#include<stdio.h>
limit();
main(){
	limit();
	
	
}

limit(){
int account,balance_beggning,total,credit_limit,amount;
printf("Enter account number \n");
	scanf("%d",&account);
	
printf("Enter balance at the begning of the month \n");
	scanf("%d",&balance_beggning);
	
printf("Enter your total items charged by this month\n");
scanf("%d",&total);

printf("Enter your credit limit \n");
	scanf("%d",&credit_limit);

amount=balance_beggning+total-credit_limit;

if(amount>credit_limit)
{ printf("your account number is %d \n",account);
printf("your balance at the begning of the month is %d\n",balance_beggning);
printf("your total items charged by this month is %d",total);
printf("your credit limit is %d",credit_limit);
printf("credit limit exceeded");
}
else
printf("credit limit remaining");
	

}
