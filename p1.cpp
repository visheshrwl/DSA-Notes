//program to find nth root of a given number

/*#include<stdio.h>

#include<math.h>
int main()
{
	int num,root,fin;
	printf("enter the number");
	scanf("%d",&num);
	printf("enter the nth root");
	scanf("%d",&root);
	fin=pow((num),(1.0/root));
	printf("The answer is %d",fin);
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int bonus,cy,yoj,yos;
	printf("enter current yr and yr of joining");
	scanf("%d %d",&cy,&yoj);
	yos=cy-yoj;
	if (yos>3)
	{
		bonus=2500;
		printf("bonus=2500");
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	float bs,gs,da,hra;
	printf("enter basic salary");
	scanf("%f",&bs);
	if (bs<1500)
	{
		hra=0.1*bs;
		da=0.9*bs;
		
	}
	else
	{
		hra=500;
		da=0.98*bs;
	}
	gs=bs+hra+da;
	printf("gross sal=%f",gs);
	return 0;
	
}*/

/*#include <stdio.h>
int main()
{
	int m1,m2,m3,m4;
	float per;
	printf("enter marks in subject 1");
	scanf("%d",&m1);
	printf("enter marks in subject 2");
	scanf("%d",&m2);
	printf("enter marks in subject 3");
	scanf("%d",&m3);
	printf("enter marks in subject 4");
	scanf("%d",&m4);
	
	per=((m1+m2+m3+m4)/400)*100;
	if (per>=60)
	{
		printf("first div");
	}
	if ((per>=50)&&(per<60))
	{
		printf("sec div");
	}
	if ((per>=40)&&(per<50))
	{
		printf("third div");

	}
	if (per<40)
	{
		printf("fail");
	}
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int m1,m2,m3,m4;
	float per;
	printf("enter marks in subject 1");
	scanf("%d",&m1);
	printf("enter marks in subject 2");
	scanf("%d",&m2);
	printf("enter marks in subject 3");
	scanf("%d",&m3);
	printf("enter marks in subject 4");
	scanf("%d",&m4);
	
	per=(m1+m2+m3+m4)/400*100;
	if (per>=60)
	{
		printf("first div");
	}
	else if (per>=50)
	{
		printf("sec div");
	}
	else if (per>=40)
	{
		printf("third div");

	}
	else
	
	{
		printf("fail");
	}
	return 0;
}*/


#include <stdio.h>
int main()
{
	float m1,m2,m3,m4,per;
	
	printf("enter marks in subject 1");
	scanf("%f",&m1);
	printf("enter marks in subject 2");
	scanf("%f",&m2);
	printf("enter marks in subject 3");
	scanf("%f",&m3);
	printf("enter marks in subject 4");
	scanf("%f",&m4);
	
	per=((m1+m2+m3+m4)/400)*100;
	printf("percentage=%f",per);
	if (per>=60)
	{
		printf("first div");
	}
	else if (per>=50)
	{
		printf("sec div");
	}
	else if (per>=40)
	{
		printf("third div");

	}
	else
	
	{
		printf("fail");
	}
	return 0;
}
	
	
