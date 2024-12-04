#include <stdio.h>

#define MAX_LINES 100

int min(int arr[], int size) {
    int idx = 0;
    for(int i = 1; i < size; i++) {
        if (arr[i] < arr[idx]) {
            idx = i;
        }
    }
    return idx;
}

void solve(int lines[], int n, int m) {
    int shortest;
    for(int i = 0; i < m; i++) {
       shortest = min(lines, n);
       printf("%d\n", lines[shortest]);
       lines[shortest]++;
    } 
}

int main(void) {
    int lines[100];
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &lines[i]);
    }
    solve(lines,n,m);
}

