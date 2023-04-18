#include<stdio.h>
union my_union{
	int integer;
	char string[50];
};
int main(){
	union my_union u;
	printf("enter a value");
	scanf("%d");
	if(scanf("%d",&u.integer)==1){
		printf("the value %d was stored in appropriate feild of my_union",u.integer);

	}else{
		scanf("%s",u.string);
		printf("the value %s was stored in apppropriate feild of my_union",u.string);
		
	}
	return 0;
	}
	

