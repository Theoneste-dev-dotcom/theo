#include <stdio.h>
#include <stdlib.h>

int main(){

int secNum=85, trialTimes=3, trial=0, number;


while(trial<trialTimes){
    trial++;

    printf("please Guess any number: ");
    scanf("%d",&number);

    if(number==secNum){
    printf("Your are right\n");
    break;
}else{

printf("your are wrong\n");

}
}

if(trial==trialTimes){}

printf("It's the end of the Game\n");
return 0;
}
