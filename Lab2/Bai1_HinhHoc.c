#include <stdio.h>
#define PI 3.14159
int main() {
    float dai,rong,r;
    float cvHCN,dtHCN,cvHT,dtHT;
    printf("Nhapchieudai:");
    scanf("%f",&dai);
    printf("Nhapchieurong:");
    scanf("%f",&rong);
    cvHCN = (dai+rong)* 2;
    dtHCN = dai*rong;
    printf("ChuviHCN:%f\n",cvHCN);
    printf("DientichHCN:%f\n",dtHCN);
    printf("Nhapbankinh:");
    scanf("%f",&r);
    cvHT = 2*PI*r;
    dtHT = PI*r*r;
    printf("ChuviHT:%f\n",cvHT);
    printf("DientichHT:%f\n",dtHT);
    return 0;


   
}