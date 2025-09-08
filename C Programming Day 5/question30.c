#include<stdio.h>
int main() {
    int marks,category;
    printf("ENTER YOUR MARKS:");
    scanf("%d", &marks);

    if(marks<=70){
        category=1;
    }
    else if(marks>70&&marks<=79){
        category=2;
    }
    else if(marks>80&&marks<=89){
        category=3;
    }
    else if(marks>90&&marks<=94){
        category=4;
    }
    else{
        category=5;
    }

    switch(category){
        case 1:
            printf("GRADE F") ;
        break;
        case 2:
            printf("GRADE C") ;
        break;
        case 3:
            printf("GRADE B") ;
        break;
        case 4:
            printf("GRADE A") ;
        break;
        case 5:
            printf("GRADE A+") ;
        break;
         default:
            printf("INVALID MARKS");
            break;

    }
    return 0;
}
