////在屏幕上输出乘法口诀表
//int main()
//{
//    int i = 0;
//    //确定打印行
//    for (i = 1; i <=9; i++)
//    {
//        //打印一行
//        int j = 1;;
//        for (j = 1; j <= i; j++)
//        {
//            printf(" %d*%d=%-2d ", i, j, i * j);//%-2d 两位靠左对齐
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int max = arr[0];//最大值
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 1; i <= sz; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("max=%d\n", max);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    int flag = 1;
//    for (i = 1; i <= 100; i++)
//    {
//        sum += flag*1.0 / i;
//        flag = -flag; 
//    }
//    printf("%lf\n", sum);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 10 == 9)
//            count++;
//         if (i / 10 == 9)
//            count++;
//    }
//    //9 19 29 39..99~10
//    //90 91 92..99~10
//    printf("count=%d\n", count);
//    return 0;
//}