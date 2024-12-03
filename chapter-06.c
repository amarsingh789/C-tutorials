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
