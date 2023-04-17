#include<stdio.h>
union my_union{
	int integer;
	float floating_point;
	
};
int main(){
	union my_union my_var;
	my_var.integer=10;
	printf("integer: %d\n",my_var.integer);
	my_var.floating_point=3.14;
	printf("floating point: %.2f\n",my_var.floating_point);
	printf("value of union: %d\n",my_var.integer);
	return 0;
}
