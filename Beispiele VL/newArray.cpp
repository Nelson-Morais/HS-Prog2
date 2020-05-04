#include <iostream>

using namespace std;

void newArray(int **p, int length) {
    *p=new int[length];
}

int main() {
int *p {0};
newArray(&p,10);
p[0]=2;
return 0;
}
