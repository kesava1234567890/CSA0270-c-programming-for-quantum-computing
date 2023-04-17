#include<stdio.h>
struct person {
	char name[50];
	int age;
	float height;
	
};
int main(){
	struct person person1={"john",30,6.0};
	printf("name: %s\n", person1.name);
	printf("age: %d\n",person1.age);
	printf("height: %.2f\n",person1.height);
	
	return 0;
}
