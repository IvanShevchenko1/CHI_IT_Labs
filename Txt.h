#pragma once
#include <fstream>
#include <string>

using std::string;
using std::fstream;

namespace l1
{
	class Txt
	{
	private:
		string* file = nullptr; 
		size_t f_size = 0;
	public:
		Txt() = default;
		Txt(const char*);
		~Txt();

		Txt(const Txt&);
		Txt& operator=(const Txt&);

		Txt(Txt&&) noexcept;
		Txt& operator=(Txt&&) noexcept;

		size_t size() const;

	};
}