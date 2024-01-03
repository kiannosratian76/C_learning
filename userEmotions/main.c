#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* user Emotions project */
int see = 10;
int touch = 20;
int eat = 30;
int getuserNumber;

void getuserEmo(){
    /*aske the qustion*/
    printf("please insert your number");
    //get user information 
    scanf("%d",&getuserNumber);
    //print the number 
    if (getuserNumber > 0 && getuserNumber < 10 ){
        printf("see");
    }else if( getuserNumber > 10 && getuserNumber < 20){
        printf("touch");
    }else if (getuserNumber > 20 && getuserNumber < 30 ){
        printf("eat");
    }
};

/*main function for excute main.c*/
int main (){
getuserEmo();



}