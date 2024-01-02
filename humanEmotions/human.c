#include <stdio.h>
<<<<<<< HEAD



int main(){
    printf("hello");
=======
#include <string.h>
#include <stdbool.h>


//human Emotions 
char Emotions[5][6] = {"see","touch","small","eat","hear"};
//value variable for compare
int value;

/*Human Emotions Project*/
 char emotionFunc(){
   //get from user emotions
    printf("What is your emotions:");
   //emotions variable
    char emotions[6];
   //user inputs
    //fgets(emotions,sizeof(emotions),stdin);
    scanf("%s",&emotions);
  int length = sizeof(Emotions) / sizeof (Emotions[0]);
  //loop in Emotions
  for (int i = 0; i < length ; i++ ){
      // compare user emotions with emotions array;
      value = strcmp(Emotions[i],emotions);
      //print value
      printf("%d\n",value);
      //check value for choos func
      if(value == 0){
        printf("your emotions is : %s\n",emotions);
        break;
      }else{
        printf("%s\nit is not human emotion;",emotions);
        break;
      }
    } 
};

/*main function*/
int main(){
     char emo = emotionFunc();
    // // declare function
     printf("%s",emo);
<<<<<<< HEAD
    
>>>>>>> human-emotions
=======
>>>>>>> human-emotions
}