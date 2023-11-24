#include <stdio.h>
#include <stdlib.h>
//function myName(name[],i){
//printf("The inverse of your name is %s",name[i]){

int main (){

int i;
char name[15];
printf("Enter your name please:");
scanf("%s",name);
for(i=15;i>=0;i--){



printf("%c", name[i]);

}
return 0;
}
