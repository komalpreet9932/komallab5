#include <iostream>
#include <fstream>
#include <math.h>


int main()

{
    int s,t;
    std::cout<<"Enter the width and height of a right angled triangle";
    std::cin >>s>>t;
    auto u = sqrt(pow(s,2)+pow(t,2));
    std::cout<<"The answer is "<<u;

   std:: ofstream myfile;
    myfile.open ("example.txt");
    myfile<<"writing this to a file. "<< u;
    myfile.close();

    
    return 0;
}