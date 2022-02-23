#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target)
		_targets.insert(std::pair<std::string, ATarget*>(target->getType(), target));
}

void TargetGenerator::forgetTargetType(std::string const &name) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(name);
	if (it != _targets.end()) {
		_targets.erase(name);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &name) {
	std::map<std::string, ATarget*>::iterator it = _targets.find(name);
	if (it != _targets.end()) {
		return _targets[name];
	}
	return NULL;
}
