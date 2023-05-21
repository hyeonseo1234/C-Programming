#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>


#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1


#define DEG2RAD(x)  x*M_PI/180
#define RAD2DEG(x)  x*180/M_PI


void Excersize_2_18(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
    //  변수 선언 지역
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
    printf("40km/h의 속력으로 달리는 자동차가 연료가 떨어져서 일정한 가속도 0.50 m/s^2으로 가속되었다. \n");

    printf("(a) 자동차각 정지할 때까지 주행한 거리는 얼마인가? \n\n");

    printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

    printf("(c) 자동차가 처음 1s동안 이동한 거리와 다섯 번째 1s 동안에 이동한 거리는 각각 얼마인가? \n\n");



    if (solution == SHOW)

    {
        printf("\n\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx\n");
        printf("Δx : x - x0, y :%6.2lfm, y0 :%6.2lfm\n");
        printf("a :%6.2lfm/s^2, v : 나중속도, v0 :%6.2lfm/s\n\n");

        printf("0 - (40km/h / 3600 * 1000m)^2 = 2 *(-0.5m/s^2) * t\n");
        printf(" t = 0 - (40km/h / 3600 * 1000m)^2 / 2 *(-0.5m/s^2) \n\n");

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lfm\n\n");

    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("v = %6.2lfm/s\n\n");

    }

    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here

        printf("관련 공식은 v = v0 + a * t\n");
        printf("Δv : v - v0, v :%6.2lfm/s, v0 :%6.2lfm/s\n");
        printf("a :%6.2lfm/s^2, Δt : Δv / a\n\n");

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
        printf("=========================   정 답   =============================\n\n");

        printf("t =%6.2lfs\n");

    }
    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here

        printf("관련 공식은 x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("v0 :%6.2lfm/s\n");
        printf("a :%6.2lfm/s^2, Δt : Δv / a\n\n");

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

        printf("4초 동안 이동한 거리 x4 =(40/3.6) * 4.0s + 1/2 (-0.5m/s^2) * (4.0s)^2\n\n");
        printf("5초 동안 이동한 거리 x5 =(40/3.6) * 5.0s + 1/2 (-0.5m/s^2) * (5.0s)^2\n\n");

        printf("x = x5 - x4\n\n");
        printf("  =%6.2lfm\n\n");



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

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
// 2장 18번