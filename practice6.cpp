#include <stdio.h>
int main()
{
    double ATP;
    double ADP;
    printf("���������ݵ�����ƽ��\n");
    scanf("%lf",&ATP);
    ADP = (ATP*2)*(ATP*2);
    printf("%.1lf\n",ADP);
    return 0;
    //ĿǰΪֹ,���еĺ���:printf,sacnf,sizeof
    //����ɻ����Ի�̫ңԶ,�޷������ڲ��߼�
}