#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number of processes : ");
    scanf("%d",&n);
    int a[n],p[n],small,i,j,in,w[n],t[n],s=0;
    float wt=0,tt=0;
    for(i=0;i<n;i++)
    {
        t[i]=0;
        w[i]=0;

    }
    for(i=0;i<n;i++)
    {
        printf("enter the burst time and priority of process %d  :  ",i+1);
        scanf("%d%d",&a[i],&p[i]);
    }
    for(i=0;i<n-1;i++)
    {
        small=p[i];
        in=i;
        int q=a[i];
        for(j=i+1;j<n;j++)
        {
            if(small>p[j])
            {
                small=p[j];
                in=j;
                q=a[j];
            }
        }
        a[in]=a[i];
        p[in]=p[i];
        p[i]=small;
        a[i]=q;
    }
    for(i=0;i<n;i++)
    {
        w[i]=s;
        s+=a[i];
        t[i]+=a[i];
        t[i]+=w[i];
    }
    for(i=0;i<n;i++)
    {
        tt+=t[i];
        wt+=w[i];

    }
    printf("the average waiting time and turnaround time is %f and %f.",wt/n,tt/n);
    return 0;
}
