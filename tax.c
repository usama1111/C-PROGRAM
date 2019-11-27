#include<stdio.h>
tax();

main()
{
	tax();

}
tax()
{
   double income, taxable_income,tax,MIN_INCOME1;
   clrscr ();
   printf("n Enter the income: ");
   scanf ("%lf", &income) ;
   taxable_income = income - 150000;
   if(taxable_income <= 0)
     {
        printf("\n NO TAX");
     }
   else if((taxable_income >= MIN_INCOME1)&&(taxable_income < MAX_INCOME1))
     {
        tax = (taxable_income - MIN_INCOME1) *TAX_RATE1;
        printf("%d",tax);
     }
   else if(taxable_income >= MIN_INCOME2 && taxable_income < MAX_INCOME2)
    {
        tax = (taxable_income - MIN_INCOME2) * TAX_RATE2;
    }
   else
    {
        tax = (taxable_income - MIN_INCOME3) * TAX_RATE3;
        printf("\n TAX= %lf", tax);
    }
       getch();
       return 0;
}
