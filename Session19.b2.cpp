#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

// Hàm so sánh hai chu?i (d? dùng cho vi?c s?p x?p)
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
    int n = 5; // S? lu?ng sinh viên

    // Gán giá tr? cho m?ng (gi? s? dã nh?p s?n)
    // ... (code d? nh?p thông tin sinh viên)

    // S?p x?p sinh viên theo tên
    sapXepTheoTen(students, n);

    // In danh sách sinh viên sau khi s?p x?p
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
