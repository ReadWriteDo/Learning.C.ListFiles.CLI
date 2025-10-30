#include <stdio.h>
#include "printDirHandle.h"

int main(int argc, char *argv[]){
    char *dir = argv[1];
    
    printf("%s\n",dir);
    printDir (dir);
    
    return 0;
}
