#include <sys/socket.h>
#include <unistd.h>
#include <sys/uio.h>
#include <sys/sendfile.h>
#include <poll.h>
#include <netinet/in.h>
#include <stdlib.h>

int main(void) {
  int sock;
  if ((sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1)
    return(EXIT_FAILURE);
          
  return(EXIT_SUCCESS);
}
