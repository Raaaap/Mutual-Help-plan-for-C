#include<stdio.h>

//Readme:我对于题目情景进行一般化的推广，写了一个可计算n次碰撞时走过路程、反弹高度的小程序

double JouCount(double* height,int times)
{
    double ret = *height;//创建返回的临时变量
    for(int i=0;i<times-1;i++)
    {
        ret+=*height; 
        *height/=2;
    }
    *height = *height/2;//得到第n次碰撞高度
    return ret;
    

}

int main()
{
    double jounery = 0.0;
    double height = 0;
    int times = 0;



    printf("请输入初始高度、与地面碰撞次数\n");
    scanf("%lf%d",&height,&times);//输入高度、次数两基本量


    jounery = JouCount(&height,times);//对于高度传址调用
    printf("第%d次碰撞总路程为%lf\n",times,jounery);
    printf("碰撞后反弹高度为%lf\n",height);
}