#include <stdio.h>
#include <stdlib.h>

int hieuHaiSo(int a, int b) {
    return a - b;
}

int tonghaiso(int a, int b) {
    return a + b;

}

int nhanHaiSo(int a, int b) {
    return a * b;
}

float chiaHaiSo(int a, int b) {
    if (b == 0) {
        printf("khong the chia cho 0");
        exit(1);
    }
    return (float) a / b;
}

void taomenu() {
    printf("+. phep cong.\n");
    printf("-. phep tru.\n");
    printf("*.phep nhan.\n");
    printf("/.phep chia.\n");
    printf("5.Thoat chuong trinh.\n");
    printf("vui long nhap lua chon cua ban (1|2|3|4|5):");

}

int main() {
    int a , b;
    char luachon;
    int ketqua;
    float ketqua1;
    while (1 == 1) {
        taomenu();
        scanf("%s", &luachon);
  //      fgetc(stdin);
        printf("nhap so a\n ");
        scanf("%d", &a);
        printf("nhap so b\n");
        scanf("%d", &b);

        switch (luachon) {
            case '+' :
                ketqua = tonghaiso(a, b);
                printf("tong hai so %d va %d la: %d", a, b, ketqua);
                break;
            case '-':
                ketqua = hieuHaiSo(a, b);
                printf("hieu hai so %d va %d la: %d", a, b, ketqua);
                break;
            case '*':
                ketqua = nhanHaiSo(a, b);
                printf("tich %d va %d la %d", a, b, ketqua);

                break;
            case '/':
                ketqua1 = chiaHaiSo(a, b);
                printf("thuong %d va %d la %.2f", a, b, ketqua1);

                break;
            case 5:
                printf("hen gap lai.");
                exit(1);
            default:


                //        //yeu cau ng  dung nhap 2 so
                //    //cho phep nguoig lua chon phep tinh.
                //lua chon phai la: +, -,*,/
//    char choice;
//    printf("enter you choice:");
//    scanf("%c", &choice);
//    switch  (choice){
//        case '+':
//            printf("");
//            break;
//        case  '-':
//            printf("Do sub");
//            break;
//        case  '*':
//            printf("Do ");
//            break;
//
//int a;
//int b,ketqua;
//char luachon;
//    float ketqua1;
//    printf("nhap so a\n ");
//    scanf("%d", &a);
//    printf("nhap so b\n");
//    scanf("%d", &b);
//    fgetc(stdin);
//    taomenu();
//    scanf("%c", &luachon);
//
//    switch (luachon) {
//        case '+' :          ketqua = tonghaiso(a, b);
//            printf("tong hai so %d va %d la: %d", a, b, ketqua);
//            break;
//        case '-':
//            ketqua = hieuHaiSo(a, b);
//            printf("hieu hai so %d va %d la: %d", a, b, ketqua);
//            break;
//        case '*':
//            ketqua = nhanHaiSo(a, b);
//            printf("tich %d va %d la %d", a, b, ketqua);
//
//            break;
//        case '/':
//            ketqua1 = chiaHaiSo(a, b);
//            printf("thuong %d va %d la %.2f", a, b, ketqua1);
//
//            break;
//        case 5:
//            printf("hen gap lai.");
//            exit(1);
//        default:

//            if (luachon == 2) {
//                ketqua = hieuHaiSo(a, b);
//                printf("hieu %d va %d la %d", a, b, ketqua);
//            } else if (luachon == 1) {
//                ketqua = tonghaiso(a, b);
//                printf("tong %d va %d la %d", a, b, ketqua);
//            } else if (luachon == 3) {
//                ketqua = nhanHaiSo(a, b);
//                printf("tich %d va %d la %d", a, b, ketqua);
//
//            } else if (luachon == 4) {
//                ketqua = chiaHaiSo(a, b);
//                printf("thuong %d va %d la %.2f", a, b, ketqua);
//
//            } else {
                printf(" lua chon sai");
                break;
        }

        printf("\n");
    }       return 0;
    }
