#pragma once
#include "SegementInPlane.h"

ref class Wrapper
{
private:

	ObjectMass* objectMass;

public:

	Wrapper(){

	}
	void setWrapper(ObjectMass* objectMass) {
		this->objectMass = objectMass;
	}
	ObjectMass* getWrapper() {
		return objectMass;
	}

};