#include<stdio.h>
int main()
{
int a[100],search,i,n;
printf("Enter the number of element in array:");
scanf("%d",&n);
printf("Enter %d number\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter number to be searched:");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
printf("%d is present location %d.\n",search,i);
break;
}
}
if(i==n)
printf("%d is not present in the array.\n",search);
return 0;
} 
