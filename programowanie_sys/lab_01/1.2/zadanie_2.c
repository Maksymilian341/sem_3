#include <stdio.h>
#include <fcntl.h>
#define MAX 512

int main(int argc, char argv[]){
    int desc_zrod, desc_cel;
    int lbajt;
    char buf[MAX];

    desc_zrod = open(argv[1], O_RDWR);
    desc_cel = creat(argv[2], 0640);
    while((lbajt = read(desc_zrod, buf, MAX)) > 0){

    }
}
