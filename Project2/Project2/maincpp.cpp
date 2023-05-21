#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>


#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_18(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������

{
    //  ���� ���� ����
    double height = 15.0;
    double height0 = 0;
    double velocity_m_s = 22.0;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-18 \n");
    printf("40km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ �������� ������ ���ӵ� 0.50 m/s^2���� ���ӵǾ���. \n");

    printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

    printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

    printf("(c) �ڵ����� ó�� 1s���� �̵��� �Ÿ��� �ټ� ��° 1s ���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n");



    if (solution == SHOW)

    {
        printf("\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��x\n");
        printf("��x : x - x0, y :%6.2lfm, y0 :%6.2lfm\n");
        printf("a :%6.2lfm/s^2, v : ���߼ӵ�, v0 :%6.2lfm/s\n\n");

        printf("0 - (40km/h / 3600 * 1000m)^2 = 2 *(-0.5m/s^2) * t\n");
        printf(" t = 0 - (40km/h / 3600 * 1000m)^2 / 2 *(-0.5m/s^2) \n\n");

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lfm\n\n");

    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("v = %6.2lfm/s\n\n");

    }

    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here

        printf("���� ������ v = v0 + a * t\n");
        printf("��v : v - v0, v :%6.2lfm/s, v0 :%6.2lfm/s\n");
        printf("a :%6.2lfm/s^2, ��t : ��v / a\n\n");

        printf(" 0m/s = (40 * 1000m / 3600s) + (-0.5m/s^2) * t \n");

        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        

        printf("t = %6.2lfm/s / (-%6.2lfm/s^2)\n");
        printf("  =%6.2lfs\n\n");



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t =%6.2lfs\n");

    }
    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here

        printf("���� ������ x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("v0 :%6.2lfm/s\n");
        printf("a :%6.2lfm/s^2, ��t : ��v / a\n\n");

        printf("x = (40 * 1000m / 3600s) * 1.0s + 1/2 * (-0.5m/s^2) * (10s)^2 \n");
        printf("  =%6.2lfs\n\n");


        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        /*
        printf("t = %6.2lfm/s / (-%6.2lfm/s^2)\n", delta_velocity2, g);
        printf("  =%6.2lfs\n\n", time_2);
        */

        printf("4�� ���� �̵��� �Ÿ� x4 =(40/3.6) * 4.0s + 1/2 (-0.5m/s^2) * (4.0s)^2\n\n");
        printf("5�� ���� �̵��� �Ÿ� x5 =(40/3.6) * 5.0s + 1/2 (-0.5m/s^2) * (5.0s)^2\n\n");

        printf("x = x5 - x4\n\n");
        printf("  =%6.2lfm\n\n");



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("x =%6.2lfm\n");



        printf("=================================================================\n");
        printf("\n\n\n");
    }

}

int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 2     ========================\n");
    printf("=================================================================\n");


    Excersize_2_18(Show_Solution, Answer);
}
// 2�� 18��