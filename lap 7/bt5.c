#include <stdio.h>
int main()
{
    int loaiA,loaiB,loaiC,loaiD,loaiE;
    float d;
 
        printf("nhap vao so diem cua sinh vien: ");
    
        scanf("%f", &d);
    
    if ( 75<= d )
        {
        printf("loaiA");
            }
    
    else if (60 <= d && d <=75)
        {
        printf("loaiB");
            }
    
    else if (45 <= d && d <60)
        {
        printf("loaiC");
             }
   
    else if (35<= d && d <40)
        {
        printf("loaiD");
            }
    
    else
        printf("loaiE");
        
    return 0;
}
