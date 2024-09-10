//键盘录入三个小数,分别表示长方体的长,宽,高
//分别求: A面, B面, C面的面积以及长方体的体积, 结果保留两位小数
#include <stdio.h>
int main()
{
    double a,b,c;
    printf("请输入长方体的长宽高整数,以空格隔开:");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("长为%.2lf,宽为%.2lf,高为%.2lf\n",a,b,c);
    printf("A面面积为:%.2lf\n"
           "B面面积为:%.2lf\n"
           "C面面积为:%.2lf\n"
           "长方体体积为:%.2lf"
           ,b*c,a*c,a*b,a*b*c);
    return 0;
}