#pragma once
#include "Monobehaviour.h"

class TestCameraScript : public Monobehaviour
{
public:
	TestCameraScript();
	virtual ~TestCameraScript();

	virtual void LateUpdate() override;

private:
	float	_speed = 100.f;
};

