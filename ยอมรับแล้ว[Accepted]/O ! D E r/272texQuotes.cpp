#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

int main() {
	char input[1024];
	bool flag = true;
	while (scanf("%[^\n]%*c", input) != EOF) {
		int len = strlen(input);
		for (int i = 0; i < len; i++) {
			if (input[i] == '"') {
				if (flag) { 
					printf("%s", "``"); flag = !flag;
				} else { 
					printf("%s", "''"); flag = !flag;
				}
			} else {
				printf("%c", input[i]);
			}
		}
		printf("\n");
	}
		
	
	return 0;
}
