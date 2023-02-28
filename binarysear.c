#include<stdio.h>
int binarysearch(int arr[],int size,int element){
int low,mid,high;
low=0;
high=size-1;


while(low<=high)
{
mid=(low+high)/2;
if(arr[mid]==element){
return mid;
}
if(arr[mid]<element){
low=mid+1;
}
else{
high=mid-1;
}
}
}
int main()
{
int arr[]={1,5,78,96,100};
int size=sizeof(arr)/sizeof(int);
int element=78;
int searchindex = binarysearch(arr,size,element);
printf("the element %d at index %d\n" , element,searchindex);
return 0;
}



