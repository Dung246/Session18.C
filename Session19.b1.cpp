#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

void xoaSinhVien(struct SinhVien *students, int *currentLength, int idXoa) {
    int i;
    for (i = 0; i < *currentLength; i++) {
        if (students[i].id == idXoa) {
            for (int j = i; j < *currentLength - 1; j++) {
                students[j] = students[j + 1]; 
            }
            (*currentLength)--; 
            printf("Da xoa sinh vien co ID %d\n", idXoa);
            return;
        }
    }
    printf("Khong tim thay sinh vien co ID %d\n", idXoa);
}

int main() {
    struct SinhVien students[50];
    int n = 5; 
    int currentLength = n; 
    int idXoa;

    printf("Nhap ID sinh vien can xoa: ");
    scanf("%d", &idXoa);

    xoaSinhVien(students, &currentLength, idXoa);

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
