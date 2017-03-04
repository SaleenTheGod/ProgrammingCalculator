#include <iostream>
#include <string>
#include <list>

using namespace std;

string BinaryToHex(string binary)
{
	list<string> tempList;
	string newBinary = "";
	string trueHex = "0x";

	for(auto i = 0; i < binary.size(); i++)
	{
		if (binary[i] != '1' && binary[i] != '0')
		{
			cout << "Binary Numbers may only contain 1's and 0's\n";
			break;
		}
	}

	while (binary.size() % 4 != 0)
	{
		binary.insert(binary.begin(), '0');
	}

	while (!binary.empty())
	{
		newBinary = "";

		for (auto i = 0; i < 4; i++)
		{
			newBinary += binary[i];
		}
		tempList.push_back(newBinary);
		
		binary.erase(0, 4);
	}
	
	while (!tempList.empty())
	{
		//cout << tempList.front() << "\t";

		if(tempList.front() == "0000")
		{
			trueHex += "0";
			tempList.pop_front();
		}
		else if (tempList.front() == "0001")
		{
			trueHex += "1";
			tempList.pop_front();
		}
		else if (tempList.front() == "0010")
		{
			trueHex += "2";
			tempList.pop_front();
		}
		else if (tempList.front() == "0011")
		{
			trueHex += "3";
			tempList.pop_front();
		}
		else if (tempList.front() == "0100")
		{
			trueHex += "4";
			tempList.pop_front();
		}
		else if (tempList.front() == "0101")
		{
			trueHex += "5";
			tempList.pop_front();
		}
		else if (tempList.front() == "0110")
		{
			trueHex += "6";
			tempList.pop_front();
		}
		else if (tempList.front() == "0111")
		{
			trueHex += "7";
			tempList.pop_front();
		}
		else if (tempList.front() == "1000")
		{
			trueHex += "8";
			tempList.pop_front();
		}
		else if (tempList.front() == "1001")
		{
			trueHex += "9";
			tempList.pop_front();
		}
		else if (tempList.front() == "1010")
		{
			trueHex += "A";
			tempList.pop_front();
		}
		else if (tempList.front() == "1011")
		{
			trueHex += "B";
			tempList.pop_front();
		}
		else if (tempList.front() == "1100")
		{
			trueHex += "C";
			tempList.pop_front();
		}
		else if (tempList.front() == "1101")
		{
			trueHex += "D";
			tempList.pop_front();
		}
		else if (tempList.front() == "1110")
		{
			trueHex += "E";
			tempList.pop_front();
		}
		else if (tempList.front() == "1111")
		{
			trueHex += "F";
			tempList.pop_front();
		}
		else
		{
			break;
		}
	
	}


	return trueHex;
}


string HexToBinary (string Hex)
{
	string trueBinary = "";

	for (auto i = 0; i < Hex.size(); i++)
	{
		if (Hex[i] == '0')
		{
			trueBinary += "0000";
		}
		else if (Hex[i] == '1')
		{
			trueBinary += "0001";
		}
		else if (Hex[i] == '2')
		{
			trueBinary += "0010";
		}
		else if (Hex[i] == '3')
		{
			trueBinary += "0011";
		}
		else if (Hex[i] == '4')
		{
			trueBinary += "0100";
		}
		else if (Hex[i] == '5')
		{
			trueBinary += "0101";
		}
		else if (Hex[i] == '6')
		{
			trueBinary += "0110";
			
		}
		else if (Hex[i] == '7')
		{
			trueBinary += "0111";
			
		}
		else if (Hex[i] == '8')
		{
			trueBinary += "1000";
			
		}
		else if (Hex[i] == '9')
		{
			trueBinary += "1001";
			
		}
		else if (Hex[i] == 'A' || Hex[i] == 'a')
		{
			trueBinary += "1010";
			
		}
		else if (Hex[i] == 'B' || Hex[i] == 'b')
		{
			trueBinary += "1011";
			
		}
		else if (Hex[i] == 'C' || Hex[i] == 'c')
		{
			trueBinary += "1100";
			
		}
		else if (Hex[i] == 'D' || Hex[i] == 'd')
		{
			trueBinary += "1101";
			
		}
		else if (Hex[i] == 'E' || Hex[i] == 'e')
		{
			trueBinary += "1110";
			
		}
		else if (Hex[i] == 'F' || Hex[i] == 'f')
		{
			trueBinary += "1111";
			
		}
		else
		{
			break;
		}

		while((trueBinary.size() % 4) != 0)
		{
			trueBinary.insert(trueBinary.begin(), '0');
		}

	}
	return trueBinary;
}

void main()
{
	string binary, hex;
	cout << "*** DEBUG BUILD PROGRAMMING CALCULATOR ***\n\n" << "No Menu is avalible\n";
	cout << "Enter Binary Value\n";
	cin >> binary;

	while(cin.fail())
	{
		cout << "Please Enter a valid Number!\n";
		cin >> binary;
	}

	cout << "Binary Number : "	<< binary << "\t Hex Number : " << BinaryToHex(binary) << endl;

	cout << "Enter Hex Number\n";
	cin >> hex;

	while (cin.fail())
	{
		cout << "Please Enter a valid Number!\n";
		cin >> hex;
	}

	cout << "Hex Number : " << hex << "\t Binary Number : " << HexToBinary(hex) << endl;



}