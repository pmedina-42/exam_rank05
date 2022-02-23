#ifndef TARGETGENERATOR_H
#define TARGETGENERATOR_H

#include <map>
#include "ATarget.hpp"
class ATarget;

class TargetGenerator {
	private:
		std::map<std::string, ATarget*> _targets;
	
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const&);
		ATarget* createTarget(std::string const&);
};

#endif
