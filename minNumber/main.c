#include <stdio.h>
/*find min number in array */

//create array of numbers
int numbers[] = {20,50,40,25,19,1,3,5,6};

//funtion for get min numbers
int getminNumber(int array [] , int length){
//int min for store minimum number
int min;
    //get length of array
   //int length = sizeof(array) / sizeof(array[0]);
    ///for loop in numbers
        min = numbers[0];
    // check evry number
    for (int i = 0; i < length; i++ ){
        if( numbers[i] < min  ){
            min = numbers[i];
        }
    }
    //print minimum number
     printf("%d\n",min);
    //get  value
    return min;
}

//main function for execute program
int main(){
    getminNumber(numbers,9);
}