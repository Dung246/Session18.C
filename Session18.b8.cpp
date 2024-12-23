#include<stdio.h>
#include<string.h>
int main(){
	int index;
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
    	printf("Moi ban nhap vi tri muon chen thong tin : ");
    	scanf("%d", &index);
    	getchar();
    	if(index>0 && index<52){
    	printf("Moi ban nhap ten cua id %d : ",index);
    	fgets(s[index].name,100,stdin);
    	printf("Moi ban nhap tuoi cua id %d : ",index);
    	scanf("%d", &s[index].age);
    	getchar();
    	printf("Moi ban nhap so dien thoai cua id %d : ",index);
    	fgets(s[index].phoneNumber,100,stdin);
	printf("\n \n");
	for(int i=1;i<=5;i++){
		printf("Id : %d\n",i);
    	printf("Ten id %d : %s",i, s[i].name);
    	printf("Tuoi id %d : %d\n",i, s[i].age);
    	printf("Sdt id %d : %s\n",i, s[i].phoneNumber);
    	
	}
	for(int i=6;i<=51;i++){
		if(i==index){
		printf("\nId : %d\n",i);
    	printf("Ten id %d : %s",i, s[index].name);
    	printf("Tuoi id %d : %d\n",i, s[index].age);
    	printf("Sdt id %d : %s\n",i, s[index].phoneNumber);
    	printf("\n \n");	
		}
		printf("Id : %d\n",i);
    	printf("Ten id %d : %s",i, s[1].name);
    	printf("Tuoi id %d : %d\n",i, s[2].age);
    	printf("Sdt id %d : %s\n",i, s[3].phoneNumber);
    	printf("\n \n");
	}
} else {
	printf("Vi tri ban nhap khong hop le ");
	return 0;
}
	return 0;
}
