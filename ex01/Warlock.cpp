#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {}

void Warlock::setTitle(std::string title) {
	_title = title;
	return ;
}

std::string Warlock::getName() const {
	return _name;
}

std::string Warlock::getTitle() const {
	return _title;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
	return ;
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell)
		_spells.insert(std::pair<std::string, ASpell*>(spell->getName(), spell));
}

void Warlock::forgetSpell(std::string name) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget const &target) {
	std::map<std::string, ASpell*>::iterator it = _spells.find(name);
	if (it != _spells.end())
		_spells[name]->launch(target);
}
