#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 
 struct SinhVien{
 	char name [100];
 	char age[100];
 	char phoneNumber[100];
 };
  typedef struct SinhVien SinhVien;
  int main(){
  	SinhVien s;
  	strcpy(s.name,"Nguyen Van A \n");
  	strcpy(s.age,"18 \n");
  	strcpy(s.phoneNumber,"09464854393 \n");
  	printf("Thong tin cua sinh vien : \n");
  	printf("Ho va ten : %s\n",s.name);
  	printf("Tuoi : %s\n",s.age);
	printf("So dien thoai : %s \n",s.phoneNumber) ; 	
  	
  }
