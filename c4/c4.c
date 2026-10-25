#include<stdio.h>
void main(){
	int a;
	char b;
	char c[10];
	float d;
	double e;
	printf("Enter the Integer:");
	scanf("%d",&a);
	printf("Enter the single char:");
	scanf(" %c",&b);
	printf("Enter the String:");
	scanf("%9s",c);
	printf("Enter the number with point");
	scanf("%f",&d);
	printf("Enter the lorgest value:");
	scanf("%lf",&e);
	printf("Integer:%d \n Char:%c \n String:%s \n Float:%f \n Double:%lf",a,b,c,d,e);
}

