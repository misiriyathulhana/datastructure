#include<stdio.h>

int add(int ary[50])
{

}
int main()
{ 
int a[50]={};


int i,sum=0,n;
printf("enter the size of array:");
scanf("%d",&n);

if(n>50)
{
printf("maximun size of array is 50");
return(0);
}
else if(n<=0)
{
printf("array is empty, enter a number");
return(0);

}


printf("enter elements:");

for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];

}
printf("result=%d",sum);
return(0);
}
