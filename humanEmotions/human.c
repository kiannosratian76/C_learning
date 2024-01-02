#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*Human Emotions Project*/
 char emotionFunc(){
   //get from user emotions
    printf("What is your emotions:");
   //emotions variable
    char emotions[6];
   //user inputs
    fgets(emotions,sizeof(emotions),stdin);
  //return value
  return emotions[6];  
};

/*main function*/
int main(){
     char emo = emotionFunc();
    // // declare function
     printf("%s",emo);
}