#ifndef SENDER_H
#define SENDER_H

class I_MP_S
{
public:
	virtual void send(Message msg) = 0;
};

class MyProtocolSender :public I_MP_S
{
public:
	void send(Message msg);
};

#endif