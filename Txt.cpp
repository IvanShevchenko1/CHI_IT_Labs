#include "Txt.h"

namespace l1
{
	Txt::Txt(const char* filename)
	{
		fstream f(filename);
		string line;

		if (f)
		{
			while (std::getline(f, line))
				f_size++;

			file = new string[f_size];

			for (int i = 0; i < f_size; i++)
				std::getline(f, file[i]);
		}
		else
		{
			file = nullptr;
			f_size = 0;
		}
	}
	
	Txt::~Txt()
	{
		if(file != nullptr)
			delete[] file;
	}

	Txt::Txt(const Txt& other)
	{
		f_size = other.f_size;
		file = new string[f_size];

		for (int i = 0; i < f_size; i++)
			file[i] = other.file[i];
	}

	Txt& Txt::operator=(const Txt& other)
	{
		f_size = other.f_size;
		if (file != nullptr)
			delete[] file;

		file = new string[f_size];
		for (int i = 0; i < f_size; i++)
			file[i] = other.file[i];

		return *this;
	}

	Txt::Txt(Txt&& other) noexcept
	{
		f_size = other.f_size;
		file = other.file;

		other.f_size = 0;
		other.file = nullptr;
	}

	Txt& Txt::operator=(Txt&& other) noexcept
	{
		f_size = other.f_size;
		if (file != nullptr)
			delete[] file;
		file = other.file;
		other.f_size = 0;
		other.file = nullptr;

		return *this;
	}
	size_t Txt::size() const
	{
		return f_size;
	}
}