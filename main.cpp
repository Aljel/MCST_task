#include<iostream>

int fib(int n){
    if (n <= 0)
        return 0;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++){
        std::cout << a << "\n";
        int next = a + b;
        a = b;
        b = next;
    }
}
int main(){
    std::cout <<"Hello, World! Enter an integer number\n";
    int n;
    std::cin >> n;
    fib(n);
    return 0;
}