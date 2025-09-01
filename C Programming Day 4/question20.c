#include<stdio.h>
#include<math.h>

int main() {
    float x;
    printf("Enter The Number:");
    scanf("%f",&x);

    if(fmod(x,1.0) == 0.0 && x>=0){
    printf("This is a Whole Number");
    }
    else{
    printf("This is not a Whole Number ");
    }
}