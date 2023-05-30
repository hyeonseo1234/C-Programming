#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>


#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_26(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������

{
    srand(time(NULL));
    //  ���� ���� ����
    double height = 15.0 + rand() % (4 + 1) - 1;
    double height0 = 0;
    double velocity_m_s = 22.0 + rand() % (6 + 1) - 3;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double velocity_f_2;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("���� %6.2lfm/s�� �ӷ����� �����ϰ� ���� �÷ȴ�. \n\n", velocity_m_s);

    printf("(a) ���� %6.2lfm���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

    printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�? \n\n");


    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���� %6.2lfm���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��y\n");
        printf(" a : ���ӵ�, v : ���߼ӵ�, v0 : ó���ӵ�\n");
        printf("��y = y - y0, y : ���߳���, y0 : ó������\n");

        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2\n\n", g);
        
        printf("v^2 = v0^2 + 2 * a * ��y\n");
        printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm\n", velocity_m_s, g, height);

        velocity_f_2 = (velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lfm/s\n", velocity_f_2);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);
        printf("v   = sqrt((%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm)\n", velocity_m_s, g, height);
        printf("    =%6.2lfm/s\n\n", velocity_f);


    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");
        printf("v =%6.2lfm/s\n\n", velocity_f);

    }

    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�? \n\n");

        // your code here

        printf("���� ������ v = v0 + a * t\n");
        printf("��t = ��v / a, a : �߷°��ӵ�\n");
        printf("��v = v - v0, v : ���߼ӵ�, v0 : ó���ӵ�\n");
        printf("t1 = ���� �ö󰡴� �ð�, t2 = ���� �������� �ð�\n\n");;
        printf(" v - v0= a * t1\n");
        printf("-v - v0= a * t2\n\n");


        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf(" %6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t1\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t2\n\n", velocity_f, velocity_m_s, g);

        printf("t1 =%6.2lfm/s  / (-%6.2lfm/s^2)\n", delta_velocity1, g);
        printf("   =%6.2lfs\n", time_1);

        printf("t2 =%6.2lfm/s / (-%6.2lfm/s^2)\n", delta_velocity2, g);
        printf("   =%6.2lfs\n\n", time_2);



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t1 =%6.2lfs\n", time_1);
        printf("t2 =%6.2lfs\n\n", time_2);


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


    Excersize_2_26(Show_Solution, Answer);
}