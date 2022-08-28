#include<stdio.h>

//这道题是Problem1的具体运用，本质上还是分类问题。用if...else语句实现但缺点是分支过多，不美观。可以宏的方式改进。

void RankByScore(input)
{
    if(input>=0 && input<=100)
    {
        if(input>=90)
        {
            printf("%s\n","excellent");
        }
        else if(input>=80 && input<90)
        {
            printf("%s\n","good");
        }
        else if(input>=70 && input< 80)
        {
            printf("%s\n","general");
        }
        else if(input>=60 && input<70)
        {
            printf("%s\n","pass");
        }
        else
        {
            printf("%s\n","no pass");;
        }
    }

    else
    {
        printf("%s\n", "成绩输入异常，请重新输入");
    }
}

int main()
{
    int input = 0;
    scanf("%d",&input);//输入成绩
    RankByScore(input);//封装一个分类函数

    return 0;
}