/* printDirHandle.h */
#pragma once
#include <dirent.h>

DIR *printDir(char *workDir){
    char *error = "Failed to open directory";
    DIR *printingDir = opendir("./");
    struct dirent *dirThatHasBeenRead = readdir(printingDir);
    char *file1 = dirThatHasBeenRead->d_name;
    long int pos = telldir(printingDir);
    printf("%lu\n%s\n%ld\n",dirThatHasBeenRead->d_ino, file1,pos);
    rewinddir(printingDir);
    return 0;
}
