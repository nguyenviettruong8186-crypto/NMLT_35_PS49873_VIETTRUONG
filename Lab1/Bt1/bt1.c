#include <stdio.h>

int main() {
    int a = 3;
    int b = 5;
    
    // Tính nghiệm x (ép kiểu về float để phép chia không bị mất phần thập phân)
    float x = (float)-b / a; 
    
    // Lệnh printf để in ra kết quả như bạn mong muốn
    printf("Phuong trình %dx + %d = 0 co nghiem x = %.2f\n", a, b, x);

    return 0;
}