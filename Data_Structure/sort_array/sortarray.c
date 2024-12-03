#include<stdio.h>
int main()
{
int n1,n2,n3;
int a[100],b[100],c[100];
printf("Enter the size of 1st array: ");
scanf("%d",&n1);
printf("Enter array elements:\n");
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("Enter the size of 2nd array: ");
scanf("%d",&n2);
printf("Enter array elements:\n");
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);
n3=n1+n2;
for(int i=0;i<n1;i++)
c[i]=a[i];
for(int i=0;i<n2;i++)
c[i+n1]=b[i];
printf("Merged array:\n");
for(int i=0;i<n3;i++)
printf("%d",c[i]);
printf("\nFinal array after sorting:\n");
for(int i=0;i<n3;i++)
{
int temp;
for(int j=i+1;j<n3;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}}}
for(int i=0;i<n3;i++)
printf("%d\n",c[i]);
return 0;
}
