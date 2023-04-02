#include <iostream>
#include "Chat.h"

int main() 
{
	setlocale(LC_ALL, "Russian");

	Chat chat; //Чат создан

	chat.start(); 

	while (chat.chatWork()) 
	{

	}


	return 0;
}