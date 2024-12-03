#include<stdio.h>
int main()
{
int a[100],first,second,third,n,i;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter %d number\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
first=second=third=a[i];
for(i=0;i<n;i++)
{
if(a[i]>first)
{
third=second;
second=first;
first=a[i];
}
else if(a[i]>second)
{
third=second;
second=a[i];
}
else if(a[i]>third)
{
third=a[i];
}
}
printf("Third Largest=%d\n",third);
return 0;
}
