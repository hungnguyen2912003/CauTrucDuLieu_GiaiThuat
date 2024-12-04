#include <stdio.h>
#include <conio.h>

int Tinh(int n){
    if(n==0 || n==1)
        return n;
    else
        return Tinh(n-1)-2*Tinh(n-2);
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("KQ: %d", Tinh(n));
}