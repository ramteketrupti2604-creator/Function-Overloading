#include <iostream>
using namespace std;
class Test {
public:
    int add(int a,int b) {
        return a+b;
    }
    int add(int a,int b,int c) {
        return a+b+c;
    }
};
int main() {
    Test t;
    cout << t.add(2,3) << endl;
    cout << t.add(1,2,3);
    return 0;
}
