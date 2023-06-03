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


void Excersize_3_23(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������
{
    srand(time(NULL));
    const double PI = 3.141592653;
    //  ���� ���� ����
    double height = 140;
    double velocity_m_s = 100; //+ rand() % (10 + 1) - 3;
    double degree = 37;
    double v0x;
    double t;


    double velocity_f = 0;
    double a = 0.5; // +rand() % (3 + 1);
    //double v;
    double km = 1000;
    double hour = 3600;
    //double distance_x;
    double time_1 = 1.0;
    //double x_4_distance;
    //double x_5_distance;
    double time_4 = 4.0;
    double time_5 = 5.0;
    //double delta_distance;
    double distance_x0 = 0;

    printf("\n\n");
    printf("3-23 \n");
    printf("���鿡���� ���̰� %6.2lf m�� ���� ������ ������ %6.2lf���� ���� �̷�鼭 %6.2lf m/s�� �ʼӵ��� ����ü�� �߻�Ǿ���. \n\n", height, degree, velocity_m_s);
    printf("(a) ����ü�� ���鿡 �ִ� �� P�� �浹�� ������ �ɸ� �ð��� ���϶�.\n\n");
    printf("(b) ���� �Ʒ��κ��� ����Ÿ� x�� ���϶�. \n\n");
    printf("(c) ����ü�� �� P�� �ε�ġ�� ������ �ӵ��� ���򼺺а� ���������� ���϶�.\n\n");
    printf("(d) �ӵ��� ũ�⸦ ���϶�.\n\n");
    printf("(e) �ӵ����Ͱ� ������ �̷�� ���� ���϶�.\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ����ü�� ���鿡 �ִ� �� P�� �浹�� ������ �ɸ� �ð��� ���϶�.\n\n");
        // your code here
        printf("���� ������ y =y0 + v0y * t + 1/2 * a * t^2\n");
        printf("y : ������ġ, y0 : ó����ġ, a : ���ӵ�, v0 : ó���ӵ�, t : �ð�\n\n");

        printf("y = y0 + v0y * t + 1/2 * a * t^2 = v0 * sin�� - 1/2 * g * t^2 + y0\n");
        printf("  = v0 * sin�� - 1/2 * g * t^2 + y0\n\n");

        printf("0 = 140 m + ((26 * sin37��) * t) - ((1/2) * 9.80 m/s^2 * t^2)\n", velocity_f, velocity_m_s, km, hour, a);

        printf("  =%6.2lf m\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t =%6.2lf m\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) ���� �Ʒ��κ��� ����Ÿ� x�� ���϶�. \n\n");
        // your code here
        printf("���� ������ ��x = v0x * t\n");
        printf("��x = �Ÿ���ȭ��, t : �ð�\n\n");

        v0x = (100 * (cos(degree * PI / 180))) * 5.34;

        printf("��x = (100 * cos%6.2lf��) * 5.34s\n", degree);
        printf("    = %6.2lf m/s^2\n\n", v0x);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lf m/s^2\n\n", v0x);
    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) ����ü�� �� P�� �ε�ġ�� ������ �ӵ��� ���򼺺а� ���������� ���϶�.\n\n");
        // your code here
        printf("���� ������ v0x = vx, vy = v0y - g * t\n");
        printf("t : �ð�, g : �߷°��ӵ�\n");


    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(d) �ӵ��� ũ�⸦ ���϶�.\n\n");
        // your code here


    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(e) �ӵ����Ͱ� ������ �̷�� ���� ���϶�.\n\n");
        // your code here   

    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");


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


    Excersize_3_23(Show_Solution, Answer);
}