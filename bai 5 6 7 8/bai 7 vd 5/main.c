/* Doi mot ky tu hoa thanh ky tu thuong*/
#include <stdio.h>
void main()
{
    char c;
    printf("Please enter a character: ");
    scanf("%c", &c);
    
    if (c >= 'A' && c<= 'z')
        printf("Lowercase character = %c", c + 'a'- 'A');
    else
        printf("character Entered is = %c", c);
            
}
