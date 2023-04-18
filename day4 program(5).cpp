#include<stdio.h>
struct rectangle {
	float width;
	float height;
};
int main(){
	rectangle ar;
	float area;
	printf("enter the width ");
	scanf("%f",&ar.width);	
	printf("enter the height ");
	scanf("%f",&ar.height);
	area=ar.width*ar.height;
	printf("area of the rectangle: %.2f",area);
	return 0;
}
