#include <stdio.h>
#include <stdlib.h>
 int theon( int numbers[]){
    int max=numbers[0];
    for(int i=0;i<5;i++){
        if(numbers[i]>max){
       max=numbers[i];
        }
       }
 }

int main(){
int max;
 int numbers[5];
for (int i=0;i<5;i++){
 printf("Enter the number %d: ",i);
 scanf("%d",&numbers[i]);
 }

int maxNumber=theon(numbers);
printf("The maximum number is %d",maxNumber);

return 0;
}



















