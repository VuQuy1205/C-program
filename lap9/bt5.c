#include <stdio.h>

int main() {
    int i, j, total, point[30][4];
    for (i=1; i<=30; i++) {
        printf("Nhập điểm cho học sinh %d:\n", i);
        for (j=1; j<=4; j++) {
            printf("Môn học %d:\t", j);
            scanf("%d", &point[i][j]);
        }
    }
    for (i=1; i<=30; i++) {
        printf("\nĐiểm của học sinh %d:\n", i);
        total = 0;
        for (j=1; j<=4; j++) {
            printf("Môn học %d:\t", j);
            printf("%d điểm.\n", point[i][j]);
            total+=point[i][j];
        }
        printf("Điểm trung bình 4 môn trên= %.3f điểm\n", (float)(total)/4);
    }
    printf("\n");
}
