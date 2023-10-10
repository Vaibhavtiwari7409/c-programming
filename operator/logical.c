#include <stdio.h>

int main (){
    int x = 20;
    int y = 1; //0

    // returns 1 (true) because 5 is greater than 3 and 5 is less
    printf("%d" , x && y);
    printf("%d\n",!y);
    printf ("%d", x > 3 && x < 50);
    printf("%d", x > 3 || x < 4);
    printf("%d", !(x > 3 && x < 60));
    return 0;
}