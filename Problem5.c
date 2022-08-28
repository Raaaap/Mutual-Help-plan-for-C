


int count = 0;
int i = 0;

int main()
{
    for(i = 1;i<=100;i+=2)
    {
        int j =0;
        for(j=2;j<i;j++)//用小于i的素数去试除j
        {
            if(i%j == 0)
            {
                break;//有两个以上因数不是素数，跳出循环
            }

        }
        if(i == j)
        {
            count++;//找到一个素数，计数器自增
            printf("%d ",i);
        }
    }
    printf("\ncount = %d",count);
    return 0;
}
//试除法求素数