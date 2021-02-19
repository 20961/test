int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        //判断i是否为素数
        //素数判断规则
        //1.试除法
        //产生2->i-1
        int j = 0;
        for (j = 2; j <=sqrt(i) /*i*/ ; j++)//
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >sqrt(i)/*== i*/)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\ncount=%d\n", count);
    return 0;
}
//int main()
//{
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        //判断year是否为闰年
//        //1.能被4整除并且不能被100整除是闰年
//        //2.能被400整除是闰年      
//       /* if (year % 4 == 0 && year % 100 != 0)
//        {
//            printf("%d ", year);
//            count++;
//        }
//        else if (year % 400 == 0)
//        {
//            printf("%d ", year);
//                count++;
//        }*/
//        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//        {
//            printf("%d ", year);
//            count++;
//        }
//    }
//    printf("\n总共有%d个闰年", count);
//    return 0;
//}
//int main()//辗转相除法
//{
//    int m = 18;
//    int n = 24;
//    int r = 0;
//    while (r=m % n)
//    {
//       //int r = m % n;
//        m = n;
//        n = r;
//    }
//    printf("%d\n", n);
//    return 0; 
//}