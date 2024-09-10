#include <stdio.h>
int main()
{
    //有关于虚构女友的名字
    //需求:录入女友名字并且按格式打印
    //事实上我完全没有这么做,但是这里连续定义了变量和键盘录入
    char name[28];
    double num1;
    int num2 = 10,num3;
    printf("你最喜欢的IDE叫什么?"
            "你使用了它多少年和月?\n"
           "请用数字以空格隔开回答!\n");
    scanf("%s %lf %d",&name,&num1,&num3);
    //%d会录入它看到的全部连续整数!!!!,其他同理
    num1 = num1 * num2;
    printf("你不准用%s%.0lf年%d个月!",name,num1,num3);
    return 0;
}