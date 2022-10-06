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
		struct Node* gecici=ilk; //listenin başından başla
		while(gecici->sonraki!=NULL){ //son elemana kadar ilerle		
			gecici=gecici->sonraki;
		}
		free(gecici);
}

struct Node* Bul(int aranan){
	int k;
	if(ilk==NULL){
		k=1;
		printf("Liste BOS!\n");
	}
	else{
		struct Node* gecici=ilk;		
		while(gecici!=NULL){
			if(gecici->data==aranan){
				printf("Bulundu!\n");
				k=1;
			}			
			gecici=gecici->sonraki;
		}
		if(gecici==NULL){
			printf("Bulunamadı!\n");
		}
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
