#include <stdio.h>
#include <math.h>

void tinhHocLuc() {
    float diem;
    printf("\n=== TINH HOC LUC ===\n");
    printf("Nhap diem (0-10): ");
    scanf("%f", &diem);
    
    if (diem < 0 || diem > 10) {
        printf("Diem so nhap vao khong hop le!\n");
        return;
    }
    
    if (diem >= 9.0) printf("Xuat sac\n");
    else if (diem >= 8.0) printf("Gioi\n");
    else if (diem >= 6.5) printf("Kha\n");
    else if (diem >= 5.0) printf("Trung binh\n");
    else if (diem >= 3.5) printf("Yeu\n");
    else printf("Kem\n");
}

void giaiPhuongTrinhBacHai() {
    float a, b, c;
    printf("\n=== GIAI PT BAC HAI ===\n");
    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a == 0) {
        if (b == 0) printf(c == 0 ? "Vo so nghiem\n" : "Vo nghiem\n");
        else printf("x = %.2f\n", -c/b);
    } else {
        float delta = b*b - 4*a*c;
        if (delta < 0) printf("Vo nghiem\n");
        else if (delta == 0) printf("x = %.2f\n", -b/(2*a));
        else {
            printf("x1 = %.2f\n", (-b + sqrt(delta))/(2*a));
            printf("x2 = %.2f\n", (-b - sqrt(delta))/(2*a));
        }
    }
}

void tinhTienDien() {
    float kWh;
    printf("\n=== TINH TIEN DIEN ===\n");
    printf("Nhap kWh: ");
    scanf("%f", &kWh);

    if (kWh < 0) {
        printf("So kWh khong hop le!\n");
        return;
    }
    
    float tien = 0;
    float gia[] = {1678, 1734, 2014, 2536, 2834, 2927};
    int bac[] = {50, 50, 100, 100, 100};
    
    for (int i = 0; i < 6 && kWh > 0; i++) {
        float tieuThu = (i < 5) ? (kWh > bac[i] ? bac[i] : kWh) : kWh;
        tien += tieuThu * gia[i];
        kWh -= tieuThu;
    }
    
    printf("Tien dien: %.0f dong\n", tien);
}

int main() {
    int luaChon;
    
    while (1) {
        printf("\n+-----MENU LAB 3-----+\n");
        printf("| 1. Tinh hoc luc    |\n");
        printf("| 2. PT bac hai      |\n");
        printf("| 3. Tien dien       |\n");
        printf("| 4. Thoat           |\n");
        printf("+--------------------+\n");
        printf("Chon (1-4): ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1: tinhHocLuc(); break;
            case 2: giaiPhuongTrinhBacHai(); break;
            case 3: tinhTienDien(); break;
            case 4: printf("Tam biet!\n"); return 0;
            default: printf("Khong hop le!\n");
        }
    }
    return 0;
}