#include<bits/stdc++.h>
using namespace std;

void minLengthWord(char input[], char output[])
{
	int k = 0, start = 0, end = 0, count = 0;
    int len = strlen(input);
    int r = len+1, min = INT_MAX;
    for(int i = 0; i < r; i++ )
    {
        count++;
        if(input[i]==' '||input[i]=='\0')
        {
            if(count<min)
            {
                start=k;
                end=i;
                min=count;
            }
            k=i+1;
            count=0;
        }
    }
    int j = 0, i;
    for( i = start; i < end; i++)
    {
        output[j]=input[i];
        j++;
    }
    output[j]='\0';
}

int main() {
    int size = 1e6;
    char input[size];
    char output[size];
    cin.getline(input, size);
    minLengthWord( input, output );
    cout << output;
}
