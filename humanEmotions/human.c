#include <stdio.h>
<<<<<<< HEAD



int main(){
    printf("hello");
=======
#include <string.h>
#include <stdbool.h>




//create array emotions
char emotionsHumans [5][5] = {"see","touch","eat","small","hear"};

/*Human Emotions Project*/
 char emotionFunc(){
   //get from user emotions
    printf("What is your emotions:");
   //emotions variable
    char emotions[6];
   //user inputs
    fgets(emotions,sizeof(emotions),stdin);
   //print user emotions
   // check emotions 
   // get lenght of array
   int lenght = sizeof(emotionsHumans)/sizeof(emotionsHumans[0]);
   int i = 0;
   //loop in emotions
   for( i  = 0 ; i < 6;i++){
        if (emotions == emotionsHumans[i]){
            printf("your emotions is :%s\n",emotionsHumans[i]);
            break;
        }else{
            printf("its not a human emotions");
            break;
        }
   }
    return 0;
};

/*main function*/
int main(){
     char emo = emotionFunc();
    // // declare function
     printf("%s",emo);
    
>>>>>>> human-emotions
}