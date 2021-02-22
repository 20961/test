//int main()//goto的关机程序
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "我是猪"))
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}
//int main()//循环的关机程序
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");//system-执行系统命令
//    while (1)
//    {
//        printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//        scanf("%s", input);
//        if (0 == strcmp(input, "我是猪"))
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    printf("hello bit\n");
//    goto again;
//    printf("你好\n");
//again:
//    printf("hehe\n");//goto语句会打乱代码节奏
//    return 0;
//}