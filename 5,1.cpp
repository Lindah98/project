#include <stdio.h>
int main()
{
   int arr[10], position, i, n=10, value;
  for (i = 0; i<n; i++)
  {
printf("Enter number of elements in the array\n");
printf("\n arr[%d]=", i);
scanf("%d",&arr[i]);
}
{
    printf("Please enter the location where you want to insert an new element\n");
    scanf("%d", &position);
}
{
    printf("Please enter the value\n");
    scanf("%d", &value);
}
{
    for (i<n; i>=position-1; i--)    
    arr[i+1]=arr[i];
    arr[position-1] = value;
    printf("Resultant array is\n");
    for (i = 0; i <= n; i++)    
    printf("%d\n", arr[i]);    
}
    return 0;
}
