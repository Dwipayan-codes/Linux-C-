#include<iostream>
#include<unistd.h>
#include<arpa/inet.h>
#include<cstring>

int main()
{
  //Create socket
  int server_fd = socket(AF_INET, SOCK_STREAM, 0);

  //Create port
  sockaddr_in address;
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(8080);

  //bind
  bind(server_fd, (sockaddr*)&address, sizeof(address));

 //listen
 listen(server_fd, 5);

 std::cout << "Waiting ....." << std::endl;

 int client_socket = accept(server_fd, NULL, NULL);

 char buffer[1024] = {0};

 recv(client_socket, buffer, sizeof(buffer), 0);

 std::cout << "Client says: " << buffer << std::endl;

 close(client_socket);

 close(server_fd);
}
