#pragma once
#include <string>
#include <vector>
#include <memory>
#include <exception>
#include "User.h"

class loginException : public std::exception 
{
public:
	const char* what() const noexcept override
	{
		return "ОШИБКА: логин занят";
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
	std::vector<User> users;
	std::vector<Message> messages;
	std::shared_ptr<User> _currentUser = nullptr;


public:
	void start();
	bool chatWork() const;
};

