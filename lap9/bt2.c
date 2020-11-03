#include <stdio.h>
int main()
{
    int a[5];
    int i;
    float b[10];
    
    printf("nhap cac phan tu a :\n" );
    for (i=0;i<5;i++)
        {
            printf("a[%d]", i);
            scanf("%d", &a[i]);
        }
    printf("nhap cac phan tu b:\n");
    for(i=0;i<10;i++)
    if (i<5)
    {
        b[i]=a[i];
        printf("a[%d]=b[%f]", i,b[i]);
    }
     
    else
    {
        printf("b[%d]=%f",i);
    }
    
    
    
    
    return 0;
    }
    

