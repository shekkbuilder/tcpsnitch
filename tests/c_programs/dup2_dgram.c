#define _GNU_SOURCE
#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <poll.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sys/ioctl.h>
#include <sys/sendfile.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <sys/unistd.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
  int sock;
  if ((sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0)
    return(EXIT_FAILURE);

  if (dup2(sock, 42) < 0)
    return(EXIT_FAILURE);
          
  return(EXIT_SUCCESS);
}