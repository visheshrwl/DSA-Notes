/*#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the no of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the no of rows");
	
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		
		
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int a=1;
		for(j=1;j<=i;j++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++;
	
		}
		printf("\n");
	
	}
	
	
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of rows");
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of rows");
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
i#nclude<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	int a=1;
	for(i=1;i<=n;i++){
		
		for(j=n;j>=i;j--){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			
			
	
		}
		a++;
		printf("\n");
	}
	
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	int a=1;
	for(i=1;i<=n;i++){
		
		for(j=1;j<=i;j++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			
	
		}
		a++;
		printf("\n");
	
	}
	
	
	return 0;
}
*/
/*#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		int a=1;
		for(j=1;j<=i;j++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++;
	
		}
		
		printf("\n");
	
	}
	
	
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		int a=1;
		for(j=n;j>=i;j--){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++;
			
	
		}
		
		printf("\n");
	}
	
	return 0;
}*/
/*#include<stdio.h>
//odd no triangle
int main()
{
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		int a=1;
		for(j=1;j<=i;j++){
			printf("%d",a);
			a=a+2;	
		}
		printf("\n");
	}
	
	return 0;
}*/
/*#include<stdio.h>
//number and alphabet triangle
int main()
{
	int i,j,n,k,l;
	printf("enter the no of rows");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
	if (i%2==1){
	
		for(j=1;j<=i;j++){
		printf("%d",j);
		}
		printf("\n");
	}
	else{
		int a=1;
		for(l=1;l<=i;l++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++;
			}
		printf("\n");
	    }
	    	
    }

	
	return 0;
}*/
/*#include<stdio.h>
int main(){
	
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	int a=1;
	for(i=1;i<=n;i++){
		
	
		for(j=1;j<=i;j++){
			printf("%d",a);
			a=a+2;
		
		}
		
		printf("\n");
	}
	
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	int a=1,b=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==1){
				printf("%d",a);
				if(a==1){
					a=0;
				}
				else if(a==0){
					a=1;
				}	
			}
			
			else{
				printf("%d",b);
				if(b==0){
					b=1;
				}
				else if(b==1){
					b=0;
				}
			}
			
		}
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf("*");
		}
		
		printf("\n");
		
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf("*");
		}
		
		printf("\n");
		
	}
	return 0;
}*/
#include<stdio.h>
/*int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf("*");
		}
		
		printf("\n");
		
	}
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		int a=1;
		for(k=1;k<=i;k++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++; 
		}
		                                                                              
		printf("\n");
		
	}
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	c=n-1;
	for(i=1;i<=(2*n-1);i=i+2){
		for(j=1;j<=c;j++){
			printf(" ");
		}
		c=c-1;
		
		for(k=1;k<=i;k++){
			printf("*");
			
		}
		
		printf("\n");
		
	}
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	int t=2;
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d\t",t*j);
		}
		t=t+1;
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	c=n-1;
	for(i=1;i<=(2*n-1);i=i+2){
		for(j=1;j<=c;j++){
			printf(" ");
		}
		c=c-1;
		
		for(k=1;k<=i;k++){
			printf("%d",k);
			
		}
		
		printf("\n");
		
	}
	return 0;
	
}*/


/*#include<stdio.h>
int main(){
	int i,j,n,k,c;
	
	printf("enter the no of rows");
	scanf("%d",&n);
	c=n-1;
	for(i=1;i<=(2*n-1);i=i+2){
		for(j=1;j<=c;j++){
			printf(" ");
		}
		c=c-1;
		int a=1;
		for(k=1;k<=i;k++){
			int d=a+64;
			char ch=(char)d;
			printf("%c",ch);
			a++;
		}
		
		printf("\n");
		
	}
	return 0;	
}*/
  
/*#include<stdio.h>
int main(){
	int i,j,k,l,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		
		int a=i-1;
		for(l=1;l<=i-1;l++){
			printf("%d",a);
	        a--;
		}
		printf("\n");	
	}
	
	return 0;
}*/
/*#include<stdio.h>
int main(){
	int i,j,k,l,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	int nsp=n/2;
	int nst=1;
	int ml=n/2+1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=nsp;j++){
			printf(" ");
		}
		for(int k=1;k<=nst;k++){
			printf("*");
		}
		if(i<ml){
			nsp--;
			nst+=2;
		}
		else{
			nsp++;
			nst-=2;
		}
		printf("\n");
	}
}*/
#include<stdio.h>
int main(){
	int i,j,k,l,n;
	printf("enter the no of rows");
	scanf("%d",&n);
	int nsp=1;
	int nst=n-1;
	for(int i=1;i<=2*n-1;i++){
		printf("*");
	}
	printf("\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=nst;j++){
			printf("*");
		}
		for(k=1;k<=nsp;k++){
			printf(" ");
		}
		for(j=1;j<=nst;j++){
			printf("*");
		}
		nst--;
		nsp=nsp+2;
		printf("\n");
	
	}
	return 0;
}





