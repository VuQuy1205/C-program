#include <stdio.h>
int main()
{
 
    int num1 , num2;
    int i;
    int sum = 0;
    
        printf("nhap so thu nhat: ");
        scanf("%d", &num1);
        printf("nhap so thu hai : ");
        scanf("%d", &num2);
    
    if (num1 %2 != 0 )
        
    
    for( i = num1+2 ; i< num2 ; i+=2 )
        sum += i;
        
        {
        printf("%d", sum);
        }
    
    return 0;
    
}
