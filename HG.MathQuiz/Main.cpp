// Hunter Gomulkiewicz
// Math Quiz assignment
// 10/05/2026

#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const int FILE_QUESTIONS = 10;
	string questionsFilepath = "C:\\Temp\\QuizQuestions.txt";
	string resultsFilepath = "C:\\Temp\\QuizResults.txt";

	ifstream ifs(questionsFilepath);
	vector<string> questions;
	string line;
	while (getline(ifs, line)) questions.push_back(line);

	(void)_getch();
	return 0;
}