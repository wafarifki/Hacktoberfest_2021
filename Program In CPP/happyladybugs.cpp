//Question link - https://www.hackerrank.com/challenges/happy-ladybugs/problem
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */

string happyLadybugs(string b) {
    int us=0;
    set<char> st;
    for(int i = 0;i<b.length();i++){
        if(b[i]=='_'){
            us++;
            break;
        }
    }
    if(us>0){
        for(int i=0;i<b.length();i++){
            int cnt=0;
            char ch = b[i];
            if(st.find(ch)!=st.end()||ch=='_')
                continue;
            else{
                st.insert(ch);
                for(int j=i;j<b.length();j++){
                    if(b[j]==ch)
                        cnt++;
                }
                    
                if(cnt<2)
                    return "NO";
            }
        }
        return "YES";
    }
    else{
        if(b.length()<2)
            return "NO";
        for(int i=1;i<b.length();i++){
            if(b[i-1]!=b[i]&&b[i+1]!=b[i])
                return "NO";
        }
        return "YES";
    }
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}