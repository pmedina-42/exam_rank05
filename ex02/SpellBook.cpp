#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
}

void SpellBook::forgetSpell(std::string const &name) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		_spells.erase(name);
	}
}

ASpell* SpellBook::createSpell(std::string const &name) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end()) {
		return _spells[name];
	}
	return NULL;
}
