#include <stdio.h>
int main()
{
    //float 单精度小数(精确到小数点后六位) 38位
    float a = 3.141592F;
    printf("%f\n",a);
    //在百分号后加.x,表示精确到x位
    printf("%.3f\n",a);
    //double 双精度小数(精确到后15位) 308位!!!
    double b = 3807.34111171L;
    printf("%.8lf\n",b);//若不表示小数位,默认位6位显示,且四舍五入
    printf("%.3lf\n",b);
    //long double 高精度小数()18~19位
    long double c = 7.16637L;
    //long double 在输出时使用大写L,合理区分lf与Lf
    printf("%Lf\n",c);
    //KIMI介绍了一种切换类型的方法
    printf("%lf\n",(double)c);
    return 0;
}