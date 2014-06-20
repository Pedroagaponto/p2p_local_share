#include <iosstream>
#include "httpRequester.h"
#include "reciver.h"
#include "Brain.h"


int main()
{
	HttpRequester http_Requester();
	MyProtocolSender myProtocolReciver();
	DB database();

	Brain brain((I_HTTP_R*)&httpRequester(), (I_MP_S*)&myProtocolReciver, (I_DB*)&database);

	MyProtocolReciver
}