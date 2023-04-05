#pragma once
#include <string>
#include <vector>
#include <memory>
#include <exception>
#include "User2.0.h"

// Исключения неверный логин и имя
class loginException : public std::exception 
{
public:
	const char* what() const noexcept override
	{
		return "Ошибка: логин занят";
	}
};
class nameException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "ОШИБКА: имя занято";
	}
};

class Chat
{
	bool _chatWork = false;
	std::vector<User> _users;
	std::vector<Message> _messages;
	std::shared_ptr<User> _currentUser = nullptr;

	std::shared_ptr<User> getUserByLogin(const std::string& login) const;
	std::shared_ptr<User> getUserByName(const std::string& name) const;
	

public:
	void start();
	bool chatWork() const;
	
	void showMainMenu(); // Главное меню
	void showLoginMenu(); // Меню входа пользователя
	void showRegistrationMenu(); // Меню регистрации нового пользователя
	void showChat(); // Лента чата с пользовател¤ми и сообщениями
	void showChatMenu(); // Меню чата, с выбором действий
	void showAllUsers();
	void addMessage();

	std::shared_ptr<User>getCurrentUser() const { return _currentUser; }
};

