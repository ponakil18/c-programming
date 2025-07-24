#include <stdio.h>

int batterystatus(int p) {
    if(p>=50)
        return 1;
    else if(p<50&&p>=20)
        return 0;
    else
     return -1;
}
