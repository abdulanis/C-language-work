#include<stdio.h>
int main(){
	
     printf("hello c\n");
     int number, number2;
     //for scan the value that means user input
     printf("enter any number:");
     scanf("%d",&number);
     printf("enter any number for 2nd variable:");
     scanf("%d",&number2);
     int result=number2+number;
     printf("Addition = %d ",result);
}
