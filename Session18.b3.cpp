#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

 struct SinhVien {
 	char name[50];
 	char age[50];
 	char phoneNumber[50];
};
int main(){
  struct SinhVien students[5];
   for(int i=0;i<5;i++){
   	printf("Thong tin sinh vien : \n",i+1);
   	printf("Ten :");
   	fgets(students[i].name,sizeof(students[i].name),stdin);
   	students[i].name[strcspn(students[i].name,"\n")]="\0";
   	 printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai: ");
        scanf("%s", students[i].phoneNumber);
        getchar();
    }
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }
    return 0;
}
   

