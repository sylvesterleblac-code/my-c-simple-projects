#include<stdio.h>
#include<math.h>
float area (float a, float b)
{float a, b, area;
return area = 0.5((a*a) + (b*b));
}
float perimeter(float a, float b)
{float a, b, perimiter, c;
c = sqrt((a*a) + (b*b));
return perimiter = a + c + c;
}
float hypotenuse(float a, float b)
{
float a, b, c;
c = sqrt((a*a) + (b*b));
return c;
}
int main()
{float a, b, area, perimeter, hypotenuse;
printf("Input the base: \n");
scanf("%f", &a);
printf("Input the height: \n");
scanf("%f", &b);
printf("The area is %f.",area);
printf("The perimeter is %f.", perimeter);
printf("The hypotenuse is %f.", hypotenuse); 
return 0;
}
