#include <stdio.h>
#include <windows.h>

/*
  1. ● argc：参数计数，表示命令行参数的数量（包括程序名本身）
  2. ● argv：参数向量，是一个字符串数组，包含所有命令行参数

    1. argv[0]：程序名（如 "./myprogram"）。
    2. argv[1] ~ argv[argc-1]：用户输入的参数。
    3. argv[argc]：固定是 NULL，表示数组结束。
*/
int main(int argc, char *argv[]) // char *argv[] 或 char **argv
{
    SetConsoleOutputCP(65001);
    if (argc < 2) // 检查是否有足够的参数（argc < 2表示只有程序名，没有额外参数）
    {
        printf("请在命令行输入参数，例如：num.exe Alice\n");
        return 103;
    }
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]); // 从第二个参数开始（i = 1，因为argv[0]是程序名）
    }
    return 0;
}