// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
#include <iostream>
using namespace std;
void update(int *a,int *b) {
    int pa,pb;
    pa=*a+*b;
    pb=*a-*b;
    if(pb<0) pb=pb*(-1);
    cout<<pa<<endl<<pb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}
