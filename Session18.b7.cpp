#include<stdio.h>
#include<string.h>
int main(){
	int a=0;
	int index;
	char findName[50];
	struct SinhVien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct SinhVien s[50]={
		{
    		1,
    		"Nguyen Van A",
    		18,
    		"0123456789"
		},
		{
			2,
    		"Nguyen Thi Chi",
    		18,
    		"0123456789"
		},
		{
			3,
    		"Nguyen ANh Tuat",
    		18,
    		"0123456789"
		},
		{
			4,
    		"Tran Thi Kim Le",
    		18,
    		"0123456789"
		},
		{
			5,
    		"Nguyen Bach Thuc",
    		20,
    		"0123456789"
		},
		{
			6,
    		"agdsfdbf",
    		19,
    		"0123456789"
		}
	};
	printf("Moi ban nhap ten muon tim kiem : ");
	scanf("%s", &findName);
	getchar();
	for(int i=1;i<51;i++){
		if(strcmp(s[i].name,findName)==0){
			index=i;
			a=1;
		}
	}
	if(a==1){
		for(int i=index;i<50;i++){
			strcpy(s[i].name,s[i+1].name);
		}
		for(int i=1;i<5;i++){
			printf("Id : %d\n",i);
        	printf("Ten id %d : %s",i, s[i].name);
         	printf("Tuoi id %d : %d\n",i, s[i].age);
 		   	printf("Sdt id %d : %s\n",i, s[i].phoneNumber);
		}
		for(int i=5;i<50;i++){
		printf("Id : %d\n",i);
    	printf("Ten id %d : %s",i, s[6].name);
    	printf("Tuoi id %d : %d\n",i, s[6].age);
    	printf("Sdt id %d : %s\n",i, s[6].phoneNumber);
		}
	}
	if(a==0){
		printf("Khong ton tai ");
	}
	return 0;
}
