....
//实现求一个数的二进制位的1有多少位
int main()
{
	int n = 0 ;
	scanf_s("%d",&n);
	int count = count_function(n);
	printf("count = %d\n",count);
	int p = countpro_function(n);
	printf("p = %d\n",p);
	return 0;
}
//function 1
int count_function(int a)
{
	int i;
	int count = 0;
	for (i=0;i<32;i++)
	{
		if ((a >> i & 1) == 1)//000000000循环太多次
		{
			count++;
		}
	}
	return count;
}
//以上算法太过繁琐，下面演示的是一种简洁的写法
int countpro_function(int a)
{

	int count = 0;
	while (a)
	{
		a = a & a - 1;//a等于0，就退出程序
		count++;
	}
	return count;
}
