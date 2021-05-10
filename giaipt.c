#include<stdio.h>



int main()    
{
    float dc, chuvi;
    int checkDieuKienChuViDuong = 1;
    int checkDieuKienDuongCheoDuong = 1;
    int checkDieuKienPitago = 1;
    
    do
    {
        do
        {
            printf("Nhap chu vi: ");
            scanf("%f", &chuvi);
            if(chuvi <= 0)
            {
                printf("Khong phai la so duong, nhap lai \n");
                checkDieuKienChuViDuong = 0;
            }
            else
            {
                checkDieuKienChuViDuong = 1;
            }
            
        }while(!checkDieuKienChuViDuong);
        printf("Chu vi: %.2f\n", chuvi);

        do
        {
            printf("Nhap duong cheo: ");
            scanf("%f", &dc);
            if(dc <= 0)
            {
                printf("Khong phai la so duong, nhap lai \n");
                checkDieuKienDuongCheoDuong = 0;
            }
            else
            {
                checkDieuKienDuongCheoDuong = 1;
            }
            
        }while(!checkDieuKienDuongCheoDuong);
        printf("Duong cheo: %.2f\n", dc);

        if(dc >= chuvi / 2)
        {
            printf("Khong thoa man dieu kien pitago, nhap lai\n");
            checkDieuKienPitago = 0;
        }
        else
        {
            checkDieuKienPitago = 1;
        }
        
    } while (!checkDieuKienPitago);
    
        

    // giaiPTBac2(2, -chuvi, (chuvi*chuvi/4 - dc*dc));

}