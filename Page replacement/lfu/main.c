#include <stdio.h>
#include <stdlib.h>

int main()
{
   int l,j,pos=0,pf=0;
    printf("enter the length of the reference string  :  ");
    scanf("%d",&l);
    int p[l],t[l],flag=0;
    printf("enter the reference string  :  \n");
    int i;
    for(i=0;i<l;i++)
    {
        scanf("%d",&p[i]);
    }
    int n;
    printf("enter the size of the frame  :  ");
    scanf("%d",&n);
    int f[n];
    for(i=0;i<n;i++)
    {
        f[i]=-1;
        t[i]=0;
    }
    int min;
    for(j=0;j<l;j++){
            flag=0;
            min=t[0];
            pos=0;
                for(i=0;i<n;i++)
                {
                    if(t[i]<min)
                {
                    pos=i;
                    min=t[i];
                }
                }
            for(i=0;i<n;i++)
            {
                if(f[i]==p[j]){
                        flag=1;
                        t[i]++;;
                }
            }
            if(flag==0)
            {
                f[pos]=p[j];
                pf++;
                t[pos]++;
            }
            for(i=0;i<n;i++)
            {
                printf("%d\t",f[i]);
            }printf("\n");
            }
    printf("the total number of page fault is  %d",pf);
    return 0;
}
