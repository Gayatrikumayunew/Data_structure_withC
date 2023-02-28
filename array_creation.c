#include<stdio.h>
#include<stdlib.h>
struct myarray
{
int total_size;
int used_size;
int*ptr;
};

void createArray(struct myarray *a,int tsize,int usize)
{
a-> total_size =tsize;
a-> used_size =usize;
a-> ptr=(int*)malloc (tsize*sizeof(int));
}

void show(struct myarray*a)
{
for(int i=0; i<a->used_size; i++)
{
printf("%d\n",(a->ptr)[i]);
}
}
void setvalue(struct myarray *a)
{
int n;
for(int i=0; i<a-> used_size;i++)
{
printf("enter element %d " ,i);
scanf("%d",&n);
(a->ptr)[i]=n;
}
}
int main()
{
struct myarray marks;
createArray(&marks,10,2);
printf("we are running setval now\n");
setvalue(&marks);
printf("we are running show now\n");
show(&marks);
return 0;
}



