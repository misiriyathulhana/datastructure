#include <stdio.h>

void sort(int ary[10],int num){
    int i,j,temp;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(ary[i]>ary[j])
            {
                temp=ary[i];
                ary[i]=ary[j];
                ary[j]=temp;
                
            }
        }
    }
}
void merge(int a[20],int b[20],int n,int m)
{
    int i,j=0;
    for(i=n;i<m+n;i++)
    {
        a[i]=b[j];
        j++;
    }
    int l= m+n;
    printf("Merged array is :\n");
    for(i=0;i<m+n;i++)
    {
        printf("%d \n",a[i]);
    }
}
int main(){
    int a[20],b[20],c[40],i,n,m;
    int l= m+n;
    printf("Enter the no.of elements in the array 1:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no.of elements in array 2:\n ");
    scanf("%d",&m);
    printf("Enter the elements in the array 2:\n");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    sort(a,n);
    printf("Sorted array 1:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    sort(b,m);
    printf("Sorted array 2:\n");
    for(i=0;i<m;i++){
        printf("%d \n",b[i]);
        
    }
    merge(a,b,n,m);
    sort(a,m+n);
    printf("Sorted array is : \n");
    for(i=0;i<m+n;i++)
    {
        printf("%d\n",a[i]);
    }
}
