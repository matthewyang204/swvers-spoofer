#include <stdio.h>
#include <string.h>

#include "contains.h"

const char *programName = "sw_vers";
const char *productNameFlag = "-productName";
const char *productVersionFlag = "-productVersion";
const char *buildVersionFlag = "-buildVersion";

void printProductName(){
    puts("@productname@");
}

void printProductVersion(){
    puts("@productversion@");
}

void printBuildVersion(){
    puts("@buildversion@");
}

void printAll(){
    puts("ProductName:    @productname@");
    puts("ProductVersion: @productversion@");
    puts("BuildVersion:   @buildversion@");
}

void main(int argc, char *argv[]){
    if (argc == 1){
        printAll();
        return;
    }

    int i = 0;
    if (contains_str(productNameFlag, argv, argc)){
        printProductName();
    } else if (contains_str(productVersionFlag, argv, argc)){
        printProductVersion();
    } else if (contains_str(buildVersionFlag, argv, argc)){
        printBuildVersion();
    } else {
        puts("Usage: sw_vers [-productName|-productVersion|-buildVersion]");
    }
}
