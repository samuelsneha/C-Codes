#include<bits/stdc++.h>
using namespace std;
/*void minLengthWord(char input[], char output[])
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
}*/
void minLengthWord( char input[], char output[] ){
    int start = 0, end = 0, count = 0, min = INT_MAX;
    int length = strlen( input );
    // cout << length;
    for( int i = 0; i <= length; i++ ){
        if( input[i] == ' ' || input[i] == '\0' ){
            count = 0;
            end = i-1;
            for( int j = start; j <= end; j++ ){
                count++;
            }
            if( count < min ){
                int p = 0;
                min = count;
                for( int k = start; k <= end; k++ ){
                    output[p] = input[k];
                    p++;
                }
                  output[p] = '\0';
            }
            start = i + 1;
        }
    }
}
int main(){
    int size = 1e6;
    char arr1[size];
    cin.get( arr1, 1e6 ); //here using getline( cin, arr1) is giving us error. Don't really know why.
    char arr2[size];
    minLengthWord( arr1, arr2 );
    cout << arr2;
    return 0;
}
