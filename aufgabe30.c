#include <stdio.h>
#include "header30.h"

int main(void){
        int i;
        int status;
        double t1[MAXSTRNG];
        double t2[MAXI];
        printf("Test1");
        for (i = 0; i < INPUT; ++i){
                printf("Test2");
                while ((status = input_safe(t1)) != 0){
                        printf("Faslche Eingabe!\n");
                }
                while ((status = input_safe(t2)) != 0){
                        printf("Faslche Eingabe!\n");
                }
        }
        output(t1);
        printf("\n");
        output(t2);
        printf("\n");
        combine(t1,t2);
        return 0;

}
