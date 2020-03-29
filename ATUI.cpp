#include "DEFINES.h"


bool UITree::Init() {

	glGetIntegerv(GL_MAJOR_VERSION, 3);
	glGetIntegerv(GL_MINOR_VERSION, 3);

	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK){
		UITree::Error = "GLEW NOT INITIALIZE";
		return false;
	}

	return true;
}