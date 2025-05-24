#include <stdio.h>

/*
 在 C 语言中，%i 和 %d 都可以用来格式化输出十进制整数，它们在 printf 里是等价的。
1. %d：decimal，表示十进制整数。
2. %i：integer，也表示十进制整数。
区别：
在 scanf 里，%i 可以自动识别八进制（0开头）、十六进制（0x开头）和十进制；%d 只识别十进制。
在 printf 里，%i 和 %d 没有区别，都输出十进制。
所以你用 %i 或 %d 都可以，效果一样。

*/

int main(void)
{

    printf("%i + %i = %i\n", 1, 2, 1 + 2);
    return 0;
}