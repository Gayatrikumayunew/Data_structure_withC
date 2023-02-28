#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
for(int i=0;i<size;i++)
{
if(arr[i]==element)
{
return i;
}
}
return -1;
}
int main()
{
int arr[]={4,8,54,78,65};
int size=sizeof(arr)/sizeof(int);
int element=78;
int searchindex=linearsearch(arr,size,element);
printf("the element %d found at index %d\n",element,searchindex);
return 0;
}