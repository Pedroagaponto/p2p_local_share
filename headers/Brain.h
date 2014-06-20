#ifndef BRAIN_H
#define BRAIN_H

#include "sender.h"
#include "httpRequester.h"


class I_Brain_HttpAi
{
public:
	virtual void baixouArquivo(Pessoa pessoa, Arquivo arqui) = 0;
	virtual void baixouTabela(Pessoa pessoa, Tabela) = 0;
};


class I_Brain_MyProtocol
{
public:
	virtual void reciveMessage(Menssage msg) = 0;
};

class Brain : public I_Brain_HttpAi , public I_Brain_MyProtocol
{
	list<Actions> actions;
	list<recivedMessages> 
public:

	Brain(I_DB, I_HTTP_R, I_MP_S);
	void reciveMessage(Message msg);
	void baixouArquivo(Pessoa pessoa, Arquivo arqui);
	void baixouTabela(Pessoa pessoa, Tabela);
}

#endif