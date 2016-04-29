// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cstring"

using namespace std;


int main()
{
	char Full_Str[100]="", *str=",.", *word, p='*';
	int i = 1, k = 0, len;
	cout << "Введіть масив символів", "\n" ;
	cin.get(Full_Str, 100);
	word = strtok(Full_Str, str);
	while (word != NULL)
	{
		if (word[0] == p)
		{
			len = strlen(word);
			for (k;k <= len - 1;k++)
			{
				word[k] = '+';

			}
			cout << word << " "; k = 0;
		

		}
		else
		{
			cout << word << " ";
		}
		word = strtok(NULL, str); i++;
		cout << "\n";
		system("pause");

	}
	
    return 0;
}

