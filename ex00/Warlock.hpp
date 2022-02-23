#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include <string>

class Warlock {
	private:
		std::string _name;
		std::string _title;
	
	public:
		Warlock(std::string, std::string);
		virtual ~Warlock();
		void setTitle(std::string);
		std::string getName() const;
		std::string getTitle() const;
		void introduce() const;
};

#endif
