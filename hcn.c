#include <stdio.h>

float chuvi, dc;
float x1;
float x2;

void kiemTraDk()
{
do
{
    do
    {
    printf("Nhap chu vi: ");
    scanf("%f", &chuvi);
    if(chuvi <= 0)
    {
    printf("nhap lai vi chu vi khong phai so duong\n");
    continue;
    }
    }while(chuvi <= 0);
    printf("chu vi la: %.2f\n", chuvi);

    do
    {
    printf("Nhap duong cheo: ");
    scanf("%f", &dc);
    if(dc <= 0)
    {
    printf("nhap lai vi duong cheo khong phai so duong\n");
    continue;
    }
    }while(dc <= 0);
    printf("duong cheo la: %.2f\n", dc);

if(dc <= chuvi/2)
{
printf("nhap lai do khong thoa pitago\n");
continue;
}
}while(dc <= chuvi/2 );
}

int giaiPT(float a, float b, float c)
 {
    // tinh delta
    float delta = b*b - 4*a*c;
    
    // tinh nghiem
    
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        return 2; 
    } else if (delta == 0) {
        return 1;
    } else {
        return 0;
    }
 }

int main()
{
int num = giaiPT(2, -chuvi, chuvi*chuvi/4 - dc*dc);
float s = x1*x2;
do{
   { do
    {
    kiemTraDk();
    if(num == 0){
    printf("Nhap lai vi khong ton tai HCN\n");
    continue;
    }
    if(num == 1){
    printf("Nhap lai vi la hinh vuong:\n");
    continue;
    }
    }while(num != 2);
    printf("Dien tich la: %.2f", s);
   }
   }while(s > chuvi*chuvi/16);
    printf("Dien tich la: %.2f", s);
}    




