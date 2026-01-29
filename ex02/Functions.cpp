#include "Functions.hpp"

Base* generate(void){
    srand(time(NULL));
    unsigned int i = rand() % 3;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C); 
}

void identify(Base *i){
    if (dynamic_cast<A*>(i) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(i) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(i) != NULL)
        std::cout << "C" << std::endl;
}

void identify(Base &i){
    try{
        (void)dynamic_cast<A&>(i);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e){}
    try{
        (void)dynamic_cast<B&>(i);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e){}
    try{
        (void)dynamic_cast<C&>(i);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e){}
}