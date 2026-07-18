#include <stdio.h>

int main() {
    // Khai báo các hệ số và nghiệm dưới dạng số thực (float) để kết quả chính xác
    float a, b;
    float x;

    printf("--- GIAI PHUONG TRINH BAC NHAT ax + b = 0 ---\n");
    
    // Nhập hệ số a từ bàn phím
    printf("Nhap he so a (a khac 0): ");
    scanf("%f", &a);

    // Nhập hệ số b từ bàn phím
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Do đề bài giả định hệ số a nhập vào luôn khác 0
    // Công thức tính nghiệm: ax + b = 0 => ax = -b => x = -b / a
    x = -b / a;

    // Hiển thị kết quả ra màn hình (làm tròn 2 chữ số thập phân cho đẹp)
    printf("\n--------------------------------------------\n");
    printf("Phuong trinh %.2fx + %.2f = 0\n", a, b);
    printf("Co nghiem x = %.2f\n", x);

    return 0;
}