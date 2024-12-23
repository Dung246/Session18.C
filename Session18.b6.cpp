#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien s[50];
	for(int i=1;i<=5;i++){
	    printf("Moi ban nhap ten id %d : ",i);
    	fgets(s[i].name,100,stdin);
    	printf("Moi ban nhap tuoi id %d : ",i);
    	scanf("%d", &s[i].age);
    	getchar();
    	printf("Moi ban nhap so dien thoai id %d : ",i);
    	fgets(s[i].phoneNumber,100,stdin);
    	printf("\n \n");
    }
    	printf("Moi ban nhap ten cua id 6 : ");
    	fgets(s[6].name,100,stdin);
    	printf("Moi ban nhap tuoi cua id 6 : ");
    	scanf("%d", &s[6].age);
    	getchar();
    	printf("Moi ban nhap so dien thoai cua id 6 : ");
    	fgets(s[6].phoneNumber,100,stdin);
	printf("\n \n");
	for(int i=1;i<=6;i++){
		printf("Id : %d\n",i);
    	printf("Name id %d : %s",i, s[i].name);
    	printf("Age id %d : %d\n",i, s[i].age);
    	printf("Phonenumber id %d : %s\n",i, s[i].phoneNumber);
    	printf("\n \n");
	}
	for(int i=7;i<=50;i++){
		printf("Id : %d\n",i);
    	printf("Name id %d : %s",i, s[1].name);
    	printf("Age id %d : %d\n",i, s[2].age);
    	printf("Phonenumber id %d : %s\n",i, s[3].phoneNumber);
    	printf("\n \n");
	}
	return 0;
}
