#include <stdio.h>

struct Node{
	int data;
	struct Node *sonraki;
};

struct Node* ilk=NULL;

void Push(int veri){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->data=veri;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node* gecici=ilk; 
		while(gecici->sonraki!=NULL){ 	
			gecici=gecici->sonraki;
		}	
		gecici->sonraki=yeni;
	}
}

void Pop(){
		struct Node* gecici=ilk; //listenin ba��ndan ba�la
		while(gecici->sonraki!=NULL){ //son elemana kadar ilerle		
			gecici=gecici->sonraki;
		}
		free(gecici);
}

struct Node* Bul(int aranan){
	
	if(ilk==NULL){
		printf("Liste BOS!");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
				printf("Bulundu!");
			}			
			gecici=gecici->sonraki;
		}
	}
	printf("Bulunamadi!");
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
