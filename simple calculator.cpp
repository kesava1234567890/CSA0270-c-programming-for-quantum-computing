#include<stdio.h>
int main() {
int a,b,option;

printf("enter any option[1)+,2)-,3)*,4)/]: \n");
scanf("%d",&option);
printf("enter the 1st numbers: \n");
scanf("%d",&a);
printf("enter the 2nd number: \n");
scanf("%d",&b);	

if (option==1){
		printf("result=%d",a+b);
}
else if (option==2){
		printf("result=%d",a-b);
}
else if (option==3){
		printf("result=%d",a*b);
}
else if (option==4){
		printf("result=%f",(float)a/b);
}
return 0; 
}
