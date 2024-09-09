#include <stdio.h>
int main()
{
    //短整型short 2B 5位数
    short a = 10;
    printf("%d\n",a );
    //默认整型int 4B 10位数
    int b = 10001;
    printf("%d\n",b);
    //长整型long 32位有10位数 4B,64位有19位数 8B
    long c = 10086L;
    printf("%ld\n",c);
    //超长整型long^2 有19位数 8B
    long long d = 1145141919810LL;
    printf("%lld\n",d);
    //sizeof测量大小
    printf("%d---%zu\n",a,sizeof(a));
    printf("%zu\n",sizeof(long long));

    unsigned short int x = -51;
    printf("%u\n",x);
    return 0;
}