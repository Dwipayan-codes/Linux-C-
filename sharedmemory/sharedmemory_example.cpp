#include<iostream>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<cstring>

int main()
{
   //Creating shared memory
   int shmid = shmget(IPC_PRIVATE, 1024, IPC_CREAT | 0666);

   //Copying shared memory
   char* data = (char*)shmat(shmid, NULL, 0);

   strcpy(data, "Helo shared memory");

   std::cout << data << std::endl;

   //Detach shared memort=y from current process
   shmdt(data);

   //Delete shared memory
   shmctl(shmid, IPC_RMID, NULL);

   return 0;
}
