#ifndef EPOLL_H
#define EPOLL_H

#include "sys/epoll.h"

#define MAXEVENTS 10240

int ns_epoll_create(int flags);
int ns_epoll_add(int epoll_fd, int fd, connection_t *c, uint32_c events);
int ns_epoll_del(int epoll_fd, int fd, connection_t *c, uint32_c events);
int ns_epoll_mod(int epoll_fd, int fd, connection_t *c, uint32_c events);
int ns_epoll_wait(int epoll_fd, int fd, connection_t *c, uint32_c events);

#endif
