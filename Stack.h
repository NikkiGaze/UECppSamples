#pragma once

#include <stdexcept>

template <class T>
class Stack
{
	static const int DEFAULT_SIZE = 2;
	static const int SIZE_MULITPLIER = 2;
	int maxSize;
	int lastIndex = 0;
	T* memory = new T[DEFAULT_SIZE];

public:
	Stack(int _maxSize) : maxSize(_maxSize)
	{
		maxSize = DEFAULT_SIZE;
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
		lastIndex++;
		if (lastIndex == maxSize)
		{
			maxSize *= SIZE_MULITPLIER;
			T* newBuff = new T[maxSize];
			std::copy(memory, memory + maxSize, newBuff);
			delete[] memory;
			memory = newBuff;
		}

		memory[lastIndex] = in;
	}

	~Stack()
	{
		delete[] memory;
	}
};

