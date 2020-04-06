#include<iostream>

using namespace std;
string CaesarCipherEncrypt( string text);
string CaesarCipherDecrypt(string text);

void Menu();
int shift = 0;
int main() 
{
	string text;
	string output;
	char input;
	bool isRunning = true;

	while (isRunning)
	{
		
		Menu();
		std::cout << "Enter Option: " << "\n";
		cin >> input;
		switch (input)
		{
		case '1':
			shift = 13;
			std::cout << "Enter Text To Encrypt: " << "\n";
			cin >> text;
			std::cout << "Enter Shift" << "\n";
			cin >> shift;
			output = CaesarCipherEncrypt(text);
			std::cout << output << "\n";
			break;

		case '2':
			shift = 13;
			std::cout << "Enter Text To Decrypt: " << "\n";
			cin >> text;
			std::cout << "Enter Shift" << "\n";
			cin >> shift;
			output = CaesarCipherDecrypt(text);
			std::cout << output << "\n";

			break;
		case '3':
			return 0;
			

		}
	}


	return 0;
}

string CaesarCipherEncrypt(string text)
{
	size_t i;
	for (i = 0; text[i]; i++); //Get Len of text
	int len = i;
	string ciphertext = text;

	for (int i = 0; i < len; i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			ciphertext[i] = (text[i] - 65 + shift) % 26 + 65;

		}
		else if (text[i] >= 'a' && text[i] <= 'z')
		{
			ciphertext[i] = (text[i] - 97 + shift) % 26 + 97;

		}

	}
	return ciphertext;
	
}

string CaesarCipherDecrypt(string text)
{
	size_t i;
	for (i = 0; text[i]; i++); //Get Len of text
	int len = i;
	string ciphertext = text;

	for (int i = 0; i < len; i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			ciphertext[i] = (text[i] - 65 + shift) % 26 + 65;
			
		}
		else if (text[i] >= 'a' && text[i] <= 'z')
		{
			ciphertext[i] = (text[i] - 97 + shift) % 26 + 97;

		}

	}
	return ciphertext;

}

void Menu() 
{
	std::cout << "1 - Encrypt Using Caesar Cipher" << "\n";
	std::cout << "2 - Decrypt Using Caesar Cipher" << "\n";
	std::cout << "3 - Quit" << "\n";

}