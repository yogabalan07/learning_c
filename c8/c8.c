#include<stdio.h>
int square(int n){
	return n*n;
}
int cube(int n){
	return n*n*n;
}
int main(){
	int n,m,rn,rm;
	printf("Enter the square number:");
	scanf("%d",&n);
	printf("Enter the cube number:");
	scanf("%d",&m);
	rn=square(n);
	rm=square(m);
	printf("the square of %d is %d",n,rn);
	printf("\n the cube of %d is %d",m,rm);
}


