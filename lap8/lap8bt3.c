#include <stdio.h>
int main ()
{
    int pin,count,chucnang,stk,sotienchuyen,sodutk,num;
        sodutk = 500000;
        pin = 1111;
        count = 0;
    char ans,noidung;

                    printf("Welcome to Mr.Q bank \n");
                    printf("Hay cho vao the cua ban\n");
                    printf("Nhap ma pin :" );
                    scanf("%d", &pin);
    
        if ( pin !=1111 )
        {
            do
                {
                    printf ("Nhap lai ma pin : ");
                    scanf("%d", &pin);
                    if (pin == 1111) goto Test;
                }
                    
            while (count++ && count <= 3);
        
                    printf("The cua ban da bi khoa:");
                }
    
            else
            {
           
                    printf("Ma pin dung\n" );
            Test:  printf("Vui long chon chuc nang. \n1.Rut tien\n2.Hien thi so du\n3.Chuyen khoan\n4.ket thuc");
                    scanf("%d", &chucnang);
   
                switch (chucnang)
                        
                {
                    
                    case 1:
                                    printf("Nhap vao so tien can rut:");
                                    scanf("%d", &num);
                
                    if (num <500000 && num<5000000 && num % 50==0)
                        {
                    
                        printf("So du tk la : %d\n", sodutk-num);
                        }
                    else
                        
                        {
                            printf("So tien rut phai la boi cua 50 va nho hon so du tai khoan\n");
                            }
                            printf("Ban co muon giao dich khac khong Y or N ");
                            fflush (stdin);
                            scanf ("%c", &ans);
                        if (ans=='y') goto Test;
                            break;
                    
                    case 2:
                        printf("so du tk cua ban la :%d", sodutk);
                        printf("Ban co muon giao dich khac khong Y or N ");
                        fflush (stdin);
                        scanf ("%c", &ans);
                    if (ans=='y') goto Test;
                            break;
        
     
                   
                    case 3:
                     
                            printf("nhap so tai khoan chuyen toi:" );
                            scanf("%d", &stk);
                            printf("nhap so tien chuyen: ");
                            scanf("%d", &sotienchuyen);
                            printf("nhap noi dung chuyen khoan: ");
                            fflush (stdin);
                            scanf("%c", &noidung);
                    
               
                        if (sotienchuyen<500000)
                            {
                            printf("ban da chuyen tien thanh cong den tk : %d\n", stk);
                            printf("noi dung la:%c\n", noidung);
                            printf("Voi so tien la: %d\n" ,sotienchuyen);
                            printf("do du con lai la: %d\n", sodutk-sotienchuyen);
                                }
                            printf("Ban co muon giao dich khac khong Y or N ");
                            fflush (stdin);
                            scanf ("%c", &ans);
                        if (ans=='y') goto Test;
                       
                        else
                            printf("giao dich khong thanh cong, vui long dang nhap lai");
                        
                            break;
                    
                    
                    case 4:
                        printf("cam on ban da su dung dich vu cua chung toi");
                            break;
                        
                        
                return 0;
    }
                
  }
    
}
