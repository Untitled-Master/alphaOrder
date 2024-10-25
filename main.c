#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x[200];
    char y[200];
    char z[200];
    printf("[+] String Reader: \n");
    printf("[+] Enter the first string: \n");
    scanf("%s", x);
    printf("[+] Enter the second string: \n");
    scanf("%s", y); 
    printf("[+] Enter the third string: \n");
    scanf("%s", z); 
    // Comparing elx wel ely
    int comparison = strcmp(x, y);
    // -1 = x, 0 = x,b , 1 = y
    if(comparison == 0){
        int comparison2 = strcmp(x, z);
        if(comparison2 == 0){
            printf("%s %s %s", x,y,z);
        }
        if(comparison2 == -1){
            printf("%s %s %s", x,y,z);
        }
        else{
            printf("%s %s %s", z,x,y);
        }
    }
    if(comparison == -1){
        int comparison2 = strcmp(y, z);
        if(comparison2 == 0){
            printf("%s %s %s", x,y,z);
        }
        if(comparison2 == -1){
            printf("%s %s %s", x,y,z);
        }
        else{
            int comparison3 = strcmp(x, z);
            if(comparison3 == 0){
                printf("%s %s %s", x,z,y);
            }
            if(comparison3 == -1){
                printf("%s %s %s", x,z,y);
            }
            else{
                printf("%s %s %s", z,x,y);
            }
        }
    }
    if(comparison == 1){
        int comparison4 = strcmp(x, z);
        if(comparison4 == 0){
            printf("%s %s %s",y, x,z);
        }
        if(comparison4 == -1){
            printf("%s %s %s", y, x,z);
        }
        else{
            int comparison5 = strcmp(y, z);
            if(comparison5 == 0){
                printf("%s %s %s",z,y, x);
            }
            if(comparison5 == -1){
                printf("%s %s %s", y,z,x);
            }
            else{
                printf("%s %s %s", z,y, x);
            }
        }
    }
}
