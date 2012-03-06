#include <stdio.h>
#define x break
#define y case
main(int b,int**v){int*a=malloc(64),c;FILE*f=fopen(v[1],"r");while(c=fgetc(f)){switch(c){y'>':++a;x;y'<':--a;x;y'+':++*a;x;y'-':--*a;x;y'.':putchar(*a);x;y',':*a=getchar();x;y'[':if(!*a){while(fgetc(f)!=']');}else{b=ftell(f)-1;};x;y']':fseek(f,b,SEEK_SET);x;}}}
