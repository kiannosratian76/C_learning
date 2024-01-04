#include <stdio.h>
#include <string.h>

int numbers[] = {3,1,3,4,66,7,8,9,10};

int fin_max(int myArr [],int length){
int max;
max = myArr[0];
    for(int i = 0 ; i < length; i++ ){
        if (myArr[i] > max )  max =myArr[i];
    }
    printf("the max number is %d\n",max);
}

int main(){
    int max1 = fin_max(numbers,9);
}