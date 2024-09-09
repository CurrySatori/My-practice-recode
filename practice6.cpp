#include <stdio.h>
int main()
{
    double ATP;
    double ADP;
    printf("把输入数据的两倍平方\n");
    scanf("%lf",&ATP);
    ADP = (ATP*2)*(ATP*2);
    printf("%.1lf\n",ADP);
    return 0;
    //目前为止,已有的函数:printf,sacnf,sizeof
    //距离可互动性还太遥远,无法构建内部逻辑
}