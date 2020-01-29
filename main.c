#include <stdio.h>
void draw(int h);
int main(void)
{
    int n ;
    printf("n: ");
    scanf("%i", &n);
    draw(n);
}

void draw(int h) {

    if(h == 0){
        return ;
    }
    draw(h-1);  // using recursion instead of inner loop

    for (int i = 0 ; i < h ; i++) {
        printf("#");
    }
    printf("\n");
}