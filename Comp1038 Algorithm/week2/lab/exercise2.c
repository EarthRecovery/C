#include <stdio.h>

int main(){
    int windSpeed;

    printf("input the wind speed:\n");
    scanf("%d",&windSpeed);

    if(windSpeed<=62){
        printf("Tropical Depression\n");
    }else if(windSpeed>=63 && windSpeed <= 118){
        printf("Typhoon\n");
    }else if(windSpeed>=119 && windSpeed <= 156){
        printf("Strong Typhoon\n");
    }else if(windSpeed>=157 && windSpeed <= 192){
        printf("very Strong Typhoon\n");
    }else{
        printf("Violent Typhoon\n");
    }
}