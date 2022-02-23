#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
class ASpell;
class ATarget;
class SpellBook;

class Warlock {
	private:
		std::string _name;
		std::string _title;
		SpellBook spellBook;
		Warlock();

	public:
		Warlock(std::string, std::string);
		virtual ~Warlock();
		void setTitle(std::string);
		std::string getName() const;
		std::string getTitle() const;
		void introduce() const;

		void learnSpell(ASpell*);
		void forgetSpell(std::string);
		void launchSpell(std::string, ATarget const&);
};

#endif
