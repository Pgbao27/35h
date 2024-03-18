#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 100

typedef struct sach
{
	char masach[];
	char tensach[];
	char tentacgia[];
	int loai;
	int namxuatban;
	int giatien;
	int soluong;
}SC;

void Nhapsoluong(int &sl);
void Nhap1sach(SC &x);
void NhapDS(SC &x,int sl);
void Xuat1sach(SC &x,int);

int main()
{
	SC a[MAX];
	int chon=0;
	int sl;
	Nhapsoluong(sl);
		do{
		printf("\n1.Nhap thong tin cac cuon sach \n");
		printf("2. \n");
		printf("3. \n");
		printf("4. \n");
		printf("5. \n");
		printf("6. \n");
		printf("7. \n");
		printf("8.\n");
		printf("9.\n");
		printf("Chon:"); scanf("%d",&chon);
		
		switch(chon)
		{
			case 1:
			{
				NhapDS(a,sl);	
			}
			break;
			case 2:
			break;
		}
		
		
		}while(chon>0 && chon<10);
}

void Nhapsoluong(int &sl)
{
	printf("Nhap so luong sach: ");
	scanf("%d",&sl);
}
void Nhap1sach(SC &x)
{
	printf("Nhap ma sach: ");scanf("%s",&x.masach);
	printf("Nhap loai sach: ");scanf("%d",&x.loai);
	printf("Nhap ten sach: ");fflush(stdin);gets(x.tensach);
	printf("Nhap ten tac gia: ");fflush(stdin);gets(x.tentacgia);
	printf("Nhap nam xuat ban: ");scanf("%d",&x.namxuatban);
	printf("Nhap so luong: ");scanf("%d",&x.soluong);
	printf("Nhap gia tien: ");scanf("%d",&x.giatien);
}
void NhapDS(SC x,int sl)
{
	printf("NHAP THONG TIN SACH-------\n");
	for (int i=0;i<sl;i++)
	{
		printf("SACH %d:\n",i+1);
		Nhap1sach(x[i]);
	}
}
void Xuat1sach(SC x,int sl)
{
	
}
void XuatDS(SC x,int n)
{
	for (int i=0;i<n;i++)
	{
	Xuat1sach(x[i]);
	}
}