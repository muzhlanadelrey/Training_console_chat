#include "Chat.h"

void Chat::start()
{
	_chatWork = true;
}

bool Chat::chatWork() const
{
	return _chatWork;
}
