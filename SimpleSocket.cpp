#include "SimpleSocket.hpp"

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol)
{
	int connection = socket(domain, service, protocol);
}