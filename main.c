#include <stdio.h>
#include <stdlib.h>
float Tinhnuachuvitamgiac(int *a,int *b,int *c){

    return  (float) (*a+*b+*c)/2;
}
int main(){
    int a,b,c;
    float nuachuvi;
    printf(" Nhap ba canh cua tam giac abc : \n");
    printf("canh a: \n");
    scanf("%d",&a);
    printf("canh b: \n");
    scanf("%d",&b);
    printf("canh c: \n");
    scanf("%d",&c);
    if (a <0 || b < 0 || c < 0){
        printf("Do dai cua mot canh tam giac khong the nho hon 0.\n");
    }
    if (a+b <= c || a+c <=b || b+c <=a){
        printf("Tong hai canh tam giac luon lon hon canh con lai.\n");
    }
    else{
       float  nuachuvi = Tinhnuachuvitamgiac(&a,&b,&c);
        printf("Nua chu vi cua tam giac abc la: \n");
        printf("%.2f",nuachuvi);
    }
}