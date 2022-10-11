#include <stdio.h>
bmi(float weight,float height);

int main(){
    float weight;
    float height;
    scanf("%f",&weight);
    scanf("%f",&height);

    bmi(weight,height);
    return 0;
}

bmi(float weight,float height){
    float BMI = weight/(height*height);
    if(BMI<=18.4f){
        printf("Underweight");
    }else if(BMI<=24.9f && BMI>=18.4f){
        printf("Normal");
    }else if(BMI<=30.0f && BMI>=24.9f){
        printf("Overweight");
    }else{
        printf("Obese");
    }
}