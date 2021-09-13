#include <iostream>
#include <string>
#include <vector>
#include <functional>

using namespace std;

string rtrim(const string &);
vector<string> split(const string &);


int main() {

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int max_sum = 0;
    int temp_sum;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            temp_sum = 0;
            // top row
            temp_sum += arr[i][j];
            temp_sum += arr[i][j+1];
            temp_sum += arr[i][j+2];
            // middle row
            temp_sum += arr[i+1][j+1];
            // bottom row
            temp_sum += arr[i+2][j];
            temp_sum += arr[i+2][j+1];
            temp_sum += arr[i+2][j+2];

            //if first hourglass, set as max
            if(temp_sum > max_sum || i == 0 && j == 0)
                max_sum = temp_sum;
        }
    }
    cout << max_sum;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    size_t start = s.find_first_not_of("\n\r\t\f\v");
    return (start == std::string::npos) ? "" : s.substr(start);

}

string rtrim(const string &str) {
    string s(str);

    size_t end = s.find_last_not_of("\n\r\t\f\v");
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
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
