#include<stdio.h>
void modifyArry(int newArry[5],int indx,int num)
{
	newArry[indx]=num;
}
int main()
{
	int i,arry[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
	{
		printf("%d",arry[i]);
	}
	modifyArry(arry,2,100);
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arry[i]);
	}
	
return 0;
}
