#include<stdio.h>
struct employee{
	char name[50];
	float salary;
	int age;
};
int main(){
	struct employee emp[3];
	for(int i=0;i<3;i++){
		printf("enter information of employees %d:\n",i+1);
		printf("enter name :");
		scanf("%s",emp[i].name);
		printf("enter salary :");
		scanf("%f",&emp[i].salary);
		printf("enter age :");
		scanf("%d",&emp[i].age);
	}
	for(int i=0;i<3;i++){
		printf("employee %d\n",i+1);
		printf("%s\n",emp[i].name);
		printf("%.2f\n",emp[i].salary);
		printf("%d\n",emp[i].age);
	}
	return 0;
	

}
