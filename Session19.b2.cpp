#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

// H�m so s�nh hai chu?i (d? d�ng cho vi?c s?p x?p)
int compareNames(const void *a, const void *b) {
    const struct SinhVien *sv1 = (const struct SinhVien *)a;
    const struct SinhVien *sv2 = (const struct SinhVien *)b;
    return strcmp(sv1->name, sv2->name);
}

void sapXepTheoTen(struct SinhVien *students, int n) {
    qsort(students, n, sizeof(struct SinhVien), compareNames);
}

int main() {
    struct SinhVien students[5];
    int n = 5; // S? lu?ng sinh vi�n

    // G�n gi� tr? cho m?ng (gi? s? d� nh?p s?n)
    // ... (code d? nh?p th�ng tin sinh vi�n)

    // S?p x?p sinh vi�n theo t�n
    sapXepTheoTen(students, n);

    // In danh s�ch sinh vi�n sau khi s?p x?p
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
