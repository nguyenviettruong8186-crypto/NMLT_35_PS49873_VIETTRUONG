#include <stdio.h>

// Bắt buộc phải có dòng này theo đề bài nha
#define PI 3.14159

int main() {
    float dai, rong, r;
    float cvHCN, dtHCN, cvTron, dtTron;

    // 1. Tinh hinh chu nhat
    printf("Nhap chieu dai: ");
    scanf("%f", &dai);
    printf("Nhap chieu rong: ");
    scanf("%f", &rong);

    cvHCN = (dai + rong) * 2;
    dtHCN = dai * rong;

    printf("Chu vi HCN: %.2f\n", cvHCN);
    printf("Dien tich HCN: %.2f\n", dtHCN);

    // 2. Tinh hinh tron
    printf("Nhap ban kinh: ");
    scanf("%f", &r);

    cvTron = 2 * PI * r;
    dtTron = PI * r * r;

    printf("Chu vi hinh tron: %.2f\n", cvTron);
    printf("Dien tich hinh tron: %.2f\n", dtTron);

    return 0;
}