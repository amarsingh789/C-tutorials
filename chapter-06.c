//this file is pointer file
//this code give address of machine
int main(){
    int age = 3;
    int *ptr = &age;
    //address
    //printf("%p\n", &age);
    printf("%u\n", &age);

    printf("%u\n", ptr);
     printf("%u\n", &ptr);
    return 0;
//QUESTION-01
int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("x =%d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("x =%d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x =%d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}
//    QUESTION-02
void printAddress(int n);

int main(){
    int n = 4;
    printAddress(n);
    printf("address of n is %u\n",&n );
    return 0;
}

void printAddress(int n){
    printf("address of n is %u\n",&n );
}
//QUESTION-03
//this code give sum, product and average of number;
void doWork(int a, int b, int *sum, int *prod , int *avg);

int main(){
    int a = 4,b = 6;
    int sum,prod,avg;
    doWork(a,b, &sum, &prod, &avg);
    printf("sum is %d, product is %d, avg is %d\n", sum,prod,avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
