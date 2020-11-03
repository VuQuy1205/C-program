#include <stdio.h>
int main()
{
    int a[10],i,j;
    
    printf("nhap day so:\n");
    
    for(i=0;i<10;i++)
    
        {
        printf("a[%d]", i );
        scanf("%d",&a[i]);
            }
    
        printf("phan tu o vi tri chan:\n");
    
    for(j=0 ;j <10 ; j+=2)
        {
        printf("%d",a[j]);
            }
  
return 0;
    
}
           
    
