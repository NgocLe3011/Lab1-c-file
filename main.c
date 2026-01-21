/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Ngoc Le
//n01643011

#include <stdio.h>

struct Account { //define struct
    unsigned int account_number;
    char account_type;
    char *last_name;
    char *first_name;
    float balance;
    char reserved[6];

};

void printsizes (void) { //create a funtion that can print out sizes
    printf("size of char: %zu bytes \n",sizeof(char)); //this line will print out the size of char
    printf("size of short: %zu bytes \n",sizeof(short)); //this line will print out the size of short
    printf("size of int: %zu bytes \n",sizeof(int)); //this line will print out the size of int
    printf("size of long: %zu bytes \n",sizeof(long)); //this line will print out the size of long
    printf("size of float: %zu bytes \n",sizeof(float)); //this line will print out the size of float
    printf("size of double: %zu bytes \n",sizeof(double)); //this line will print out the size of double
    printf("size of pointer char: %zu bytes \n",sizeof(char*)); //this line will print out the size of pointer char
    printf("size of pointer short: %zu bytes \n",sizeof(short*)); //this line will print out the size of pointer short
    printf("size of pointer int: %zu bytes \n",sizeof(int*)); //this line will print out the size of pointer int
    printf("size of pointer long: %zu bytes \n",sizeof(long*)); //this line will print out the size of pointer long
    printf("size of pointer float: %zu bytes \n",sizeof(float*)); //this line will print out the size of pointer float
    printf("size of pointer double: %zu bytes \n",sizeof(double*)); //this line will print out the size of pointer double
    printf("size of struct: %zu bytes \n",sizeof(struct Account)); //this line will print out the size of struct 
    printf("size of pointer struct: %zu bytes \n",sizeof(struct Account*)); //this line will print out the size of pointer struct
    
}

int main(void) {
    printsizes(); //call the function
    return 0;
}

