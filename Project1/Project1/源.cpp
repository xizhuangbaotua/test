#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()//�������ִӴ�С����
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
//100�����ܱ�3��������
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
//��շת��������������������Լ��
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
////��������Ϸ
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
//	//1. ����һ�������
//	int	ret = 0;
//	int	guess = 0;//���ܲµ�����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	//time_t
//	ret = rand() % 100 + 1;//����1-100֮��������
//	//printf("%d\n",ret);
//	//2.������
//	while (1)
//	{
//		printf("�������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else	if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case	1:
//			game();
//			break;
//		case	0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//shutdown -s -t 60(ϵͳ���� ���Ի���60���ػ���
//	//system()-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp����
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto	again;
//	}
//	return	0;
//}