# include<stdio.h>
AREA OF CIRCLE CODE 
int main(){
    float radius;
    printf("enter the radius");
    scanf("%f", &radius);

    // printf("area of circle will be %f", 3.14*radius*radius);
    int b = 3.14*radius *radius;
    printf("area will be %f", b);
    return 0 ;
}
AREA OF SQUARE CODE 
    int main(){
    int side;
    printf("enter side");
    scanf("%d", &side);
    
    printf("area will be %d", side*side);
    // int a = side*side;
    // printf("side is %d",a);
    return 0;
}
// using conditional statements
int main(){
    int age;
    printf("enter age");
    scanf("%d", &age);
    if (age>18){
      printf("adult\n");
    }else if (age>13 && age<18){
      printf("Teenager\n");
    }else{
        printf("child\n");
    }
    printf("age checker");
    return 0;
}
