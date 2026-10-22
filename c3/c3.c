#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	if(n1>n2){
		printf("the greatest number is %d",n1);
	}else{
		printf("the greatest number is %d",n2);
	}
}
