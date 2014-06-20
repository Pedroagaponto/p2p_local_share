#ifndef HTTP_REQUESTER_H
#define HTTP_REQUESTER_H

class I_HTTP_R
{
public:
	virtual Arquivo download(Arquivo, Pessoa) = 0;
};

class HttpRequester : public  I_HTTP_R
{
public:
	Arquivo download(Arquivo, Pessoa);
};

#endif