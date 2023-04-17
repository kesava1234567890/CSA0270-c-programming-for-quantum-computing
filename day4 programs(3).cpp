#include<stdio.h>
#define MAX_LEN 100
struct book{
	char title[MAX_LEN];
	char author[MAX_LEN];
	float price;
};
int main(){
	struct book books[3];
	for(int i=0;i<3;i++){
		printf("enter title,author,and price of book %d:",i+1);
		scanf("%s%s%f",books[i].title,books[i].author,&books[i].price);
		
	}
	for(int i=0;i<3;i++){
		printf("\nbook %d:\ntitle:%s\nauthor:%s\nprice:$%.2f\n",i+1,books[i].title,books[i].author,books[i].price);
	}
	return 0;
}
