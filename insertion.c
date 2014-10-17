#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*A,n,count,swap,cmp,j,key;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements: \n");
    A = (int *) malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",A+i);
    count=0;
    swap=0;
    cmp=0;
    for(j=1;j<n;j++)
    {
        key = *(A+j);
        i = j-1;
        while (i>=0 && *(A+i)>key)
        {
            *(A+i+1) = *(A+i);
            i--;
            count += 3;
            swap++;
        }
        *(A+i+1) = key;
        cmp++;
        count += 6;
    }
    count += 2;
    for(i=0;i<n;i++)
        printf("%d\n",*(A+i));
    printf("\nCount = %d Swap = %d Cmp =%d",count,swap,cmp);
    return(0);
}
