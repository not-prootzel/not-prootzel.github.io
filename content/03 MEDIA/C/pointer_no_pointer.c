#include <stdio.h>

typedef struct MyStruct {
    char a;
    long long int l1;
    long long int l2;
    long long int l3;
    long long int l4;
    long long int l5;
    long long int l6;
    long long int l7;
    long long int l8;
    long long int l9;
    long long int l10;
    long long int l11;
    char b;
} MyStruct;

typedef struct AB{
    char a;
    char b;
} AB;


AB pass_by_copy(MyStruct s) {
    return (AB){s.a, s.b}; 
}


AB pass_by_ref(MyStruct *s) {
    return (AB){(*s).a, (*s).b};
}

void main() {

    for (int i = 0; i < 10000000; i++)
    {
        MyStruct s = {.a='c', .b='d'};
        pass_by_ref(&s);
    }
    
}

