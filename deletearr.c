#include<stdio.h>
void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("\n");
}
}
void deletearr(int arr[],int size,int index)
{
for(int i=index;i<size-1;i++)
{
arr[i]=arr[i+1];
}
}
int main()
{
int arr[100]={7,5,8,94,75};
int size=5,element=7,index=1;
display(arr,size);
deletearr(arr,size,index);
size-=1;
printf("after deletion\n");
display(arr,size);
return 0;
}


 