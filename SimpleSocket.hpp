

#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
namespace HDE 
{
	class SimpleSocket 
	{
	private:
		struct sockaddr_in address;
		int sock;
		int connection;
	
	public:
		//Constructors
		SimpleSocket(int domain, int service, int protocol,
		 u_long interface);
		 // Virtual function to connect to network
		 virtual int connect_to_network(int sock, struct scokaddr_in address) = 0;
		 // Function to test socket and connetions
		 void test_connection(int)
		// Getter functions
		struct sockaddr_in get_address();
		int get_sock();
		int get_connection();
	};
}

#endif // !SimpleSocket_hpp