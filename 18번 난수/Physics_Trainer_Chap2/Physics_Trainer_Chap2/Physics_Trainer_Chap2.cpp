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


void Excersize_2_18(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
    srand(time(NULL));

    //  변수 선언 지역
    double velocity_m_s = 40.0 + rand() % (10 + 1) - 4;
    double velocity_f = 0;
    double a = 0.5 + rand() % (4 + 1);
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
    double b = 3.6;
    double v0 = 11.11;

    printf("\n\n");
    printf("2-18 \n");
    printf("%6.2lf km/h의 속력으로 달리는 자동차가 연료가 떨어져서 일정한 가속도%6.2lf m/s^2으로 가속되었다. \n\n", velocity_m_s, a);

    printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n\n");

    printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

    printf("(c) 자동차가 처음 %6.2lf s동안 이동한 거리와 다섯 번째 %6.2lf s 동안에 이동한 거리는 각각 얼마인가? \n\n", time_1, time_1);



    if (solution == SHOW)

    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n\n");

        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx\n");
        printf("Δx = x - x0, x : 나중위치, x0 : 처음위치\n");
        printf("  a : 가속도, v : 나중속도, v0 : 처음속도\n\n");


        v = velocity_m_s * km / hour;

        printf("(%6.2lf m/s)^2 - (%6.2lf km/h * %6.2lf m / %6.2lf s)^2 = 2 * (-%6.2lf m/s^2) * x\n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("x =(%6.2lf m/s)^2 - (%6.2lf m/s)^2 / 2 * (-%6.2lf m/s^2) \n", velocity_f, v, a);

        distance_x = -v * v / (2 * (-a));

        printf("  = %6.2lf m\n\n", distance_x);

    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("x = %6.2lf m\n\n", distance_x);

    }

    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

        // your code here
        printf("관련 공식은 v = v0 + a * t\n");
        printf("Δt = Δv / a, a : 가속도\n");
        printf("Δv = v - v0, v : 나중속도, v0 : 처음속도\n\n");

        printf("%6.2lf m/s = (%6.2lf km/h * %6.2lf m / %6.2lf s) + (-%6.2lf m/s^2) * t \n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("t = %6.2lf m/s - (%6.2lf km/h * %6.2lf m / %6.2lf s) / (-%6.2lf m/s^2) \n", velocity_f, velocity_m_s, km, hour, a);

        printf("  = %6.2lf m/s - %6.2lf m/s / (-%6.2lf m/s^2)\n", velocity_f, v, a);

        t = 0 - v / -a;

        printf("  = %6.2lf s\n\n", t);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);

    }
    if (solution == SHOW)

    {
        distance_x = v0 * time_1 + (a / 2 * time_1 * time_1);
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 자동차가 처음 %6.2lf s동안 이동한 거리와 다섯 번째 %6.2lf s 동안에 이동한 거리는 각각 얼마인가? \n\n", time_1, time_1);

        // your code here   
        printf("관련 공식은 x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("Δt = Δv / a, v : 나중속도, v0 : 처음속도, a : 가속도\n");
        printf("Δx = x - x0, x : 나중위치, x0 : 처음위치\n");
        printf("4초 동안 이동한 거리 : x4, 5초 동안 이동한 거리 : x5\n\n");

        printf("x = (%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2 \n", velocity_m_s, km, hour, time_1, a, time_1);
        printf("  = %6.2lf m\n\n", distance_x);


        printf("x4 =(%6.2lf km/h /%6.2lf) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", velocity_m_s, b, time_4, a, time_4);

        x_4_distance = (velocity_m_s / b) * time_4 + (-a / 2 * time_4 * time_4);

        printf("   = %6.2lf m\n\n", x_4_distance);

        printf("x5 =(%6.2lf km/h /%6.2lf) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", velocity_m_s, b, time_5, a, time_5);

        x_5_distance = (velocity_m_s / b) * time_5 + (-a / 2 * time_5 * time_5);

        printf("   = %6.2lf m\n\n", x_5_distance);

        printf("Δx = x5 - x4\n");
        delta_distance = x_5_distance - x_4_distance;

        printf("    = %6.2lf m\n\n", delta_distance);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf(" x  =%6.2lf m\n", distance_x);
        printf("Δx =%6.2lf m\n\n ", delta_distance);
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