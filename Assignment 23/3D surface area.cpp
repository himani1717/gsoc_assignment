#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'surfaceArea' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY A as parameter.
 */

int surfaceArea(vector<vector<int>> A,int H,int W) {
    int s = 2 * H * W;
  for (int i = 1; i < H + 1; i++) {
    for (int j = 1; j < W + 1; j++) {
      if (A[i][j] > A[i][j - 1]) s += A[i][j] - A[i][j - 1];
      if (A[i][j] > A[i - 1][j]) s += A[i][j] - A[i - 1][j];
      if (A[i][j] > A[i][j + 1]) s += A[i][j] - A[i][j + 1];
      if (A[i][j] > A[i + 1][j]) s += A[i][j] - A[i + 1][j];
    }
  }
  return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
     int H, W;
  cin >> H >> W;

  vector<vector<int>> A(H + 2, vector<int>(W + 2));
  for (int i = 0; i < H + 2; i++) {
    for (int j = 0; j < W + 2; j++) {
      if (i && j && i < H + 1 && j < W + 1) cin >> A[i][j];
      else
        A[i][j] = 0;
    }
  }

  int result = surfaceArea(A, H, W);

  fout << result << "\n";

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
