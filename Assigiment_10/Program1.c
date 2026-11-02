#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14f;

    if (fRadius < 0.0f)
    {
        fRadius = -fRadius;
    }

    dArea = fPI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}