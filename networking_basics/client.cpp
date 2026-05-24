#include<iostream>
#include<unistd.h>
#include<arpa/inet.h>
#include<cstring>

int main()
{
  int sock = socket(AF_INET, SOCK_STREAM, 0);

  sockaddr_in server;

  server.sin_family = AF_INET;

  server.sin_port = htons(8080);

  inet_pton(AF_INET, "127.0.0.1", &server.sin_addr);

  const char* msg = "Hello Server\n";

  send(sock, msg, strlen(msg), 0);

  close(sock);
}
