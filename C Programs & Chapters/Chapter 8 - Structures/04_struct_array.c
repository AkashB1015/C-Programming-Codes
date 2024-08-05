#include <stdio.h>
#include <string.h>

struct employee {
    int code; 
    float salary;
    char name[10];
}; 

int main() {
    struct employee facebook[100];
    facebook[0].code = 77;
    facebook[1].code = 101;

    struct employee Ansh = {100, 71.22, "Akash"}; 
    printf("%d %f %s", Ansh.code, Ansh.salary, Ansh.name);
    
    return 0;
}
