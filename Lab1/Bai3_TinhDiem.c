#include <stdio.h>
#include <string.h>

// Cấu trúc để quản lý thông tin và điểm số của sinh viên
struct SinhVien {
    char mssv[20];
    char hoTen[50];
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTrungBinh;
};

int main() {
    struct SinhVien sv;

    // --- BƯỚC 1: NHẬP DỮ LIỆU TỪ BÀN PHÍM ---
    
    // Nhập Mã số sinh viên
    printf("Nhập Mã số sinh viên: ");
    fgets(sv.mssv, sizeof(sv.mssv), stdin);
    sv.mssv[strcspn(sv.mssv, "\n")] = '\0'; // Xóa ký tự xuống dòng '\n' do hàm fgets tạo ra

    // Nhập Họ và Tên
    printf("Nhập Họ và Tên: ");
    fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
    sv.hoTen[strcspn(sv.hoTen, "\n")] = '\0'; // Xóa ký tự xuống dòng '\n'

    // Nhập điểm các môn
    printf("Nhập điểm Toán: ");
    scanf("%f", &sv.diemToan);

    printf("Nhập điểm Lý: ");
    scanf("%f", &sv.diemLy);

    printf("Nhập điểm Hóa: ");
    scanf("%f", &sv.diemHoa);

    // --- BƯỚC 2: TÍNH TOÁN ĐIỂM TRUNG BÌNH ---
    // Toán nhân hệ số 2, tổng hệ số là 4 (2 + 1 + 1)
    sv.diemTrungBinh = (sv.diemToan * 2 + sv.diemLy + sv.diemHoa) / 4;


    // --- BƯỚC 3: XUẤT DỮ LIỆU RA MÀN HÌNH (Đúng định dạng mẫu) ---
    printf("\n"); // Xuống dòng để tách biệt phần nhập và phần xuất
    printf("Ma so sinh vien: %s\n", sv.mssv);
    printf("Ho Va Ten: %s\n", sv.hoTen);
    // Sử dụng %.2f để làm tròn đến 2 chữ số thập phân (hoặc %.1f nếu muốn làm tròn 1 chữ số)
    printf("Diem Trung Binh: %.2f\n", sv.diemTrungBinh); 

    return 0;
}
