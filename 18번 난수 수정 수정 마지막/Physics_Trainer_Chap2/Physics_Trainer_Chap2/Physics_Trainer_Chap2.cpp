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


void Excersize_2_18(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������

{
    srand(time(NULL));

    //  ���� ���� ����
    double velocity_m_s = 40.0 + rand() % (10 + 1) - 3;
    double velocity_f = 0;
    double a = 0.5 + rand() % (3 + 1);
    double v;
    double km = 1000;
    double hour = 3600;
    double distance_x;
    double t;
    double time_1 = 1.0;
    double x_4_distance;
    double x_5_distance;
    double time_4 = 4.0;
    double time_5 = 5.0;
    double delta_distance;
    double distance_x0 = 0;

    printf("\n\n");
    printf("2-18 \n");
    printf("%6.2lf km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ �������� ������ ���ӵ�%6.2lf m/s^2���� ���ӵǾ���. \n\n", velocity_m_s, a);

    printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

    printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

    printf("(c) �ڵ����� ó�� %6.2lf s���� �̵��� �Ÿ��� �ټ� ��° %6.2lf s ���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n", time_1, time_1);



    if (solution == SHOW)

    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��x\n");
        printf("��x = x - x0, x : ������ġ, x0 : ó����ġ\n");
        printf(" a : ���ӵ�, v : ���߼ӵ�, v0 : ó���ӵ�\n\n");


        v = velocity_m_s * km / hour;

        printf("((%6.2lf m/s)^2 - (%6.2lf km/h * %6.2lf m / %6.2lf s)^2) = 2 * (-%6.2lf m/s^2) * x\n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("x =((%6.2lf m/s)^2 - (%6.2lf m/s)^2) / 2 * (-%6.2lf m/s^2) \n", velocity_f, v, a);

        distance_x = -v * v / (2 * (-a));

        printf("  = %6.2lf m\n\n", distance_x);

    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("x = %6.2lf m\n\n", distance_x);

    }

    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

        // your code here
        printf("���� ������ v = v0 + a * t\n");
        printf("��t = ��v / a, a : ���ӵ�\n");
        printf("��v = v - v0, v : ���߼ӵ�, v0 : ó���ӵ�\n\n");

        printf("%6.2lf m/s = (%6.2lf km/h * %6.2lf m / %6.2lf s) + (-%6.2lf m/s^2) * t \n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("t = %6.2lf m/s - (%6.2lf km/h * %6.2lf m / %6.2lf s) / (-%6.2lf m/s^2) \n", velocity_f, velocity_m_s, km, hour, a);

        printf("  = %6.2lf m/s - %6.2lf m/s / (-%6.2lf m/s^2)\n", velocity_f, v, a);

        t = 0 - v / -a;

        printf("  =  %6.2lf s\n\n", t);



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);

    }
    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) �ڵ����� ó�� %6.2lf s���� �̵��� �Ÿ��� �ټ� ��° %6.2lf s ���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n", time_1, time_1);

        // your code here   
        printf("���� ������ x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("��t = ��v / a, v : ���߼ӵ�, v0 : ó���ӵ�, a : ���ӵ�\n");
        printf("��x = x - x0, x : ������ġ, x0 : ó����ġ\n");
        printf("x4 : 4�� ���� �̵��� �Ÿ�, x5 : 5�� ���� �̵��� �Ÿ�\n\n");

        distance_x = distance_x0 + v * time_1 + (-a / 2) * (time_1 * time_1);

        printf(" x =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2 \n", distance_x0, velocity_m_s, km, hour, time_1, a, time_1);
        printf("   = %6.2lf m\n\n", distance_x);


        printf("x4 =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", distance_x0, velocity_m_s, km, hour, time_4, a, time_4);

        x_4_distance = distance_x0 + v * time_4 + (-a / 2) * (time_4 * time_4);

        printf("   = %6.2lf m\n\n", x_4_distance);

        printf("x5 =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", distance_x0, velocity_m_s, km, hour, time_5, a, time_5);

        x_5_distance = distance_x0 + v * time_5 + (-a / 2) * (time_5 * time_5);

        printf("   = %6.2lf m\n\n", x_5_distance);

        printf("��x = x5 - x4\n");
        delta_distance = distance_x0 + x_5_distance - x_4_distance;

        printf("   = %6.2lf m\n\n", delta_distance);



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf(" x = %6.2lf m\n", distance_x);
        printf("��x = %6.2lf m\n\n ", delta_distance);
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