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


void Excersize_2_26(int solution, int answer)

{
    double height = 15.0;
    double velocity = 22.0;
    double g = 9.80;
    double t1, t2;
    double v;


    printf("\n\n");
    printf("2-26 \n");
    printf("돌을 %.2lf m/s의 속력으로 수직하게 던져 올렸다. \n", height);

    printf("(a) 돌은 %.2lf m에서 얼마나 빨리 운동하겠는가? \n\n", velocity);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");

    printf("(c) (b)에서 답이 두 개인 이유는 무엇인가?  \n\n");


    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(a) 에서 구해야 하는것은 속력(v) 입니다.\n\n");

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy 입니다.\n\n");
        printf("여기서 ( Δy = 높이 변화 ), ( v = 나중 속도 ), ( v0 = 처음 속도 ), ( a(중력 가속도) = 9.8 ) 입니다.\n\n");
        printf("이 공식에서 -v0^2을 오른쪽으로 이항하면 +v0^2입니다.\n\n");
        printf("공식은  v^2 = v0^2 + 2 * a * Δy입니다.\n\n");
        printf("여기서 v^2을 v로 바꿔주면 식은 v = sqrt(v0^2 + 2 * a * Δy) 입니다.\n\n");
        printf("sqrt는 제곱근이라는 뜻 입니다.\n\n");
        printf("식에 대입하면 v = sqrt(%6.2lf ^ 2 + 2 * (-%6.2lf) * %6.2lf) 입니다.\n\n", velocity, g, height);
        printf("이때 a 에 (-)가 붙은 이유는 돌이 떨어지는 방향이 아래이기 때문에 (-)를 곱해줘야 합니다.\n\n");

        v = sqrt(velocity * velocity + 2 * (-g) * height);

        printf("답은 v = %6.2lf m/s 입니다.\n\n", v);

        printf("=================================================================\n");

    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("답은 v = %6.2lf m/s 입니다.\n\n", v);

        printf("=================================================================\n");
        printf("\n\n\n");

    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?  \n\n");

        printf("관련 공식은 v = v0 + a * t 입니다.\n\n");
        printf("돌이 올라가는 시간과 내려오는 시간이 있기 때문에 공식은 2개가 됩니다.\n\n");
        printf("첫번째 식은 v = v0 + a * t1 입니다.\n\n");
        printf("두번째 식은 -v = v0 + a * t2 입니다.\n\n");
        printf("t1 = 돌이 올라가는 시간이고, t2 = 돌이 최고점을 지나서 내려오는 시간입니다.\n\n");
        printf("공식에 대입하면 첫번째 식은 %6.2lf m/s = %6.2lf m/s -%6.2lf m/s^2 * t1 입니다.\n\n", v, velocity, g);
        printf("공식에 대입하면 두번째 식은 -%6.2lf m/s = %6.2lf m/s -%6.2lf m/s^2 * t2 입니다.\n\n", v, velocity, g);
        printf("공식을 풀어보겠습니다.\n\n");

        t1 = (v - velocity) / -g;
        t2 = (-v - velocity) / -g;

        printf("첫번째 식을 풀면 %6.2lf m/s -%6.2lf m/s = -%6.2lf m/s^2 * t1 이 되고\n\n", v, velocity, g);
        printf("t1 = (%6.2lf m/s - %6.2lf m/s) / - %6.2lf m/s^2 이 됩니다.\n\n", v, velocity, g);

        printf("두번째 식을 풀면 -%6.2lf m/s -%6.2lf m/s = -%6.2lf m/s^2 * t2 이 되고\n\n", v, velocity, g);
        printf("t2 = (-%6.2lf m/s - %6.2lf m/s) / -%6.2lf m/s^2 이 됩니다.\n\n", v, velocity, g);
        printf("이 식을 풀면 t1 = %6.2lf s 와 t2 = %6.2lf s 두 개의 답이 나옵니다.\n\n", t1, t2);

        printf("=================================================================\n");
    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("답은 t1 = %6.2lf s 와 t2 = %6.2lf s 입니다.\n", t1, t2);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)

    {
        printf("\n\n\n");
        printf("=================================================================\n");
        // your code here
        printf("(c) (b)에서 답이 두 개인 이유는 무엇인가?  \n\n");

        printf("위로 던진 돌이 %6.2lf를 지나 최고점에서 정지하고 아래로 떨어지면서 다시 %6.2lf를 지나기 때문입니다.\n\n", height, height);

        printf("=================================================================\n");

    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("위로 던진 돌이 %6.2lf를 지나 최고점에서 정지하고 아래로 떨어지면서 다시 %6.2lf를 지나기 때문입니다.\n\n", height, height);

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