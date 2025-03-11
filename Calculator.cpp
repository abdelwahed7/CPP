#include <iostream>
 int main(){
std:: cout<< " please Enter any two Namber :";
double num_1 , num_2;
std:: cin>>num_1>>num_2;
std:: cout<< " please Enter any operation :";
char operation;
std::cout << "Enter + for addition,\n";
std::cout << "- for subtraction,\n";
std::cout << "* for multiplication,\n";
std::cout << "/ for division." << std:: endl;
std::cin >> operation;
switch (operation) {
    case '+':
        std::cout << "Output: " << (num_1 + num_2) << std::endl;
        break; 
    case '-':
        std::cout << "Output: " << (num_1 - num_2) << std::endl;
        break;
    case '*':
        std::cout << "Output: " << (num_1 * num_2) << std::endl;    
        break;
    case '/':
        if (num_2==0)
             std::cout << " Error! Division by zero is not allowed: " << std::endl;
        else
             std::cout << "Output: " << (num_1 / num_2) << std::endl; 
            break;
    default:
            std::cout << "Invalid input! Please enter a valid operation." << std::endl;            
}

return 0;
 } 