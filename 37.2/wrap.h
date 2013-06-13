#ifndef WRAP_H
#define WRAP_H
void perr_exit(const char *);
int Accept(int, struct sockaddr *, socklen_t *);
void Bind(int, const struct sockaddr *, socklen_t);
void Connect(int, const struct sockaddr *, socklen_t);
int Socket(int, int, int);
void Listen(int , int );
void Close(int);
size_t Read(int, void *, size_t);
size_t Write(int, void *, size_t);
ssize_t Readn(int, void *, size_t);
ssize_t Writen(int, void *, size_t);
ssize_t Readline(int, void *, size_t);
#endif
