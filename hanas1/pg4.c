#include<stdio.h>
int main()
{
	int arr[10],i,n,ele;
	printf("enter the array size");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to search");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			printf("%d found at position %d",ele,i+1);
			return(0);
		}
	}
		printf("element not found");
}
