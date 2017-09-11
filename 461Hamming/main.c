#include <stdio.h>

int hammingDistance(int x, int y) {
    int a[1000];
    int i = 0;
    int c=0,d=0;
    int dis=0;
    c=x^y;
    while(c!=0){
        d = c%2;
        printf("%d",d);
        c=c/2;
        a[i] = d;

        if(a[i]==1){
            dis++;
        }
        i++;
    }
    return dis;

}

int main() {
    hammingDistance(10,2);
}