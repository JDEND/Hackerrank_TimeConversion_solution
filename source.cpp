#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    bool PM = (s.substr(8,2) == "PM") ? 1 : 0;
    int hrs = stoi(s.substr(0,2));
    int min = stoi(s.substr(3,2));
    int sec = stoi(s.substr(6,2));
    
    if(PM == 0 && hrs == 12)
        hrs = 0;
    else if(PM == 1 && hrs != 12)
        hrs += 12;        
        
    string tempHrs;
    string tempMin;
    string tempSec;
    if(hrs < 10)
        tempHrs = "0"; 
        
    tempHrs+=to_string(hrs);
    
    if(min < 10)
        tempMin = "0";
        
    tempMin+=to_string(min);
    if(sec < 10)
        tempSec = "0";
        
    tempSec+=to_string(sec);
        
    return (tempHrs+":"+tempMin+":"+tempSec);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
