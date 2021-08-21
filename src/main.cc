#include"rotaliases.h"
#include<iostream>
#include<Windows.h>
int main(int args, char** argv){
    u64 inputNum, n1, n2, n3;
    
    std::cout << "choose a number, any number" << std::endl;
    std::cin >> inputNum;
    n1 = inputNum;        
    std::cout << "excellent choice!!" << std::endl;
    
    while(true){
        if(n1 % 2 != 0){
           n2 = n1*3+1;
            }
        
        if(n2 % 2 == 0){
            n3 = n2 / 2;
            }

        Sleep(500);
        std::cout << n2 << std::endl << "\n\n";
        std::cout << n3 << std::endl << "\n\n";
        n1 = n3;
        } 

    return 0;
}   