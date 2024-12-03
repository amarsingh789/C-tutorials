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
