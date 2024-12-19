#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 struct SinhVien{
 	char name[50];
 	char age[50];
 	char phoneNumber[50];
 };
  typedef struct SinhVien  SinhVien;
int main(){
	SinhVien s;
	printf("Thong tin sinh vien : \n");
    printf("Nhap ten sinh vien : ");
	gets(s.name);
	printf("Nhap so tuoi : ");
	gets(s.age);
	printf("Nhap so dien thoai : %s\n ");
	gets(s.phoneNumber);
	printf("Ho ten : %s \n",s.name);
	printf("Tuoi : ",s.age);
	printf("So dien thoai : %s \n ",s.phoneNumber);
		
}
