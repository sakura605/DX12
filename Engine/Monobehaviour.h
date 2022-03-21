#pragma once
#include "Component.h"


class Monobehaviour : public Component
{
public:
	Monobehaviour();
	virtual ~Monobehaviour();

private:
	virtual void FinalUpdate() sealed { }
};

