#pragma once

#include <iostream>

class Animal
{
public: 
	virtual void Voice() = 0;
};

class Cat final : public Animal 
{
	void Voice() override final
	{
		std::cout << "Meow!" << std::endl;
	}
};

class Dog final : public Animal
{
	void Voice() override final
	{
		std::cout << "Woof!" << std::endl;
	}
};

class Human final : public Animal
{
	void Voice() override final
	{
		std::cout << "Who am I?" << std::endl;
	}
};