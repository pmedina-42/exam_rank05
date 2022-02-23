#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

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
		spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string name) {
	spellBook.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget const &target) {
	ATarget const *test = 0;
	if (&target == test)
		return ;
	ASpell *spell = spellBook.createSpell(name);
	if (spell != NULL)
		spell->launch(target);
}
