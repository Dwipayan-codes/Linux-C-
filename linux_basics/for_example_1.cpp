#include <iostream>
#include <unistd.h>

int main()
{
    pid_t pid = fork();

    if(pid == 0)
    {
        std::cout << "Child Process"
                  << std::endl;
    }
    else
    {
        std::cout << "Parent Process"
                  << std::endl;
    }

    return 0;
}
