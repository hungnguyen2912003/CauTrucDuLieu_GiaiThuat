//5. xn = xn-1 – 3xn-2 	với x0 = 0, x1 = 1
#include <stdio.h>
#include <conio.h>

int TinhBT(int n){
    if(n==0 || n==1)
        return n;
    else
        return TinhBT(n-1)-3*TinhBT(n-2);
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("xn = x(n-1)-3x(n-2) voi n = %d co ket qua la: %d", n, TinhBT(n));
    return 1;
}
