#include<iostream>

int fib(int n){
    if (n <= 0)
        return 0;
    else if(n == 1 || n == 2)
        return 1;
    else 
        return fib(n-1) + fib(n-2);
}
int main(){
    std::cout <<"Hello, World! Enter an integer number\n";
    int n;
    std::cin >> n;
    std::cout << fib(n);
    return 0;
}