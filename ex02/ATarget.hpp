#ifndef ATARGET_H
#define ATARGET_H

#include <string>
#include "ASpell.hpp"
class ASpell;

class ATarget {
	private:
		std::string _type;

	public:
		ATarget(std::string);
		virtual ~ATarget();
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(ASpell const&) const;
};

#endif
