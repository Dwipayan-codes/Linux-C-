#include <iostream>
#include <unistd.h>

int main()
{
    int fd[2];

    pipe(fd);

    pid_t pid = fork();

    if(pid == 0)
    {
        close(fd[0]);

        write(fd[1],
              "Hello",
              6);
    }
    else
    {
        close(fd[1]);

        char buffer[100];

        read(fd[0],
             buffer,
             sizeof(buffer));

        std::cout << buffer;
    }
}
