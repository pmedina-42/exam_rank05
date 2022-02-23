#ifndef ASPELL_H
#define ASPELL_H

#include <string>
#include <iostream>
#include "ATarget.hpp"
class ATarget;

class ASpell {
	private:
		std::string _name;
		std::string _effects;

	public:
		ASpell(std::string, std::string);
		virtual ~ASpell();
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const&) const;
};

#endif
