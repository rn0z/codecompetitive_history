#include <stdio.h>
#include <string.h>

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        // +x0 -x1 +y2 -y3 +z4 -z5 
        int dir = 0; // init +x
        if (n == 1) {
            printf("+x\n");
            continue;
        }
        for (int i = 1; i < n; ++i) { 
            char cmd[2] = {'\0'}; 
            scanf("%s", cmd);
            if (!strcmp(cmd, "+y")) {
                if (dir == 0)      dir = 2; 
                else if (dir == 1) dir = 3; 
                else if (dir == 2) dir = 1; 
                else if (dir == 3) dir = 0; 
            } else if (!strcmp(cmd, "-y")) {
                if (dir == 0)      dir = 3; 
                else if (dir == 1) dir = 2; 
                else if (dir == 2) dir = 0; 
                else if (dir == 3) dir = 1; 
            } else if (!strcmp(cmd, "+z")) {
                if (dir == 0)      dir = 4; // +x > +z
                else if (dir == 1) dir = 5; // -x > -z
                else if (dir == 4) dir = 1; // +z > -x
                else if (dir == 5) dir = 0; // -z > x
            } else if (!strcmp(cmd, "-z")) {
                if (dir == 0)      dir = 5; 
                else if (dir == 1) dir = 4; 
                else if (dir == 4) dir = 0; 
                else if (dir == 5) dir = 1; 
            } else {
              continue;
            }  
        }

        if (dir == 0) printf("+x\n");
        if (dir == 1) printf("-x\n");

        if (dir == 2) printf("+y\n");
        if (dir == 3) printf("-y\n");

        if (dir == 4) printf("+z\n");
        if (dir == 5) printf("-z\n");
    }


    return 0;
}
