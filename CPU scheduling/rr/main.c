#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("enter the number of processes  :  ");
    scanf("%d",&n);
    int a[n],o[n],s=0,w[n],t[n];
    float wt=0,tt=0;
    for(i=0;i<n;i++)
    {
        printf("enter the burst time of process %d : ",i+1);
        scanf("%d",&a[i]);
        o[i]=i+1;
        s+=a[i];
    }
    printf("enter the time quantum  :  ");
    int q;
    scanf("%d",&q);
    for(i=0;i<n;i++)
        {
            w[i]=0;
            t[i]=a[i];
        }
    while(s>0)
    {
        for(i=0;i<n;i++)
        {
                if(a[i]!=0)
               {
                    printf("%d\t",o[i]);
                    if(a[i]>=q)
                        {
                        a[i]-=q;
                        s-=q;
                        for(j=0;j<n;j++)
                        {
                            if((a[j]!=0)&&(i!=j))
                                w[j]+=q;
                        }
                        }
                    else
                    {
                        s-=a[i];
                        for(j=0;j<n;j++)
                        {
                            if((a[j]!=0)&&(i!=j))
                                w[j]+=a[i];
                        }
                        a[i]=0;
                    }
               }
         }
        }
        for(i=0;i<n;i++)
        {
            wt+=w[i];
            t[i]+=w[i];
            tt+=t[i];
        }
        printf("the average waiting time is %f and the average turn around time is %f",wt/n,tt/n);
    return 0;
}
