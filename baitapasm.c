#include<stdio.h>

int login(char username,int password);
int withdraw(int tienhientai);
int transfer(int id,int num2);
int check(int num3);
int menu ();

int main()
{
	char username,c;
	int password;
	int i,id,tienrut,tienck,tienhientai=3000000,sodu;
	printf("Nhap username: ");scanf("%c",&username);
	printf("Nhap password: ");scanf("%d",&password);
	if(login(username,password)==1)
	{
		printf("Ban nhap dung mk");
	}
	else if(login(username,password)==0) printf("Ban nhap sai mk");
	menu (); //Cai nay in ra menu 
	do{
		printf ("\nMoi ban chon: ");
		scanf("%d",&i);
		printf("Lua chon y hoac Y de tiep tuc: ");
		fflush(stdin);
	    c=getchar();
		switch(i){
	    case 1: withdraw(tienhientai); break;
	    case 2: transfer(id,tienck);break;
	    case 3: check(sodu);break;
	    case 4 : thoatctrinh(0); break;}
	} while  (c =='y' || c=='Y');
	      printf("\nHay chon theo menu");
}
int login(char username,int password)
{	
     if(username =='B' && password==123) return 1;
     else  return 0;
}
int withdraw(int tienhientai)
{
	int tienrut;
 	printf("So tien ban can rut: ");
 	scanf("%d",&tienrut);
 		if(tienrut%50==0 && tienrut<3000000 && tienrut!=0) {
		 printf("Ban rut thanh cong");}
	 
    tienhientai-=tienrut;
    printf("So tien hien tai la %d",tienhientai);
}
int transfer(int id,int num2)
{
    int tknguoinhan=123456;
    int tienck;
    printf("So tien ban muon chuyen toi id nay la: ");scanf("%d",&tienck);
    tknguoinhan+=tienck;
    printf("So tien nguoi nhan dang co la %d",tknguoinhan);
}
int check(int num3)
{
	int sodu=3000000;
	printf("So du trong tai khoan la %d",sodu);
}
int thoatctrinh()
{
	printf("Thoat chuong trinh");
}
int menu ()
{
	printf("\nMenu:\n");
	printf("1.Rut tien\n");
	printf("2.Chuyen khoan\n");
	printf("3.Xem so du\n");
	printf("4.Thoat chuong trinh\n");
	return 0;
}
	


