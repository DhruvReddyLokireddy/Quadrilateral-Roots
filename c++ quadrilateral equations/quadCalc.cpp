#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter value of A: ";
    std::cin >> a;
    
    std::cout << "Enter value of B: ";
    std::cin >> b;

    std::cout << "Enter value of C: ";
    std::cin >> c;

    double ans = ((-1)*b+sqrt(pow(b, 2)-(4)*(a)*(c)))/(2*a);
    double ans2 =  ((-1)*b-sqrt(pow(b, 2)-(4)*(a)*(c)))/(2*a);

    std::cout << ans << '\n';
    std::cout << ans2;

    return 1;
}