#include <stdio.h>
struct id {
    char name[10];
    int age;
};
int main(){
    printf("structurs\n");
    struct id i1,i2;
    i1.name[10] = "rajat";
    i1.age=19;

    return 0;
}
