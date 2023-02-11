#include <stdio.h>
int main(){
    int a, b, c;
    printf("please enter the value of a");
    scanf("%d", &a);
    printf("please enter the value of b");
    scanf("%d", &b);
    printf("please enter the value of c");
    scanf("%d", &c);
    printf("The first value of x is : %d", (-b+((b*b)-4*a*c)/(2*a)));
    printf("The second value of x is : %d", (-b-((b*b)-4*a*c)/(2*a)));
    return 0;
}


