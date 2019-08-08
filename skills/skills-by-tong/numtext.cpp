#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string num,num2;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		int s = num.size();
		if(num == "0")
		{
			cout << "zero";
		}
		else if(num == "1")
		{
			cout << "one";
		}
		else if(num == "2")
		{
			cout << "two";
		}
		else if(num == "3")
		{
			cout << "three";
		}
		else if(num == "4")
		{
			cout << "four";
		}
		else if(num == "5")
		{
			cout << "five";
		}
		else if(num == "6")
		{
			cout << "six";
		}
		else if(num == "7")
		{
			cout << "seven";
		}
		else if(num == "8")
		{
			cout << "eight";
		}
		else if(num == "9")
		{
			cout << "nine";
		}
		else if(s == 2)
		{
			if(num[0] == '1' && num[1] == '0')
			{
				cout << "ten";
			}
			else if(num[0] == '1' && num[1] == '1') 
			{
				cout << "eleven";
				;
			}
			else if(num[0] == '1' && num[1] == '2')
			{
				cout << "twelve";
			}
			else if(num[0] == '1' && num[1] == '3')
			{
				cout << "thirteen";
			}
			else if(num[0] == '1' && num[1] == '4')
			{
				cout << "fourteen";
			}
			else if(num[0] == '1' && num[1] == '5')
			{
				cout << "fifteen";
			}
			else if(num[0] == '1' && num[1] == '6')
			{
				cout << "sixteen";
			}
			else if(num[0] == '1' && num[1] == '7')
			{
				cout << "seventeen";
			}
			else if(num[0] == '1' && num[1] == '8')
			{
				cout << "eighteen";
			}
			else if(num[0] == '1' && num[1] == '9')
			{
				cout << "nineteen";
			}
			else
			{
				if(num[0] == '2')
				{
					cout << "twenty";
				}
				else if(num[0] == '3')
				{
					cout << "thirty";
				}
				else if(num[0] == '4')
				{
					cout << "forty";
				}
				else if(num[0] == '5')
				{
					cout << "fifty";
				}
				else if(num[0] == '6')
				{
					cout << "sixty";
				}
				else if(num[0] == '7')
				{
					cout << "seventy";
				}
				else if(num[0] == '8')
				{
					cout << "eighty";
				}
				else if(num[0] == '9')
				{
					cout << "ninety";
				}
				if(num[1] == '0')
				{
					cout << "";
				}
				else if(num[1] == '1')
				{
					cout << "-one";
				}
				else if(num[1] == '2')
				{
					cout << "-two";
				}
				else if(num[1] == '3')
				{
					cout << "-three";
				}
				else if(num[1] == '4')
				{
					cout << "-four";
				}
				else if(num[1] == '5')
				{
					cout << "-five";
				}
				else if(num[1] == '6')
				{
					cout << "-six";
				}
				else if(num[1] == '7')
				{
					cout << "-seven";
				}
				else if(num[1] == '8')
				{
					cout << "-eight";
				}
				else if(num[1] == '9')
				{
					cout << "-nine";
				}
			}
		}
		else if(s >= 3)
		{
			for(int j=0;j<num.size();j++)
			{
				if(num == "10000")
				{
					cout << "ten thousand" << endl;
					break;
				}
				else if(num[j] == '0')
				{
					s--;
				}
				if(s == 2)
					{
						if((num[2] == '1' && num[3] == '0') || (num[1] == '1' && num[2] == '0'))
						{
							cout << "ten";
							break;
						}
						else if((num[2] == '1' && num[3] == '1') || (num[1] == '1' && num[2] == '1') ) 
						{
							cout << "eleven";
							break;
						}
						else if((num[2] == '1' && num[3] == '2') || (num[1] == '1' && num[2] == '2') )
						{
							cout << "twelve";
							break;
						}
						else if((num[2] == '1' && num[3] == '3') || (num[1] == '1' && num[2] == '3') )
						{
							cout << "thirteen";
							break;
						}
						else if((num[2] == '1' && num[3] == '4') || (num[1] == '1' && num[2] == '4') )
						{
							cout << "fourteen";
							break;
						}
						else if((num[2] == '1' && num[3] == '5') || (num[1] == '1' && num[2] == '5') )
						{
							cout << "fifteen";
							break;
						}
						else if((num[2] == '1' && num[3] == '6') || (num[1] == '1' && num[2] == '6') )
						{
							cout << "sixteen";
							break;
						}
						else if((num[2] == '1' && num[3] == '7') || (num[1] == '1' && num[2] == '7') )
						{
							cout << "seventeen";
							break;
						}
						else if((num[2] == '1' && num[3] == '8') || (num[1] == '1' && num[2] == '8') )
						{
							cout << "eighteen";
							break;
						}
						else if((num[2] == '1' && num[3] == '9') || (num[1] == '1' && num[2] == '9') )
						{
							cout << "nineteen";
							break;
						}
					}
				else if(num[j] == '1')
				{
					cout << "one";
				}
				else if(num[j] == '2')
				{
					cout << "two";
				}
				else if(num[j] == '3')
				{
					cout << "three";
				}
				else if(num[j] == '4')
				{
					cout << "four";
				}
				else if(num[j] == '5')
				{
					cout << "five";
				}
				else if(num[j] == '6')
				{
					cout << "six";
				}
				else if(num[j] == '7')
				{
					cout << "seven";
				}
				else if(num[j] == '8')
				{
					cout << "eight";
				}
				else if(num[j] == '9')
				{
					cout << "nine";
				}
				
				if(s == 3)
				{
					cout << " hundred ";
					s--;
					//break;
				}
				if(s == 4)
				{
					cout << " thousand ";
					s--;
				}
			}
		}
		cout << endl;
		s=0;
	}
}
