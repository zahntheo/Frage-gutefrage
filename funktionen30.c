#include <stdio.h>
#include "header30.h"

void output(double temp[]){
        int i = 0;
        printf("Temperaturen:[");
        while (temp[i] != '\0'){
                printf("%f ", TEMP(temp[i]));
                ++i;
        }
        printf("]\n");
}
int input_safe(double temp[]){
        int length = 0;
        double temp1;
        int status;
        int i = 0;
        char nextchar = '\0';
        while (temp[i] != '\0'){
                ++length;
        }
        if (!(length < MAXSTRNG - 1)){
                printf("anhängen nicht möglich. String zu klein!\n");
        }else{
                printf("Bitte Temperaturwert eingeben: ");
                status = scanf("%lf", &temp1);
                if (status == EOF){
                        return BUFFER_ERROR;
                }
                if(status != 1 || (nextchar = getchar()) != '\n') {
                        if(nextchar == EOF || !flush_buff()) {
                                return BUFFER_ERROR;
                        }
                        return INVALID_INPUT;
                }
                if (temp1 < MIN_TEMP || temp1 > MAX_TEMP){
                        return INVALID_INPUT;
                }
                temp[length + 1] = temp1;
                temp[length + 2] = '\0';
        }
        return 0;

}
void combine(double temp[], double test[]){
        int length = 0, length2 = 0;
        int i = 0;
        while (temp[i] != '\0'){
                ++length;
        }
        while (test[i] != '\0'){
                ++length2;
        }
        if (length + length2 >= MAXSTRNG){
                printf("Strings zu groß!\n");
        }
        for (i = 0; i < length+length2; ++i){
                temp[length + i] = test[i];
                printf("%f\n", TEMP(temp[length + i]));
        }


}
int flush_buff(void) {
        int c;
        while((c = getchar()) != '\n' && c != EOF) {}
        return c != EOF;
}
