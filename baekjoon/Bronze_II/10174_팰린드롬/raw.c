#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    int n;
    char a[100];

    scanf("%d", &n);
    getchar();

    for (int t = 0; t < n; t++) {
    	fgets(a, sizeof(a), stdin);

        for (int i = 0; ; i++) {
    		if (a[i] == '\n') {
        	a[i] = '\0';
        	break;
    	}
    	if (a[i] == '\0') {
        	break;
    	}
}
        int left = 0;
        int right = strlen(a) - 1;
        int palindrome = 1;

        while (left < right) {
            char l = tolower(a[left]);
            char r = tolower(a[right]);

            if (l != r) {
                palindrome = 0;
                break;
            }
            left++;
            right--;
        }

        if (palindrome)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
