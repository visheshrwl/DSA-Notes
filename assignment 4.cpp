//sumation of n numbers
#include <stdio.h>
int sum(int n){
	if(n<=1){
		return n;
	}
	else{
		return n+sum(n-1);
	}
}
int main(){
	int n;
	printf("enter the number of terms:\n");
	scanf("%d",&n);
	printf("sum of the numbers=%d",sum(n));
	return 0;
}