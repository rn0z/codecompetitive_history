#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int L, dir; //+x(1) -x(2) +y(3) -y(4) +z(5) -z(6)
    while (scanf("%d", &L) && L) {
        char xyz[2];
        dir = 1;
        for (int i = 0; i < L - 1; i++) {
            scanf("%s", xyz);
            if (!strcmp(xyz, "+y"))
                if (dir == 1) dir = 3;
                else if (dir == 2) dir = 3;
                else if (dir == 3) dir = 2;
                else if (dir == 4) dir = 1;
            if (!strcmp(xyz, "-y"))
                if (dir == 1) dir = 4;
                else if (dir == 2) dir = 4;
                else if (dir == 3) dir = 1;
                else if (dir == 4) dir = 2;
            if (!strcmp(xyz, "+z"))
                if (dir == 1) dir = 5; 
                else if (dir == 2) dir = 6;
                else if (dir == 5) dir = 2;
                else if (dir == 6) dir = 1;
            if (!strcmp(xyz, "-z"))
                if (dir == 1) dir = 6;
                else if (dir == 2) dir = 5;
                else if (dir == 5) dir = 1;
                else if (dir == 6) dir = 2;
            else continue;
        }
        if (dir == 1) printf("+x");
        if (dir == 2) printf("-x");
        if (dir == 3) printf("+y");
        if (dir == 4) printf("-y");
        if (dir == 5) printf("+z");
        if (dir == 6) printf("-z");
        printf("\n");
        //           VS
        /*if (dir== 1) printf("+x\n");
        else if (dir== 2) printf("-x\n");
        else if (dir== 3) printf("+y\n"); 
        else if (dir== 4) printf("-y\n"); 
        else if (dir== 5) printf("+z\n");
        else (dir== 6) printf("-z\n");*/
    }
    return 0;
}
