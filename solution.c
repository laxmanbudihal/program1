//To check two array elements are equal or Not a sample program
#include<stdio.h>
void main()
{
int a[10],b[10],i,n,flag=0;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the  1st array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the 2nd array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
if(a[i]!=b[i])
{
flag=1;
}
}
if(flag==0)
{
printf("\nequal\n");
}
else
{
printf("\nnot equal\n");
}
}
