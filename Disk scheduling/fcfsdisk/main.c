#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the length of input queue  :  ");
    int n;
    scanf("%d",&n);
    int a[n],i;
    printf("enter the input queue :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the head position  :  ");
    int h;
    scanf("%d",&h);
    int count=0;
    for(i=0;i<n;i++)
    {
        count+=abs(a[i]-h);
        h=a[i];
    }
    printf("head count is %d.",count);
    return 0;
}
