#include<stdio.h>
int main()
{
   int i,n,a[10];
  printf("enter the number of elements\n");
  scanf("%d",&n);
  printf("enter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
}
printf("the array elements are");
for(i=0;i<n;i++)
   printf("%d\n",a[i]);
printf("completed 3");
return 0;
}