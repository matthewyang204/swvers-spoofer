#include <stdio.h>
#include <string.h>

#include "contains.h"

#ifndef PRODUCTNAME
#define PRODUCTNAME "Mac OS X"
#endif

#ifndef PRODUCTVERSION
#define PRODUCTVERSION "10.5.8"
#endif

#ifndef BUILDVERSION
#define BUILDVERSION "9L31a"
#endif

void printProductName(){
    puts(PRODUCTNAME);
}

void printProductVersion(){
    puts(PRODUCTVERSION);
}

void printBuildVersion(){
    puts(BUILDVERSION);
}

void printAll(){
    printf("ProductName:    %s\n", PRODUCTNAME);
    printf("ProductVersion: %s\n", PRODUCTVERSION);
    printf("BuildVersion:   %s\n", BUILDVERSION);
}

void main(int argc, char *argv[]){
    if (argc == 1){
        printAll();
        return;
    }

    int i = 0;
    if (contains_str("-productName", argv, argc)){
        printProductName();
    } else if (contains_str("-productVersion", argv, argc)){
        printProductVersion();
    } else if (contains_str("-buildVersion", argv, argc)){
        printBuildVersion();
    } else {
        puts("Usage: sw_vers [-productName|-productVersion|-buildVersion]");
    }
}
