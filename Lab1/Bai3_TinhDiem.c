#include <stdio.h>

int main() {
    char mssv[10];
    char hoten[10];
    float Toan;
    float Ly;
    float Hoa;
    float ĐTB;
    printf("Nhap ma so sv: ");
    scanf("%s", mssv);
    printf("Nhaphoten: ");
    scanf("%s", hoten);
    printf("NhapdiemmonToan: ");
    scanf("%f", &Toan);
    printf("NhapdiemmonLy: ");
    scanf("%f", &Ly);
    printf("NhapdiemmonHoa: ");
    scanf("%f", &Hoa);
    ĐTB = (Toan * 2 + Ly + Hoa) / 4;
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoten);
    printf("Diem Trung Binh: %.2f\n", ĐTB);

    return 0;
}