#include <iostream>
using namespace std;

void haha(int n) {
    if (n == 0) {
        return;  // base case
    }
        // process current step
    haha(n - 1); 
    cout << n<<endl;     // recursive call
}

int main() {
    haha(5);
    return 0;
}
