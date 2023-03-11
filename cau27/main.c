#include<stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int a){
    if(a<2){
        return 0;
    }
    for(int i = 2; i<= sqrt(a); i++){
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}

int mod(int a, int k, int n){
    int b = 1;
    if(k == 0){
        return b;
    }

    if(k == 1){
        b = a;
    }
    k /= 2;
    int A = a;

    while ((k != 0))
    {
       A = A*A %n;
       if(k%2 == 1){
        b = b*A %n;
       }
       k /= 2;
    }

    return b;

}

int main(){
    int a, k ,n;
    scanf("%d%d%d", &a, &k, &n);
    if(is_prime(mod(a,k, n)) == 1){
        printf("Vay %d^%d mod %d la 1 so ngen to\n", a,k,n);
    }
    else   printf("Vay %d^%d mod %d khong la 1 so ngen to\n", a,k,n);

    system ("pause");
}
