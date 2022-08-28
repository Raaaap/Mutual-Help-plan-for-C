#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void Print(int arr[4][5])
{
    int i = 0;
    int j = 0;
    for(i=0;i<4;i++)
    {
    for(j=0;j<5;j++)
    {
        printf("%-5d ",arr[i][j]);
    }
    printf("\n");
    }
}

void NumberCreator(int arr[4][5])
{
    int i = 0;
    int j = 0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            int n = rand()%100+1;
            arr[i][j] = n;
        }
        
        

    }
    

}

int FindMax(arr[4][5],int* x,int* y)
{
  
    int max = 0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
                *x = i+1;
                *y = j+1;
            }
        }
    }
    return max;
}



int main()
{
    int row = 0;
    int line = 0;

    //1.生成一个4*5的矩阵(rand函数生产数据存放在二维数组中),并展示。
    int arr[4][5] = {0};
    srand((unsigned int)time(NULL));//利用时间戳随机生成种子(seed)
    printf("生成的矩阵为：\n");
    NumberCreator(&arr);//生成器
    Print(arr);//打印机
    
    //2.写一个寻找最大值并定位的算法
    int max = 0;
    max = FindMax(&arr,&row,&line);
    printf("最大值是%d,在矩阵的(%d,%d)位置",max,row,line);
    return 0;
}