// SeniorProjectC++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Device.h"
#include <iostream>
#include <thread>
using namespace std;

int main()
{

	Device* newDev = new Device();

	bool initilization = newDev->initKinect();

	Sleep(5000);
	
	newDev->getDepth();

	Sleep(1);

	newDev->getDepth();

	Sleep(1);

	newDev->getDepth();

	Sleep(1);

	newDev->getDepth();

	Sleep(1);

	newDev->getDepth();

	Sleep(1000);

	printf("Body capture is starting...\n");

	thread t1(&Device::recordBodyData, newDev);
	thread t2(&Device::recordColorData, newDev);

	t1.join();
	t2.join();
	

	return 0;
}

