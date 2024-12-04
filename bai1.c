/*
    S=1+1/2 +1/3 +⋯+1/n  với n > 0
*/

#include <stdio.h>
#include <math.h>

float TinhTong(int n){
    if(n==1)
        return 1;
    if(n>1)
        return TinhTong(n-1)+1.0/n;
}

/*
    S = 1*3*5* …*(2n + 1) với n > 0
*/

int Nhan(int n){
    if(n==0)
        return 1;
    if(n>0)
        return Nhan(n-1)*(2*n+1);
}

/*
    S = 1 – 2 + 3 – 4 + (-1)^(n+1)*n   với n > 0
*/
int Tru(int n){
    if(n==1)
        return 1;
    if(n>1)
        return Tru(n-1)+pow(-1,n+1)*n;
}

/*
    S = 1! + 2! + … + n!  với n > 0
*/
// int GiaiThua(int n){
//     int giaithua;
//     if(n==0 && n==1)
//         return 1;
//     if(n>1)
//     return GiaiThua(n-1)+n;
// }

int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("1+1/2+1/3+...+1/%d (n>0) = %.2f", n, TinhTong(n));
    printf("\n1*3*5*...*(2*%d+1) (n>0) = %d", n, Nhan(n));
    printf("\n1-2+3-4+(-1)^(%d+1)*%d = %d", n, n, Tru(n));
    // printf("\n1!+2!+...+%d! (n>0) = %d", n, GiaiThua(n));
    return 1;

}