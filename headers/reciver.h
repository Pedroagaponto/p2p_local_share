#ifndef RECIVER_H
#define RECIVER_H

class I_MP_R
{
public:
	virtual void send(Message msg) = 0;
};

class MyProtocolReciver :public I_MP_R
{
public:
	void send(Message msg);
};
#endif