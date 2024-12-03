#include<stdio.h>
int main()
{
int a[30],b[30],s1,s2,temp,size;
printf("Enter the number of elements of first array:\n");
scanf("%d",&s1);
printf("Enter the array elements:\n");
for(int i=0;i<s1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number of elements of second array:\n");
scanf("%d",&s2);
printf("Enter the array elements:\n");
for(int i=0;i<s2;i++)
{
scanf("%d",&b[i]);
}
for(int i=0;i<s1;i++)
{
for(int j=i+1;j<s1;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(int i=0;i<s2;i++)
{
for(int j=i+1;j<s2;j++)
{
if(b[i]>b[j])
{
temp=b[i];
b[i]=b[j];
b[j]=temp;
}
}
}
printf("First sorted array:- ");
for(int i=0;i<s1;i++)
{
printf("%d\t",a[i]);
}
printf("\nSecond sorted array :- ");
for(int i=0;i<s2;i++)
{
printf("%d\t",b[i]);
}
int c[s1+s2];
int i=0,j=0;
int in;
size=s1+s2;
for(in=0;in<s1+s2;in++)
{
if(i<s1 && j<s2)
{
if(a[i]< b[j])
{
c[in]=a[i];
i++;
}
else if(a[i]==b[j])
{
c[in]=a[i];
i++;
j++;
size--;

}
else
{
c[in]=b[j];
j++;
}
}
else if(i<s1)
{
c[in]=a[i];
i++;
}
else
{
c[in]=b[j];
j++;
}
}
printf("\nThe merged array is: \n");
for (in=0;in<size;in++)
{
printf("%d\t",c[in]);
}
return 0;
}
