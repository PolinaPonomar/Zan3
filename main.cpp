#include <iostream>

void foo (int a, int b){
    std::cout << "Maximum = "<< ((a>b)?a:b )<< std::endl;


}
int main() {
    foo(6,90);

    return 0;
}