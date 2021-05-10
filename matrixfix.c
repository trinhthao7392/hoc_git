#include <stdio.h>


int main()
{
   
    float rowMatrixA = 0;
    int checkPosRowMatrixA = 0;
    int checkIntRowMatrixA = 0;
    int colMatrixA = 0;
    int checkPosColMatrixA = 0;
    int checkIntColMatrixA = 0;
    int rowMatrixB = 0;
    int checkPosRowMatrixB = 0;
    int checkIntRowMatrixB = 0;
    int colMatrixB = 0;
    int checkPosColMatrixB = 0;
    int checkIntColMatrixB = 0;
    
    int checkSumMatrixAAndMatrixB = 0;
    int checkSubMatrixAAndMatrixB = 0;
    int checkMulMatrixAAndMatrixB = 0;
    int checkMulMatrixBAndMatrixA = 0;

    int pheptinh = 0;
    int nextchoice = 0;

    int matrixC[100][100];
    int matrixD[100][100];


    /*Nhap so hang ma tran A*/
    do
    {
        printf(" Enter the row number of Matrix A:");
        scanf("%f", &rowMatrixA);
        
        if ((rowMatrixA > 0) && (rowMatrixA - (int)rowMatrixA == 0))
        {
            checkPosRowMatrixA = 1;
            checkIntRowMatrixA = 1;
        }
        else if(rowMatrixA <= 0)
        {
            printf("The row number of Matrix A is a negative integer:\n");
            checkPosRowMatrixA = 0;
        }
        else if(rowMatrixA - (int)rowMatrixA != 0)
        {
            printf("The row number of Matrix A is a real number:\n");
            checkIntRowMatrixA = 0;
        }       
    }while (!checkPosRowMatrixA || !checkIntRowMatrixA);
    
    /*Nhap so cot ma tran A*/    
    do
    {
        if (colMatrixA >= 0)
        {
            printf(" Enter the column number of Matrix A:");
            scanf("%d", &colMatrixA); 
        }
        else 
        {
            printf("The column number of Matrix A must be a positive integer:\n");
            scanf("%d", &colMatrixA); 
        }
        
    }while (colMatrixA < 0);
    
    /*Nhap phan tu ma tran A*/
    int MatrixA[rowMatrixA][colMatrixA];

    for (int i = 0; i < rowMatrixA; i++)
    {
        for (int j = 0; j < colMatrixA; j++)
        {
            printf("The element of Matrix A %d,%d is:",(i+1),(j+1));
            scanf("%d", &MatrixA[i][j]);
        }
    }
 
    /*Nhap so hang ma tran B*/
    do
    {
        if (rowMatrixB >= 0)
        {
            printf(" Enter the row number of Matrix B:");
            scanf("%d", &rowMatrixB); 
        }
        else 
        {
            printf("The row number of Matrix B must be a positive integer:\n");
        }
        
    }while (rowMatrixB < 0);
    
    /*Nhap so cot ma tran B*/  
    do
    {
        if (colMatrixB >= 0)
        {
            printf(" Enter the column number of Matrix B:");
            scanf("%d", &colMatrixB); 
        }
        else 
        {
            printf("The column number of Matrix B must be a positive integer:\n");
            scanf("%d", &colMatrixB); 
        }
        
    }while (colMatrixB < 0);

    /*NHap phan tu ma tran B*/    
    int MatrixB[rowMatrixB][colMatrixB];

    for (int i = 0; i < rowMatrixB; i++)
    {
        for (int j = 0; j < colMatrixB; j++)
        {
            printf("The element of Matrix B %d,%d is:",(i+1),(j+1));
            scanf("%d", &MatrixB[i][j]);
        }
    }
    
    if(rowMatrixA == colMatrixA && colMatrixB == colMatrixB && rowMatrixA == rowMatrixB)
    {
        checkSumMatrixAAndMatrixB = 1;
        checkSubMatrixAAndMatrixB = 1;
        checkMulMatrixAAndMatrixB = 1;
        checkMulMatrixBAndMatrixA = 1;
    }
    else if(rowMatrixA == rowMatrixB && colMatrixA == colMatrixB)
    {
        checkSumMatrixAAndMatrixB = 1;
        checkSubMatrixAAndMatrixB = 1;
    }
    else if(rowMatrixA == colMatrixB)
    {
        checkMulMatrixBAndMatrixA = 1;
    }
    else if(rowMatrixB == colMatrixA)
    {
        checkMulMatrixAAndMatrixB = 1;
    }
    else
    {
        checkSumMatrixAAndMatrixB = 0;
        checkSubMatrixAAndMatrixB = 0;
        checkMulMatrixAAndMatrixB = 0;
        checkMulMatrixBAndMatrixA = 0;
    }

    do
    {
        do    
            {   
                printf("Lua chon phep tinh cho ma hai ma tran: \n");
                if(checkSumMatrixAAndMatrixB)
                {
                    printf("Nhap 1 voi phep cong \n");

                }
                if(checkSubMatrixAAndMatrixB)
                {
                    printf("Nhap 2 voi phep tru \n");
                }
                if(checkMulMatrixAAndMatrixB)
                {
                    printf("Nhap 3 voi phep nhan A cho B \n");
                }
                if(checkMulMatrixBAndMatrixA)
                {
                    printf("Nhap 4 voi phep nhan B cho A \n");
                }
            /*Lua chon phep tinh*/
                
            scanf("%d", &pheptinh);
                
            }while(pheptinh <= 0 || pheptinh >= 5);
                
        
            switch (pheptinh)
            {
            case 1:
                for (int i = 0; i < rowMatrixA; i++)
                    {
                        for (int j = 0; j < colMatrixA; j++)
                        {
                            MatrixC[i][j]= MatrixA[i][j]+MatrixB[i][j];
                            printf("%d ",MatrixC[i][j]);
                        }
                        printf("\n");
                    }  

                printf("Ma tran tong la:\n");
                for(int i = 0; i < rowMatrixA; i++)
                {
                    for(int j = 0; j < col1; j++)
                    {
                    printf("%d\t", matrixSum[i][j]);
                    }
                    printf("\n");
                }  
                break;

            case 2:
                for (int i = 0; i < rowMatrixA; i++)
                    {
                        for (int j = 0; j < colMatrixA; j++)
                        {
                            MatrixC[i][j]= MatrixA[i][j] - MatrixB[i][j];
                            printf("%d ",MatrixC[i][j]);
                        }
                        printf("\n");
                    }  
                
                printf("Ma tran hieu la:\n");
                for(int i = 0; i < rowMatrixA; i++)
                {
                    for(int j = 0; j < col1; j++)
                    {
                    printf("%d\t", matrixSum[i][j]);
                    }
                    printf("\n");
                }  
                break;

            case 3:
                for (int i = 0; i < rowMatrixA; i++)
                    {
                        for (j = 0; j < colMatrixB; j++)
                        {
                            MatrixC[i][j]=0;
                            for (int k = 0; k < colMatrixA; k++)
                            {
                                MatrixC[i][j] += MatrixA[i][k]*MatrixB[k][j];
                            }
                            printf("%d ",MatrixC[i][j]);
                            
                        }
                        printf("\n");
                    }
                break;

            case 4:
                for(int i = 0; i < rowMatrixB; i++)
                    {
                        for(j = 0; j < colMatrixA; j++)
                        {
                            MatrixD[i][j]=0;
                            for(int k = 0; k<colMatrixB; k++)
                            {
                                MatrixD[i][j] += MatrixB[i][k]*MatrixA[k][j];
                            }
                            printf("%d ",MatrixD[i][j]);
                            
                        }
                        printf("\n");
                    }
                break;
                
            default:
                break;
            }
        
        printf("Press 1 to continue, 0 to end program\n");
        scanf("%d", &nextchoice);
        if(nextchoice == 1)
            nextchoice = 1;
        else
        {
            nextchoice = 0;
        }
        }while(!nextchoice);
   
    
    return 0;
}