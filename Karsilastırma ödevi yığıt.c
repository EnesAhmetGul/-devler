#include <stdio.h>

#define MAX 10

int Yigit[MAX];
int top=-1;


void Push(int a){
	if(top==MAX-1){
		printf("Yigit DOLU!\n");
	}
	else{
		top++;
		Yigit[top]=a;
	}	
}

int Pop(){
	if(top==-1){
		printf("Yigit BOS!\n");
	}
	else{		
		return Yigit[top--];
	}
}

void Yazdir(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d ",Yigit[i]);
	}
	printf("\n");
}

int Bul(int a){
	int i;
	int k=0;
	for(i=0;i<=top;i++){
		if(a==Yigit[i]){
			printf("Bulundu!\n");
			k=1;
		}
		else{}
	}
	if(k==0){
		printf("Bulunamadi!\n");
	}
}

main(){
int sec;
	do{
		printf("--------\n");
		printf("ISLEMLER\n");
		printf("--------\n");
		printf("1.EKLE\n");
		printf("2.CIKAR\n");
		printf("3.BUL\n");
		printf("4.CIKIS\n");
		printf("\nIslem seciniz: ");
		scanf("%d",&sec);
		int s;
		switch(sec){
			case 1: 
			
			printf("Sayi giriniz:");
			scanf("%d",&s);
					Push(s);
			break;
			
			case 2: 
					Pop();
			break;
			
			case 3: 
			
			printf("Sayi giriniz:");
			scanf("%d",&s);
					Bul(s);
			break;
			
			case 4:
					printf("CIKIS YAPILDI");
			break;
			
			default:
				printf("Hatali Secim!");
				break;
			
		}
		
	}while(sec!=4);
}
