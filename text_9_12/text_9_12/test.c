//printf-库函数-在屏幕上打印信息，使用时要打招呼，引用头文件<stdio.h>
#include <stdio.h>
int main()
{
	printf("你好，807\n");
	printf(" % d\n", 100);//打印一个整数--%d
	//sizeof-关键字-操作符-计算类型或者所占空间的大小（单位是字节）
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}
//ctrl+f5程序执行 菜单栏-调试-开始执行的不调试
//第一次失误总结，应该用英文下;  并且要提示有空格。
// \n为换行