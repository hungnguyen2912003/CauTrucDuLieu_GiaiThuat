#include<stdio.h>
#include<malloc.h>

struct nut {
	float data;
	struct nut *next;
};

typedef struct nut Node;

Node *khoitaoDS(void){
	return NULL;
}

Node *nhapDS(Node *dau, float x){
	Node *newNode = khoitaoDS();
	newNode = (Node*)malloc(sizeof(Node));
	if(newNode != NULL){
		newNode->data = x;
		newNode->next = dau;
		dau = newNode;
		return dau;	
	}
	else{
	printf("Out of the memory!");
	return ;
	}
}

void xemDS(Node *dau){
	Node *tam = dau;
	while(tam != NULL){
		printf("%f ",tam->data);
		tam = tam->next;
	}
}

int kt_nguyen(float n){
	int tam=(int)n;
	if(tam == n) return 1;
	return 0;
}

int nguyen_cuoi(Node *dau){
	Node *tam = dau;
	int kq = 0;
	while(tam != NULL){
		if(kt_nguyen(tam->data)) kq = tam->data;
		tam = tam->next;
	}
	return kq;
}

int main(){
	Node *dau = khoitaoDS();
	float x;
	int i;
	for(i = 1;i <= 5;i++){
		printf("Nhap gia tri: ");
		scanf("%f", &x);
		dau=nhapDS(dau, x);
	}
	xemDS(dau);
	if(nguyen_cuoi(dau)) printf("\nSo nguyen cuoi cung la: %d", nguyen_cuoi(dau));
	else printf("\nKhong co so nguyen nao!!!");
	return 1;
}