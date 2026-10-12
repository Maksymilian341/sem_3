#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    int fd;
    fd = open(argv[1], O_RDONLY);
     
}