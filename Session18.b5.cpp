#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

 struct SinhVien{
   char id[20];
   char name[20];
   int age;
   char phoneNumber[15];	
 };
//tao ham sap xep sinh vien theo id nguoi dung nhap
void updateSInhVien(struct SinhVien sinhVien[],int n,char findByID[] );// khai bao nguyen mau ham 
 int main(){
	char findByID[50];
	struct SinhVien sv[50]={
	  {
	  	"abc01",
	  	"Nguyen Van a",
	  	18,
		"0000",
	  },
	  {
	  	"fdffdf",
	  	"Nguyen Van B",
	  	18,
	  	"0948",
	  },
	  {
	  	"Hfue",
	  	"La Van v",
	  	19,
	  	"9475",
	  },
	  { 
	    "hfdk",
	    "A du men",
	    20,
	    "9384",
	  },
	};
	printf("Moi ban nhap ID cua sinh vien can update");
	fgets(findByID,sizeof(findByID),stdin);
	updateSinhVien(sv,5,findByID);
	
	
return 0;
}
updateSinhVien(struct SinhVien sinhVien[],int n,char findByID[] ){
	// phai kiem tra xem id nguoi dung nhap co ton tai hay khong
	int flag=-1;
	for(int i=0;i<n;i++){
	 if(strcmp(findByID,sinhVien[i].id)){
	 	flag=i;
	 	break;
	 }	
	}
	if(flag==-1){
		printf("Khong thoa man ");
	}else{
	  strcpy(sinhVien[flag].name,"Le Minh Khoi");
	}
	  printf("Ten sinh vien moi %s ",sv[flag].name);
}
