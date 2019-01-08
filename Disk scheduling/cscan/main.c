#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("enter the length of input queue  :  ");
    int n;
    scanf("%d",&n);
    int a[n+2],i,j,small;
    printf("enter the input queue :\n");
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the min and max head range  : ");
    int max,min;
    scanf("%d%d",&min,&max);
    a[0]=min;
    a[n+1]=max;
    printf("enter the head position  :  ");
    int h;
    scanf("%d",&h);
    int count=0,in;
    for(i=0;i<n+11;i++)
    {
        small=a[i];
        in=i;
        for(j=i+1;j<n+2;j++)
        {
            if(small>a[j])
            {
                small=a[j];
                in=j;
            }
        }
        a[in]=a[i];
        a[i]=small;
    }
        int pos;
    for(i=0;i<n+2;i++)
    {
        if(a[i]>h){
            pos=i;
            break;
        }
    }
    for(i=pos;i<n+2;i++)
    {
            count+=abs(a[i]-h);
            h=a[i];
    }
    pos--;
    count+=abs(a[0]-max);
    h=a[0];
    for(i=1;i<=pos;i++)
    {
       count+=abs(a[i]-h);
       h=a[i];
    }
    printf("head count is %d .",count);
    return 0;
}
