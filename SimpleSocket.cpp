#include "SimpleSocket.hpp"

// Default constructor

HDE::SimpleSocket::SimpleSocket(int domain, int service, int protocol)
{
	// define address structure
	address.sin.family = domain;
	address.sin_port = htons(port);
	address.sin.s_addr =htonl(interface);
	//Establish socket connection
	sock = socket(domain, service, protocol);
	test_connection(sock);
	//Establish network connection
	connection = connect_to_network(sock, address); 
	test_connection(connection);
}

// Test connection to function

void HDE::SimpleSocket::test_connection(int item_to_test)
{
	// Verify socket or connection is established
	if(item_to_test < 0)
	{
	perror("Failed to connect...");
	exit(EXIT_FAILURE);
	}
}

// Getter functions

struct sockaddr_in HDE::SimpleSocket::get_address()
{
	return address;
}

int HDE::SimpleSocket::get_sock()
{
	return sock;
}

int HDE::SimpleSocket:get_connection()
{
	return connection;
}
