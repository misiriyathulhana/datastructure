#include<stdio.h>
int add(int newarr[5])
{
	int sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+newarr[i];
	}
return(sum);

}

int main()
{
	int arr[5]={1,2,3,4,5},sum;
	sum=add(arr);
	printf("%d\n",sum);
	
return 0;
}


