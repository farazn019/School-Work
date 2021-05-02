#include <netinet/in.h>
#include <sys/un.h>
#include <sys/socket.h>


//Internet Socked Address;
typedef uint32_t in_addr_t;
typedef unsigned short sa_family_t;

struct in_addr{
    uint32_t s_addr;
};

struct sockaddr_in{
    sa_family_t sin_family;
    in_port_t sin_port;
    struct sin_addr;
    unsigned char __pad[100];
};


//Unix Socket address
struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};


struct sockaddr{
    uint8_t sa_len;
    sa_family_t sin_family;
    char sa_data[14];

};