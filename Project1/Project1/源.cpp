#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()//三个数字从大到小排序
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a,b,c);
//	return 0;
//}
//100以内能被3整除的数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//用辗转相除法计算两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//
//void	menu()
//{
//	printf("****************************\n");
//	printf("****	1.play	0.exit	****\n");
//	printf("****************************\n");
//}
//
////RAND_MAX-32767
//
//void	game()
//{
//	//1. 生成一个随机数
//	int	ret = 0;
//	int	guess = 0;//接受猜的数字
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand() % 100 + 1;//生成1-100之间的随机数
//	//printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else	if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int	main()
//{
//	int	input = 0;
//	srand((unsigned	int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case	1:
//			game();
//			break;
//		case	0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return	0;
//}
//#include<string.h>
//#include<stdlib.h>
//
//int	main()
//{
//	char	input[20] = { 0 };
//	//shutdown -s -t 60(系统命令 电脑会在60秒后关机）
//	//system()-执行系统命令的
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp（）
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto	again;
//	}
//	return	0;
//}