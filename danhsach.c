#include<stdio.h>

struct nut{
    int gtri;
    struct nut*tiep;
};
typedef struct nut Node;
Node *khoitaoDS(void){
    return NULL;
}


Node* nhapDS(Node *dau, int pos, int x, int *ok){
    Node *new, *tam;
    int step  = 1;
    *ok=0;
    new=(Node*)malloc(sizeof(Node));
    new->gtri = x;
    new->tiep=NULL;
    tam = dau;

    if((dau==NULL) && (pos>0)) return dau;

    if(pos==0){
        new->tiep = dau;
        dau= new;
        *ok=1;
        return dau;


    }
while( (tam->tiep != NULL ) && (step<pos)) {
    tam=tam->tiep;
    step++;

}
if(step==pos){
    new->tiep=tam->tiep;
    tam->tiep=new;
    *ok =1;
    return dau;
}
return dau;
    





}
void xemDS(Node *dau){
    Node *tam;
    tam=dau;
    while (tam!= NULL ){
        printf("%d", tam->gtri);
        tam=tam->tiep;
    };

}
int main(){
    Node* dau;
    
    int ok;
    int x;
    dau=khoitaoDS();
    int i;
    for(i=0; i<10;i++){
        printf("Nhap phan tu ");
        scanf("%d",&x);
        dau = nhapDS(dau,0,x,&ok);
    }
    xemDS(dau);
}