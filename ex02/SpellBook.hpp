#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <map>
#include "ASpell.hpp"
class ASpell;

class SpellBook {
	private:
		std::map<std::string, ASpell*> _spells;
	
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const&);
		ASpell* createSpell(std::string const&);
};

#endif
