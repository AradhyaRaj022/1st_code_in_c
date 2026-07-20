#include <stdio.h>
int main(){

int age;
printf("Enter your age");
scanf("%d", &age);

if(age>18 && age<60){
    printf("you can drive");
}
else if (age>60){
    printf("you're too old to drive");
}
else{
    printf("you can't drive");
}
return 0;
}
