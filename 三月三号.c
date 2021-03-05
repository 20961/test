int Fib(int n)
{
	int a = 1;
 	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//TDD-测试驱动开发
	ret = Fib(n);
	printf("ret=%d ", ret);
	return 0;
 }
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= 1;
//	}
//	return ret;
//}
//int Fac2(int n)//递归
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	 int b=scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d", ret);
//	return 0;
//}
//int my_strlen(char* str)//不含临时变量 递归
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////int my_strlen(char* arr)//该函数含有临时变量
////{
////	int count = 0;
////	while (*arr != 0)
////	{
////		count++;
////		arr++;
////	}
////	return count;
////}
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);//求字符串的长度
//	printf("%d\n", len);*/
//	//模拟实现一个strlen的函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传的不是整个数组，而是一个元素的地址
//	printf("%d\n", len);
//	return 0;
//}