#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("nhap vao so a: ");
    scanf("%d", &a);
    printf("nhap vao so b:");
    scanf("%d", &b);
   
    if (a*b > 1000)
        {
        printf("tich 2 so lon hon 1000");
        }
    if (a*b == 1000)
        {
        printf("tich 2 so bang 1000");
        }
}
