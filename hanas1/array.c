#include<stdio.h>
int main()
{
	int a[50]={},n,res,i;
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=0;i<=n;i++)
	{
		res=res+a[i];	
	}
	printf("sum is %d",res);
return(0);
}
