#define _CRT_SECURE_NO_WARNINGS 1  //加在源文件的第一行
#include<stdio.h>  //main函数的说明  打印函数的头文件
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
void menu()
{
    printf("********************************\n");
    printf("***   1. play  0. exit    ******\n");
    printf("********************************\n");
}
void game()
{
    //1.生成随机数
    // printf("猜数字\n");
    int ret = 0;
    int guess = 0;//接受猜的数字
    //拿时间数来设置随机数的生成起始点
    //time_t time(time_*timer)
    //timr_t
    ret = rand() % 100 + 1;//生成1~100之间的随机数
    //printf("%d\n",ret);
    // 2.猜数字
    while (1)
    {
        printf("请输入所猜数字：>");
        scanf("%d", &guess);
        if (guess > ret)
        {
            printf("猜大了\n");
        }
        else if (guess < ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你，猜对了！\n");
            break;
        }
    }
}
int main()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择>:");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();//猜数字游戏
            break;
        case 0:
                printf("退出游戏\n");
                break;
        default:
                printf("选择错误\n");
                break;
        }
    } while (input);
    return 0;
}