#include<stdio.h>
void main()
{
int n,a[100],i,j,cnt=0;
printf("\n Enter the no of elements");
scanf("%d",&n);
printf("\n ENter Elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
cnt=0;
for(j=0;j<n;j++)
{
if(a[i]<a[j] && i!=j)
{
cnt++;
}
}
//printf("\n Output :");

if(cnt>=2)
{

//printf("\n Output :");
printf("\n %d\t",a[i]);
}
}

}
