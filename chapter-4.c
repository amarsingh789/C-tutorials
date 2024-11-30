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

    // question-01
  int n;
  printf("enter the number: ");
  scanf("%d", &n);
  int sum = 0;
  for(int i =1; i<=n; i++){
    sum = sum + i;
  }
  printf("sum is %d\n",sum);

   //QUESTION -2
int n;
printf("enter the number: ");
scanf("%d", &n);

for(int i=1; i<=10; i++ ){
  printf("%d\n", n*i);
}

   //QUESTION -03
int n;
do{
  printf("enter the number: ");
  scanf("%d", &n);
  printf("%d\n", n);

  if(n % 2 != 0){
    break;
  }
}while(1);
printf("thank you");

   //QUESTION -04
int n;
do{
  printf("enter the number: ");
  scanf("%d", &n);
  printf("%d\n", n);

  if(n % 7 == 0){
    break;
  }
}while(1);
printf("thank you\n");
     return 0;
}
