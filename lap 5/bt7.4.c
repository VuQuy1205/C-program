#include <stdio.h>
int main ()
{
    int nvloaia= 320;
    int nvloaib= 250;
    int nvconlai=1000;
    int a;
   
                printf("nhap vao lua chon cua ban :\n1.nvloaia,\n2.nvloaib,\n3.nvconlai");
                scanf("%d",&a);

        if ( a == 1 )
            {
    
                printf("tien luong thang cua nhan nvloaia la:%d", 30*320 );
                }
    
        else if (a == 2)
            {
    
                printf("tien luong thang cua nvloaib la :%d", nvloaib * 30);
                }
        

        else
            
            printf("tien luong thang cua nvconlai la : %d", nvconlai * 30);
    
    return 0;
}
