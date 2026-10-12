#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX 8

int main(int argc, char* argv[]){
    int desc_zrod, desc_cel;
    int lbajt;
    char buf[MAX];

    desc_zrod = open(argv[1], O_WRONLY, 0640);
    desc_cel = open(argv[2], O_RDWR, 0640);
    while((lbajt = read(desc_zrod, buf, MAX)) > 0){
        write(desc_cel, buf, MAX);
    }
    return 0;
}
