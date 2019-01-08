#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the length of the reference string  :  ");
    int l;
    scanf("%d",&l);
    printf("enter the number of frames  :  ");
    int n;
    scanf("%d",&n);
    int i,p[l],f[n],j,pf=0,flag=0,pos=0;
    for(i=0;i<n;i++)
    {
        f[i]=-1;
    }
    printf("enter the reference string  :  ");
    for(i=0;i<l;i++)
    {
        scanf("%d",&p[i]);
    }
    for(j=0;j<l;j++){
            flag=0;
            for(i=0;i<n;i++)
            {
                printf("\t%d\t",f[i]);
            }
            printf("\n");
            for(i=0;i<n;i++)
            {
                if(f[i]==p[j]){
                        flag=1;
                }
            }
            if(flag==0)
            {
                f[pos]=p[j];
                pf++;
                pos=(pos+1)%n;
            }
                }
    printf("total page fault is %d",pf);
    return 0;
}
