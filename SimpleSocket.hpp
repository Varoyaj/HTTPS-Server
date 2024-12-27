#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <stdio.h>
#include <sys/socket.h>
namespace HDE 
{
	class SimpleSocket 
	{
	public:
		SimpleSocket(int domain, int service, int protocol);
	private:
		int connection;
	};
}


#endif // !SimpleSocket_hpp
