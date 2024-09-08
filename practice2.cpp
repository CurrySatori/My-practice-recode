#include <stdio.h>
int main()
{
    int blood = 100;
    int Db = 80;
    int Rb = 60;
    blood = blood - Db + Rb;
    int BloodScale = blood;
    printf("BloodScale:%d%s",BloodScale,"%");
    return 0;
}