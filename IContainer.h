#pragma once
#include <vector>
#include "IElement.h"

class IContainer{
protected:
	std::vector<IElemen> _elements;

public:
	IContainer(){}
	~IContainer(){}

	virtual bool SetElements(std::vector<IElemen> elements) { _elements.insert(_elements.end, elements.begin, elements.end); }
	virtual bool SetElements(IElemen element) { _elements.push_back(element); }

	virtual bool GetElements(std::vector<IElemen> elements) { elements = _elements; }

	virtual bool Draw() {};

}