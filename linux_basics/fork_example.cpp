#include<iostream>
#include<unistd.h>

int main()
{
    fork();
    fork();
    fork();

    std::cout<< " Hello I am - " << getpid() <<std::endl;
    return 0;
}
