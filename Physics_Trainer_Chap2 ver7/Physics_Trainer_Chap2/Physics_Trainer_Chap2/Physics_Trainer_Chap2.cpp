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


void Excersize_2_26(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
    //  변수 선언 지역
    double height = 15.0;
    double velocity_m_s = 22.0;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("돌을 %4.1lfm/s의 속력으로 수직하게 던져 올렸다. \n", velocity_m_s);

    printf("(a) 돌은 %4.1lfm에서 얼마나 빨리 운동하겠는가? \n", height);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");


    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy 입니다.\n");
        printf("답을 구하기 위해서 공식을 수정하면  v^2 = v0^2 + 2 * a * Δy 입니다.\n");
        printf("Δy(거리변화량) = y - y0, v = 나중 속도, v0(처음 속도) = 22.0m/s , a(중력 가속도) = 9.80m/s^2\n");
        printf("y0 = 0이기 때문에 Δy는 %5.2lf m입니다.\n", height);
        printf("식에 대입하면  v^2 = (%5.2lfm/s)^2 + 2 * (-%5.2lfm/s^2) * %5.2lfm 입니다.\n", velocity_m_s, g, height);
        printf("이때 a 에 (-)가 붙은 이유는 돌이 떨어지는 방향이 아래이기 때문에 (-)를 곱해줘야 합니다.\n");
        printf("v^2을 v로 바꿔주면 식은 v = sqrt((%5.2lfm/s)^2 + 2 * (-%5.2lfm/s^2) * %5.2lfm) 입니다.\n", velocity_m_s, g, height);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("따라서 나중 속도 v = %5.2lfm/s 입니다.\n", velocity_f);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("나중 속도 v = %5.2lfm/s 입니다.\n", velocity_f);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");

        printf("관련 공식은 v = v0 + a * t 입니다.\n");
        printf("답을 구하기 위해 공식을 수정하면 v - v0 = a * Δt 입니다.\n");
        printf("v = 나중 속도, v0(처음 속도) = 22.0m/s, a(중력 가속도) = 9.80m/s^2, Δt = 시간변화량\n");
        printf("Δt =  v - v0 / a 입니다.\n");
        printf("위로 던진 돌이 %5.2lfm를 지나 최고점에서 정지하고 아래로 떨어지면서 다시 %5.2lfm를 지나기 때문에 두 개의 식이 나옵니다.\n", height, height);
        printf("첫 번째 식은 v - v0= a * t1 입니다.\n");
        printf("두 번째 식은 -v - v0= a * t2 입니다.\n");
        printf("t1 = 돌이 올라가는 시간이고, t2 = 돌이 최고점을 지나서 내려오는 시간입니다.\n");;
        printf("공식에 대입하면 첫 번째 식은 %5.2lfm/s - %5.2lfm/s = -%5.2lfm/s^2 * t1 입니다.\n", velocity_f, velocity_m_s, g);
        printf("공식에 대입하면 두 번째 식은 -%5.2lfm/s - %5.2lfm/s = -%5.2lfm/s^2 * t2 입니다.\n", velocity_f, velocity_m_s, g);

        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf("t1 = %5.2lfm/s / -%5.2lfm/s^2 입니다.\n", delta_velocity1, g);
        printf("t2 = %5.2lfm/s / -%5.2lfm/s^2 입니다.\n", delta_velocity2, g);
        printf("따라서 t1 = %5.2lfs와 t2 = %5.2lfs 두 개의 답이 나옵니다.\n", time_1, time_2);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("돌이 올라갈 때 %5.2lfm 지점을 지나는 시간 t1 = %5.2lfs 입니다.\n", height, time_1);
        printf("돌이 내려갈 때 %5.2lfm 지점을 지나는 시간 t2 = %5.2lfs 입니다.\n\n", height, time_2);

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


// printf("v = Δy / Δt \n");
// printf("v = y - y0 / t - 0 \n");
// printf("v = %5.2lf / %5.2lf \n", height, t);

// printf("y = y0 + v * t \n");