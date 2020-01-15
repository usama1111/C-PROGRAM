#include<stdio.h>
#include<string.h>
struct library{
	
	int price;
	char name[30];	
	
};
void func(struct library book);
int main()
{
	
	struct library book;
	strcpy(book.name,"hello");
	book.price=123;
  	func(book);
	return 0;
	
}

void func(struct library book) {
	
	printf("%s",book.name);
	printf("%d",book.price);
	
}
