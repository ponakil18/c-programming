#include <stdio.h>

int specialmultiple(int N) {
    if(N%4==0 ||N%10==4){
        return 1;
    }
    return 0;
}
