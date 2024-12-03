#include <stdio.h>
int main()
{
int ar[5],max,i=0;
printf("Enter the array:");
for(i=0;i<=5;i++)
{
scanf("%d",&ar[i]);  
}
max=ar[0];
for(i=0;i<5;i++)
{
if(ar[i]>max)
{
max=ar[i];
}
}
printf("%d is the max elements",max);
return 0;
}

