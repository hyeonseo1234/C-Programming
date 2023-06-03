#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>



#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_3_23(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서
{
    srand(time(NULL));
    const double PI = 3.141592653;
    //  변수 선언 지역
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
    printf("지면에서의 높이가 %6.2lf m인 절벽 끝에서 수평면과 %6.2lf˚의 각을 이루면서 %6.2lf m/s의 초속도로 포사체가 발사되었다. \n\n", height, degree, velocity_m_s);
    printf("(a) 포사체가 지면에 있는 점 P에 충돌할 때까지 걸린 시간을 구하라.\n\n");
    printf("(b) 절벽 아래로부터 수평거리 x를 구하라. \n\n");
    printf("(c) 포사체가 점 P에 부딪치기 직전의 속도의 수평성분과 수직성분을 구하라.\n\n");
    printf("(d) 속도의 크기를 구하라.\n\n");
    printf("(e) 속도벡터가 수평면과 이루는 각을 구하라.\n\n");

    if (solution == SHOW)
    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 포사체가 지면에 있는 점 P에 충돌할 때까지 걸린 시간을 구하라.\n\n");
        // your code here
        printf("관련 공식은 y =y0 + v0y * t + 1/2 * a * t^2\n");
        printf("y : 나중위치, y0 : 처음위치, a : 가속도, v0 : 처음속도, t : 시간\n\n");

        printf("y = y0 + v0y * t + 1/2 * a * t^2 = v0 * sinθ - 1/2 * g * t^2 + y0\n");
        printf("  = v0 * sinθ - 1/2 * g * t^2 + y0\n\n");

        printf("0 = 140 m + ((26 * sin37˚) * t) - ((1/2) * 9.80 m/s^2 * t^2)\n", velocity_f, velocity_m_s, km, hour, a);

        printf("  =%6.2lf m\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("t =%6.2lf m\n\n");
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 절벽 아래로부터 수평거리 x를 구하라. \n\n");
        // your code here
        printf("관련 공식은 Δx = v0x * t\n");
        printf("Δx = 거리변화량, t : 시간\n\n");

        v0x = (100 * (cos(degree * PI / 180))) * 5.34;

        printf("Δx = (100 * cos%6.2lf˚) * 5.34s\n", degree);
        printf("    = %6.2lf m/s^2\n\n", v0x);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("Δx = %6.2lf m/s^2\n\n", v0x);
    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 포사체가 점 P에 부딪치기 직전의 속도의 수평성분과 수직성분을 구하라.\n\n");
        // your code here
        printf("관련 공식은 v0x = vx, vy = v0y - g * t\n");
        printf("t : 시간, g : 중력가속도\n");


    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(d) 속도의 크기를 구하라.\n\n");
        // your code here


    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(e) 속도벡터가 수평면과 이루는 각을 구하라.\n\n");
        // your code here   

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");


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