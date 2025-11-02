/* printDirHandle.h */
#pragma once
#include <dirent.h>

DIR *printDir(char *workDir){
    char *error = "Failed to open directory";
    DIR *printingDir = opendir(workDir);
    struct dirent *dirThatHasBeenRead = readdir(printingDir);
    while(dirThatHasBeenRead != NULL){
        char *file1 = dirThatHasBeenRead->d_name;
        long int pos = telldir(printingDir);
//        printf("%lu\n%s\n%ld\n",dirThatHasBeenRead->d_ino, file1,pos);
        printf("%s\n",file1);
        dirThatHasBeenRead = readdir(printingDir);
    }
    rewinddir(printingDir);
    closedir(printingDir);
    
    return 0;
}
