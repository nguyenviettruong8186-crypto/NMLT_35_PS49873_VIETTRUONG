#include <stdio.h>

// Định nghĩa hằng số PI theo yêu cầu đề bài
#define PI 3.14159

int main() {
    // --- 1. XỬ LÝ HÌNH CHỮ NHẬT ---
    double chieuDai, chieuRong;
    printf("--- Tinh toan Hinh Chu Nhat ---\n");
    printf("Nhap vao chieu dai: ");
    scanf("%lf", &chieuDai);
    printf("Nhap vao chieu rong: ");
    scanf("%lf", &chieuRong);

    double chuViHCN = (chieuDai + chieuRong) * 2;
    double dienTichHCN = chieuDai * chieuRong;

    printf("Chu vi Hinh Chu Nhat: %.2lf\n", chuViHCN);
    printf("Dien tich Hinh Chu Nhat: %.2lf\n\n", dienTichHCN);


    // --- 2. XỬ LÝ HÌNH TRÒN ---
    double banKinh;
    printf("--- Tinh toan Hinh Tron ---\n");
    printf("Nhap vao ban kinh: ");
    scanf("%lf", &banKinh);

    double chuViTron = 2 * PI * banKinh;
    double dienTichTron = PI * banKinh * banKinh;

    printf("Chu vi Hinh Tron: %.5lf\n", chuViTron);
    printf("Dien tich Hinh Tron: %.5lf\n", dienTichTron);

    return 0;
}