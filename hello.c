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
//switch statement ;
    int day; //1-mon,2-tues,3-wed so on 
    printf("enter day(1-7)");
    scanf("%d",&day);
    switch(day){
        case 1: printf("monday\n");
                 break;
        case 2: printf("tuesay\n");
                 break;
        case 3: printf("wednesday\n");
                  break;
        case 4: printf("thrusday\n");
                  break;
        case 5: printf("friday\n");
                  break;
        case 6: printf("saturday\n");
                 break;
        case 7: printf("sunday\n");
                 break;
        default: printf("that is not valid day\n");
    }
    return 0;
}
int number ;
    printf("enter the number");
    scanf("%d", &number);

    if (number>=0)
    {
        printf("number is positive\n");
        if (number % 2 == 0)
        {
           printf("number is even\n");
        }else{
            printf("number is odd\n");
        }
    }else{
        printf("number is negative\n");
    }
int marks;
    printf("enter the number(0-100) :");
    scanf("%d", &marks);
    if (marks >= 0 && marks<=30){
        printf("Fail\n");
    }else if(marks > 30 && marks <= 100){
       printf("Pass\n");
    }else{
        printf("wrong number\n");
    }
    return 0 ;
int marks;
    printf("enter the number(1-100):");
    scanf("%d", &marks);
    if (marks < 30){
       printf("C\n");
    }
    else if (marks >= 30 && marks < 70){
        printf("B\n");
    }
    else if (marks >= 70 && marks < 90)
    {
       printf("A\n");
    }
    else{
        printf("A+");
    }
    return 0;
}
//this code will be detect captial/small letter
int main(){
    char ch;
    printf("enter thr character: ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z'){
       printf("Capital Letter\n");
    } else if (ch >= 'a' && ch <= 'z'){
       printf("lower case\n");
    }else{
        printf("other letter\n");
    }  
}
