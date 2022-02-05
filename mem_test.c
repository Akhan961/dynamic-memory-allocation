#include "my_malloc.h"
#include <stdio.h>
#include <stdlib.h>

int main () {
    char* b = my_malloc(1);
    *b = 'a';
    long double* a = my_malloc(10);
    *a = 4;

    printf ("value: %c\n", *b);
    printf ("value: %Lf\n", *a);

    my_free(b);
    my_free(a);

    // freePool();

    //to show that my_free is working and 
    for(int i = 0; i < 1001; i++){
        int* c = my_malloc(4);
        *c = 4;
        my_free(c);
    }

    //using indexes but its not working
    // int* c = 0;
    // for(int i = 0; i < 1000; i++){
    //     c = my_malloc(4);
    //     *c = 4;
    // }
    // my_free(c);

    //anything over i gives error
    for(int i = 0; i < 2000; i++){
        my_malloc(4);
    }



    for(int i = 0; i < 1001; i++){
        int* d = my_malloc(16);
        *d = 8;
        my_free(d);
    }

    // int* d = 0;
    // for(int i = 0; i < 1000; i++){
    //     d = my_malloc(16);
    //     *d = 8;
    // }
    // my_free(d);
    for(int i = 0; i < 2300; i++){
        my_malloc(16);
    }



    for(int i = 0; i < 51; i++){
        int* g = my_malloc(1024);
        *g = 9;
        my_free(g);
    }

    // int* g = 0;
    // for(int i = 0; i < 50; i++){
    //     g = my_malloc(1024);
    //     *g = 9;
    // }
    // my_free(g);
    for(int i = 0; i < 50; i++){
        my_malloc(1024);
    }



    for(int i = 0; i < 3; i++){
        int* e = my_malloc(10000);
        *e = 11;
        my_free(e);
    }

    // int* e = 0;
    // for(int i = 0; i < 2; i++){
    //     e = my_malloc(10000);
    //     *e = 11;
    // }
    // my_free(e);
    for(int i = 0; i < 2; i++){
        my_malloc(10000);
    }
    


    for(int i = 0; i < 2; i++){
        int* f = my_malloc(20000);
        *f = 15;
        my_free(f);
    }

    int* f = 0;
    for(int i = 0; i < 1; i++){
        f = my_malloc(20000);
        *f = 15;
    }
    my_free(f);
    
    freePool();
    
    return 0;
}