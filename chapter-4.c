//this is for loop
#include<stdio.h>
int main(){
   for(int i=1; i<= 10; i=i+1 ){
        printf("Amar Singh\n");
    }
    for(float i =1.0; i<= 5.0; i=i+1){
        printf("%f\n",i);
    }
    for(char ch='a'; ch<='z'; ch++){
        printf("%c\n",ch);
    }
   //while loop
    int n;
    printf("enter the no: ");
    scanf("%d",&n);

    int i = 0;
    while(i<= n){
        printf("%d\n", i);
        i++;
    }

   //Do While Loop
    int i = 5;
   do{
    printf("%d\n",i);
    i--;
   }while(i>=1);

     return 0;
}
