#include <iostream>
#include "string"
//строка на 8 чаров = это 24 байта
//24 + 4(инт) + 24
struct Data
{
	std::string s1;
	int			n;
	std::string s2;
};
void * serialize(void)
{
	char *arr = new char[20];
	std::string alphabet = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
	int len = alphabet.length();
	for (int i = 0; i < 8; i ++)
		arr[i] = alphabet[rand() % len];
	int random = rand();
	*reinterpret_cast<int *>(arr + 8) = random;
	for (int i = 0; i < 8; i++)
		arr[i + 12] = alphabet[rand() % len];
	std::cout << "Raw: " << std::endl;
	std::string str = arr;
	std::cout << "s1: " << str.substr(0, 8) << std::endl << "n: " << random << std::endl << "s2: " << str.substr(12,
																											  20) << std::endl;
	return arr;
}
Data * deserialize(void * raw)
{
	Data *data = new Data;
	data->s1 = std::string(static_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
	data->s2 = std::string(static_cast<char *>(raw) + 12, 8);
	return data;
}

int main()
{
	srand(time(NULL));
	std::cout << "-----------------------------" << std::endl;
	void *arr = serialize();
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Serialize: " << std::endl;
	for (int i = 0; i < 20; i++)
		std::cout << reinterpret_cast<char *>(arr)[i];
	std::cout << "\n-----------------------------" << std::endl;
	std::cout << "Deserialize: " << std::endl;
	Data *data = deserialize(arr);
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	delete data;
	return 0;
}
