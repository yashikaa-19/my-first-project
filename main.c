#include <stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    int swaps=0,comparisons=0;
    printf("enter size");
    scanf("%d",& n);
     
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",& a[i]);
    for(i=1;i<n;i++)
    {
        j=i;
        
        while(j>0)
        {
            comparisons++;
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                
                swaps++;
                j--;
            } 
            else
            break;
        }
    }
    printf("sorted array:/n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    
    printf("\n swaps=%d",swaps);
    printf("/n comparisons=%d",comparisons);
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        
        