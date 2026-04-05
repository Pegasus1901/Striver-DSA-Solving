#include <iostream>

int main(){
    //Using if else check weather adult or not
    int age=19;
    if (age<=18)
    {
        std::cout<<"Young"<<std::endl;
    }else
    {
        std::cout<<"Not Young"<<std::endl;
    }
    
    //Use else-if to find correct driving age
    if (age<=18)
    {
        std::cout<<"Not Eligible"<<std::endl;
    }
    else if (age>18 && age<55)
    {
        std::cout<<"Eligible"<<std::endl;
    }
    else
    {
        std::cout<<"Invalid input"<<std::endl;
    }
    
    return 0;
}