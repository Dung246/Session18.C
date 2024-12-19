#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien students[50];
    int n = 5; 
    int id = 1; 

    for (int i = 0; i < n; i++) {
        students[i].id = id++;
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
        getchar(); 
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}
