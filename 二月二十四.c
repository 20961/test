void Swap1(int x, int y)//交换两个整型变量的内容
{
    int tmp = 0;
    tmp = x;
    x = y;
    y = tmp;
}
void Swap2(int* px, int* py)
{
    int tmp = 0;
    tmp = *px;
    *px = *py;
    *py = tmp;
}
int main()
{
    int num1 = 1;
    int num2 = 2;
    Swap1(num1, num2);
    printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
    Swap2(&num1, &num2);
    printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
    return 0;
}
//void Swap1(int x, int y)
//{
//    int tmp = 0;
//    tmp = x;
//    x = y;
//    y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//    int tmp = 0;
//    tmp = *pa;
//    *pa = *pb;
//    *pb = tmp;
//}
//int main()
//{
//    int a = 20;
//    int b = 10;
//    //int tmp=0;
//    //
//    printf("a=%d b=%d\n", a, b);
//    //Swap1(a,b);
//    Swap2(int* a, int* b);
//    /*tmp=a;
//    a=b;
//    b=tmp;*/
//    printf("a=%d b=%d\n", a, b);
//    return 0;
//}