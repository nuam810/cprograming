#include <stdio.h>
float tasu(float a,float b);
float hiki(float a,float b);
float kake(float a,float b);


int main (void){
  int mode;
    float a, b, n;

    printf("１～３の数字を入力してください\n");
    scanf("%d",&mode);
    printf("一つ目の値:\n");
    scanf("%f",&a);
    printf("二つ目の値:\n");
    scanf("%f",&b);

   if(mode==1){
printf ("足し算を選択しました\n");
   n=tasu(a,b);
   
}else if(mode==2){
   printf("引き算を選択しました\n");
   n = hiki(a,b)
   
}else if(mode==3){
    printf("掛け算を選択しました\n");
    n=kake(a,b);
}
   printf("答えは%fです\n",n);
   return 0;
}
   
float tasu (float a, float b){
    return a+b;
}
   
  float hiku(float a, float b){
   return a-b;
  }
   float kake(float a, float b){
    return a*b;
   }
   
   
   


