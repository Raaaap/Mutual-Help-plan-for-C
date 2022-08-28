#include<stdio.h>

//内核是对于输入值进行分类，用几个if...else分支就能轻松实现

int PeicewiseFun(x)//本题最重要的一个分段函数
{
    if(x<1)
    {
        return x;
    }
    else if(x>=10)
    {
        return x-5;
    }
    else
    {
        return x+5;
    }
}


int main()
{
    int input =0;
    scanf("%d",&input);
    int ret = 0;
    ret = PeicewiseFun(input);//变量接受分段函数返回值
    printf("%d\n",ret);
    return 0;
}