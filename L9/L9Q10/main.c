#include <stdio.h>
#include <stdlib.h>
double convert_pole(double a){
   return a*39.37;
}
double convert_pes(double a){
   return convert_pole(a)*12;
}
int main()
{
    double metros;
    scanf("%lf",&metros);
    printf("%.3lf polegadas/n %.3lf pe",convert_pole(metros),convert_pes(metros));
    return 0;
}
