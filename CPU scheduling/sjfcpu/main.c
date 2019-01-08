#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the number of processes : ");
    int n,i,j,small,in=0;
    scanf("%d",&n);
    int a[n],o[n],tt[n],wt[n],s=0;
    float t=0,w=0;
    for(i=0;i<n;i++)
    {
        printf("enter the burst time of process %d  :  ",i+1);
        scanf("%d",&a[i]);
        o[i]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        in=i;
        for(j=i+1;j<n;j++)
        {
           if(small>a[j])
            {
                small=a[j];
                in=j;
           }
        }
        int b=o[in];
        a[in]=a[i];
        o[in]=o[i];
        a[i]=small;
        o[i]=b;
    }
    printf("\n");
    printf("the order of execution of process after sorting  :\t");
    for(i=0;i<n;i++)
    {
        printf("process %d\t",o[i]);
    }
    printf("\n");
    printf("the burst time of processes after sorting  :\t");
    for(i=0;i<n;i++)
    {
                printf("%d\t",a[i]);
    }
    printf("\n");
    wt[0]=0;
    tt[0]=a[0];
    t=a[0];
    for(i=1;i<n;i++)
    {
        s+=a[i-1];
        wt[i]=s;
        tt[i]=wt[i]+a[i];
        t+=tt[i];
        w+=wt[i];
    }
    printf("the waiting time of processes is  :\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",wt[i]);
    }
    printf("\n");
    printf("the turn around time of processes is  :\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",tt[i]);
    }
    printf("\n");
    printf("the average waiting time is %f\n",w/n);
    printf("the average turn around time is %f",t/n);
    return 0;
}
