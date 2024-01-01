#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* function createFile*/
bool createFIle(){
    FILE *fptr;
    // create txt file 
    fptr = fopen("contact.txt","w");
    // close file
    fclose(fptr);
}


// function get userInformation

void getInformation(){
    char name [30];
    int Age ;
    //give user name 
    fgets(name,30,stdin);
    /// give user age
    scanf("%d",&Age);
    // check information
    if (name && Age){
        /*create the contact file */
        createFIle();
            FILE *user;
            //open contact  file;
            user = fopen("contact.txt","a");
            // append file
            fprintf(user,"%s \t %d",name,Age);
            // close file
            fclose(user);
        
        // inset the contact to file

    }else{
        printf("please start again");
    }
};
void hello(){
    printf("hello new contact");
};

// main funtion 
int main(){
    getInformation();
    printf("hello world");
}
