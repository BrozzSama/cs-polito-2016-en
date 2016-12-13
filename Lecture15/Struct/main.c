#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
This definition is incorrect because the struct foo doesn't exist outside main
void printpoint(struct foo i);
*/

//In order to define a function that accepts prototype the struct MUST be outside main

struct foo_global {
        int i;
        double d;
        char str[32];
    };

void printpoint(struct foo_global i);

//A struct can be defined as a new type
//So in this case global_struct is a struct of type foo_global
typedef foo_global global_struct;

int main()
{
    //Define the structure
    struct foo {
        int i;
        double d;
        char str[32];
    };
    printf("My struct size is (actual size + padding) is %d\n", sizeof(struct foo));
    //Initialize type
    struct foo element1; //Define element 1 of structure foo!
    struct foo element2;
    struct foo_global element_global;
    element1 = element2; //Copy all fields of p1 in p2

    //Using the 'dot' operator I can access a field inside a struct
    element1.i = 0;
    element1.d=0.34;
    strcpy(element1.str, "Test");
    printpoint(element_global);
    return 0;
}

void printpoint(struct foo_global i){
    printf("Point at %p", &i.i);
}
