#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter the number of processes  :  ");
    scanf("%d",&n);
    int i,a[n],w[n],t[n],s=0;
    float wt=0,tt=0;
    for(i=0;i<n;i++)
    {
          printf("enter the burst time of process %d  :  ",i+1);
          scanf("%d",&a[i]);
    }
    printf("the order of execution of processes is  :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",i+1);
    }
    printf("\n");
    printf("the corresponding waiting time of processes is  :\n");
    for(i=0;i<n;i++)
    {
        w[i]=s;
        s+=a[i];
        wt+=w[i];
        printf("%d\t",w[i]);
    }
    printf("\n");
    printf("the corresponding turnaround time of processes is  :\n");
    for(i=0;i<n;i++)
    {
        t[i]=0;
        t[i]+=w[i]+a[i];
        tt+=t[i];
        printf("%d\t",t[i]);
    }
    printf("\n");
    printf("the average waiting time  :  ");
    printf("%f",wt/n);
    printf("\n");
    printf("the average turn around time is  :  ");
    printf("%f",tt/n);
    return 0;
}
