/******************************************************************************
 * Họ và tên: [Trần Minh Phương]
 * MSSV:      [PS33274]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>

int main(){
    float a, b, c;
    float delta, x1, x2;

    printf("Nhap a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        // Phuong trinh bac 1: bx + c = 0
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh bac 1 co nghiem x = %.2f\n", x1);
        }
    } else {
        // Phuong trinh bac 2
        delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}