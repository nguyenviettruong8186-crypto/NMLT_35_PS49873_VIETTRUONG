#include <stdio.h>
int main () {
    char mssv[10];
    char hoten[10];
    int NamSinh;
    int Tuoi;
    float ĐTB;
    printf("Nhapmssv:");
    scanf("%s",mssv);
    printf("Nhaphoten:");
    scanf("%s",hoten);
    printf("NhapNamSinh:");
    scanf("%d",&NamSinh);
    printf("NhapĐTB:");
    scanf("%f",&ĐTB);
    Tuoi=2026-NamSinh;
    printf("mssv:%s\n",mssv);
    printf("hoten:%s\n",hoten);
    printf("NamSinh:%d\n",NamSinh);
    printf("Tuoi:%d\n",Tuoi);
    printf("ĐTB:%.2f\n",ĐTB);
    return 0;

}