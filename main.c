#include <stdio.h>
#include "printDirHandle.h"

int main(int argc, char *argv[]){
//    char dir[256];
    char *dir = argv[1];
//    printf ("%s\n", "Input directory to scan.");
//    scanf ("%255s", dir);
    
    printf("%s\n", dir);
    printDir (dir);
    
    return 0;
}
