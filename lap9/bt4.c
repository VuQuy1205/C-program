#include <stdio.h>

int main() {
    char  student[5][150];
    int i;
    printf("Nhập tên học sinh vào bảng danh sách sau:\n");
    for (i=0; i<5; i++) {
        printf("\nTên học sinh số %d là:", i+1);
        scanf("%s",student[i]);
    }
    for (i=0; i<5; i++) {
        printf("\n Học sinh số %d là %s", i+1, student[i]);
    }
    printf("\n");
}
