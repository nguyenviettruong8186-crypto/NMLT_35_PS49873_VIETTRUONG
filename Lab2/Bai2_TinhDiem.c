#include <stdio.h>
int main(){
    int toan,ly,hoa;
    float DIEMTRUNGBINH;
    printf("Nhapdiemtoan:");
    scanf("%d",&toan);
    printf("Nhapdiemly:");
    scanf("%d",&ly);
    printf("Nhapdiemhoa:");
    scanf("%d",&hoa);
    DIEMTRUNGBINH=(float)(toan*3+ly*2+hoa)/6;
    printf("DIEMTRUNGBINH: %.2f\n", DIEMTRUNGBINH);
    return 0;
}
   //hoanthanhreveiwcode
   