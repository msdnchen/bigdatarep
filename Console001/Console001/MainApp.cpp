#include <iostream>
using namespace std;

int main()
{
	int x, sum, n, k=0, flag=1;
	int i, ch;
	while (ch!=EOF && flag!=EOF)
	{
		sum = 0;
		n = 0;
		while(1)
		{
			cin>>x;
			ch = getchar();
			if (ch=='\n' || ch==EOF || flag==EOF)
				break;
			sum += x;
			n++;

		}
if(n>0)
{
cout<<"case"<<++k<<", "<<n<<", "<<sum<<endl;
}
	}
	char buffer[81];
	

	for (i = 0; (i < 80) && ((ch = getchar()) != EOF)
		&& (ch != '\n'); i++)
	{
		buffer[i] = (char) ch;
	}

	// Terminate string with a null character 
	buffer[i] = '\0';
	printf( "Input was: %s\n", buffer);
}
