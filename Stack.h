#pragma once

#include <stdexcept>

template <class T>
class Stack
{
	const int maxSize;
	int lastIndex = 0;
	T* memory = nullptr;

public:
	Stack(int _maxSize) : maxSize(_maxSize)
	{
		memory = new T[maxSize];
	}

	T Pop() 
	{
		if (lastIndex > 0)
		{
			return memory[lastIndex];
			lastIndex--;
		}
		else
		{
			throw std::runtime_error("Stack is empty");
		}
	}

	void Push(const T& in)
	{
		if (lastIndex < maxSize - 1)
		{
			lastIndex++;
			memory[lastIndex] = in;
		}
		else
		{
			throw std::runtime_error("Stack is full");
		}
	}
};