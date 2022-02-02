#include <stdio.h>
#include "show.c"

void fn2_ex213(char *msg, int x){
    printf("%s", msg);
    printf("%x\n", x);
    show_bits_int(x);
    printf("\n");
}

void ex213(){
    int x = 0x66; // 0110 0110
    int y = 0x93; // 1001 0011
    printf("ex 2.13:\n");
    fn2_ex213("x & y = ", x & y); // 000...0000 0010
    fn2_ex213("x | y = ", x | y); // 000...1111 0111
    fn2_ex213("~x | ~y = ", ~x | ~y ); // 111...1111 1101
    /* 所有的非零参数的布尔值都为1 */
    fn2_ex213("x & !y = ", x & !y); // 0
    fn2_ex213("x && y = ", x && y ); // 1
    fn2_ex213("x || y = ", x || y ); // 1
    fn2_ex213("!x || !y = ", !x || !y); // 0
    fn2_ex213("x && ~y = ", x && ~y); // 1
}

int fn0_ex214(int x, int y)
{
    return x==y;
}
int fn1_ex214(int x, int y){
    return (!x || y) && (!y || x);
}
void ex214(){
    int x1 = 1, y1 = 1, x2 = 0, y2 = 0;
    printf("ex 2.14:\n");
    /* x == y 等价与 非x 蕴含 y 与上 非y 蕴含 x*/
    printf("f0 is x == y.\n");
    printf("f1 is (!x || y) && (!y || x).\n");
    printf("x\ty\tf0\tf1\n");
    printf("%d\t%d\t%d\t%d\t\n", x1, y1, fn0_ex214(x1, y1), fn1_ex214(x1, y1));
    printf("%d\t%d\t%d\t%d\t\n", x1, y2, fn0_ex214(x1, y2), fn1_ex214(x1, y2));
    printf("%d\t%d\t%d\t%d\t\n", x2, y1, fn0_ex214(x2, y1), fn1_ex214(x2, y1));
    printf("%d\t%d\t%d\t%d\t\n", x2, y2, fn0_ex214(x2, y2), fn1_ex214(x2, y2));
}