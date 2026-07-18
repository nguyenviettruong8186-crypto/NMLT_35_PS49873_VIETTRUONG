#include <stdio.h>

int main() {
    // Khai báo biến lưu điểm số 3 môn (dùng kiểu float để nhập điểm lẻ nếu cần)
    float toan, ly, hoa;
    float diemTB;

    // Nhập điểm từ bàn phím
    printf("--- QUAN LY DIEM SO ---\n");
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    
    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);
    
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình theo công thức và áp dụng kỹ thuật ép kiểu (cast) sang float
    // Ép kiểu mẫu số (6) thành (float)6 hoặc ghi rõ 6.0 để tránh lỗi chia số nguyên ra số nguyên
    diemTB = (toan * 3 + ly * 2 + hoa * 1) / (float)6;

    // Hiển thị kết quả làm tròn 2 chữ số sau dấu phẩy bằng cách dùng %.2f
    printf("\n-----------------------\n");
    printf("Diem trung binh cua sinh vien la: %.2f\n", diemTB);

    return 0;
}