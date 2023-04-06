#include <iostream>
#include <Windows.h>
#include "Chat2.0.h"

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Chat chat; // чат создан

	chat.start(); 
	chat.adminCreation();

	while (chat.chatWork())
	{
		chat.showMainMenu();
		while (chat.getCurrentUser())
		{
			chat.showChatMenu();
		}
	}
	
	return 0;
}
