#include <stdio.h>
#include <string.h>

// Định nghĩa một hằng số cho năm hiện tại là 2026
#define CURRENT_YEAR 2026

// Cấu trúc để lưu trữ thông tin sinh viên
struct SinhVien {
    char mssv[20];
    char hoTen[50];
    int namSinh;
    int tuoi;
    float diemTrungBinh;
};

int main() {
    struct SinhVien sv;

    printf("--- NHẬP THÔNG TIN SINH VIÊN ---\n");

    // 1. Nhập Mã số sinh viên
    printf("Nhập Mã số sinh viên: ");
    fgets(sv.mssv, sizeof(sv.mssv), stdin);
    sv.mssv[strcspn(sv.mssv, "\n")] = '\0'; // Xóa ký tự xuống dòng do fgets tạo ra

    // 2. Nhập Họ và Tên
    printf("Nhập Họ và Tên: ");
    fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
    sv.hoTen[strcspn(sv.hoTen, "\n")] = '\0'; // Xóa ký tự xuống dòng

    // 3. Nhập Năm sinh
    printf("Nhập Năm sinh: ");
    scanf("%d", &sv.namSinh);

    // TỰ ĐỘNG TÍNH TUỔI: Lấy 2026 trừ đi năm sinh vừa nhập
    sv.tuoi = CURRENT_YEAR - sv.namSinh;

    // 4. Nhập Điểm trung bình
    printf("Nhập Điểm trung bình: ");
    scanf("%f", &sv.diemTrungBinh);

    // Hiển thị kết quả ra màn hình
    printf("\n--- THÔNG TIN SINH VIÊN ĐÃ NHẬP ---\n");
    printf("Ma so sinh vien: %s\n", sv.mssv);
    printf("Ho Va Ten: %s\n", sv.hoTen);
    printf("Nam sinh: %d\n", sv.namSinh);
    printf("Tuoi: %d (Tự động tính = %d - %d)\n", sv.tuoi, CURRENT_YEAR, sv.namSinh);
    printf("Diem Trung Binh: %.2f\n", sv.diemTrungBinh);

    return 0;
}
