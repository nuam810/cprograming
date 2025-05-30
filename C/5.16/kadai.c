#include <stdio.h>

float chohokei(float x,float y);

 int main (void){
    float s=chohokei(5.9,3.4);
printf("%f\n",s);

return 0;
 }

float chohokei (float x,float y){

float s;

s=x*y;
return s;
}