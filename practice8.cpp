//����¼������С��,�ֱ��ʾ������ĳ�,��,��
//�ֱ���: A��, B��, C�������Լ�����������, ���������λС��
#include <stdio.h>
int main()
{
    double a,b,c;
    printf("�����볤����ĳ��������,�Կո����:");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("��Ϊ%.2lf,��Ϊ%.2lf,��Ϊ%.2lf\n",a,b,c);
    printf("A�����Ϊ:%.2lf\n"
           "B�����Ϊ:%.2lf\n"
           "C�����Ϊ:%.2lf\n"
           "���������Ϊ:%.2lf"
           ,b*c,a*c,a*b,a*b*c);
    return 0;
}