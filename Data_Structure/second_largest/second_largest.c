#include <stdio.h>
int main()
{
int a[5],i=0,l1=0,l2=0,l3=0;
printf("Enter the numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
l1=a[0];
for(i=0;i<5;i++)
{
if(a[i]>l1)
{
l3=l2;
l2=l1;
l1=a[i];
}
else if(a[i]>l2&&a[i]!=l1)
{
l3=l2;
l2=a[i];
}
else if(a[i]>l3&&a[i]!=l2&&a[i]!=l1)
{
l3=a[i];
}
}
printf("secondlargest number is %d\n",l2);
return 0;
}
