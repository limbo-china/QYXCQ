#ifndef ENGINE_H
#define ENGINE_H

#include "QtHeader.h"

class Engine : public QObject
{
	Q_OBJECT

public:
	Engine();
	~Engine();

};

extern Engine* QYXCQEngine;

#endif // !ENGINE_H
