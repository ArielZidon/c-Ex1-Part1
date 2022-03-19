#include "mat.hpp"
#include<iostream>
#include<string>
#include<stdexcept>
#include<vector>

using namespace std;
namespace ariel{
    string mat(int c,int r, char s1,char s2)
    {
        vector<vector<int>> matrix1(r,vector<int>(c));
        vector<vector<int>> matrix2(r,vector<int>(c));
        if(r<=0 || c<=0)
        {
            throw runtime_error("cant be negativ");
        }
        
        if(r%2==0 || c%2==0)
        {
            throw runtime_error("cant be even num");
        }

        string M;

    return M;
    }
}