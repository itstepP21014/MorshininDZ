#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

char message[1024] = "Hello there!\n";
char buf[1024];
int port;

int main()
{
    int sock;
    struct sockaddr_in addr;

    sock = socket(AF_INET, SOCK_STREAM, 0);
    if(sock < 0)
    {
        perror("socket");
        exit(1);
    }

    printf("port :");
    scanf("%d", &port);

    addr.sin_family = AF_INET;
    addr.sin_port = htons(port); // или любой другой порт...
    addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    if(connect(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        perror("connect");
        exit(2);
    }
    while(1)
    {
        send(sock, message, 1024, 0);
        recv(sock, buf, 1024, 0);

        printf(buf);
        scanf("%s", message);
    }
    close(sock);

    return 0;
}
