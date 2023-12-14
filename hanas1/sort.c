#include<stdio.h>
void sort(int ary[10],int num)
{
int i,j,temp;
for(i=0; i<num-1; i++)
{
	for(j=0;j<num;j++)
	{
		if(ary[i]>ary[j]++)
		{
		temp=ary[i];
		ary[i]=ary[j];
		ary[j]=temp;
		}
    }
  }
} 
void merge(int a[20],int b[20],int c[40],int n, int m)
{
	int i,k=0;
	for(i=0;i<n;i++)
	c[i]=a[i];
	for(i=n;i<m;i++)
	k=m+n;
	c[k]=b[i];
	sort(c,k);
	printf("merge array is:");
	for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
		
}
}
int main()
{
int a[20],b[20],c[40],i,n,m;
printf("enter the no:of elements in array1:");
scanf("%d",&n);
printf("enter elements in array1:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
sort(a,n);
printf("enter the number of elements in array2:");
scanf("%d",&m);
printf("enter the elements in array2:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
sort(b,m);
merge(a,b,c,n,m);
return(0);
}
