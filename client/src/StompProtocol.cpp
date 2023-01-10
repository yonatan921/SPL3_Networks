#include "../include/StompProtocol.h"
using namespace std;

StompProtocol::StompProtocol() {}

std::string StompProtocol::createFrame(std::string command) 
{
    //we assume the command input is legal
    vector<string> strComps = split(command, ' ');
    string keyword = strComps.at(0);
    if(keyword == "login") 
    {
        processLogin(strComps);
    } else if (keyword == "join")
    {
        processJoin(strComps);
    } else if (keyword == "exit")
    {

    } else if (keyword == "report")
    {

    } else if (keyword == "summary")
    {

    } else if (keyword == "logout")
    {

    } 

}

std::string StompProtocol::parseFrame(std::string frame)
{

}

bool StompProtocol::getShouldTerminate()
{
    return shouldTerminate;
}

void StompProtocol::setShouldTerminate(bool value)
{
    shouldTerminate = value;
}   


std::vector<std::string> StompProtocol::split(std::string s, char del)
{
    std::vector<std::string> vector;

    std::stringstream ss(s);
    std::string word;
    while(!ss.eof()) 
    {
        std::getline(ss, word, del);
        vector.push_back(word);
    }

    return vector;
}

string StompProtocol::processLogin(vector<string> vec)
{
    //build CONNECT frame
    return "CONNECT\naccept-version:1.2\nhost:stomp.cs.bgu.ac.il\nlogin:" + vec.at(2) + "\npasscode:" + vec.at(3);
} 

string StompProtocol::processJoin(vector<string> vec)
{
    return "";
} 

string StompProtocol::processExit(vector<string> vec)
{
    return "";
} 

string StompProtocol::processReport(vector<string> vec)
{
    return "";
} 

string StompProtocol::processSummary(vector<string> vec)
{
    return "";
} 

string StompProtocol::processLogout(vector<string> vec)
{
    return "";
} 

