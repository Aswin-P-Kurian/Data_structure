#include<stdio.h>
int main()
{
int i,n,max,min;
int a[100];
printf("Enter array size(1-100):");
scanf("%d",&n);
printf("Enter %d integers:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("Largest element in the array: %d\n",max);
printf("Smallest element in the array: %d\n",min);
return 0;
}
