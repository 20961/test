//int main()
//{
//    int len = 0;
//    //1
//    len = strlen("abc");
//        printf("%d\n", len);
//        //2
//        printf("%d\n", strlen("abc"));
//    return 0;
//}
//void new_line()//函数的嵌套调用
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}
//void ADD(int* p)//当调用此函数的时候num的值将会增加
//{
//    (*p)++;
//}
//int main()
//{
//    int num = 0;
//    ADD(&num);
//    printf("num=%d\n", num);
//    ADD(&num);
//    printf("num=%d\n", num);
//    ADD(&num);
//    printf("num=%d\n", num);
//    return 0;
//}
//int binary_search(int arr[], int k,int sz)//二分查找-折半查找-函数
//{
//    //算法的实现
//  
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;//中间元素的下标放在循环里面
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if(arr[mid]>k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//        return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    //二分查找
//    //在一个有序数组中查找具体的某个数
//    //找到了返回这个数的下标，找不到返回-1
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int k = 7;
//    int ret = binary_search(arr, k,sz);//传过去的arr是数组首元素的地址即指针
//    if (ret == -1)
//    {
//        printf("找不到指定的数字\n");
//    }
//    else
//    {
//        printf("找到了，下标是:%d\n", ret);
//    }
//    return 0;
// }
//int is_leap_year(int y)    //判断闰年-函数
//{
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int year = 0;   
//    for (year = 1000; year <= 2000; year++)
//    {
//        //判断year是否为闰年
//        if (1 == is_leap_year(year))
//        {
//            printf("%d ", year);
//        }
//    }
//    return 0;
//}