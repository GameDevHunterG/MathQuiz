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
	const int NUM_QUESTIONS = 3;
	string questionFileName = "QuizQuestions.txt";
	string resultsFileName = "QuizResults.txt";
	string questionsFilepath = "C:\\Temp\\" + questionFileName;
	string resultsFilepath = "C:\\Temp\\" + resultsFileName;

	ifstream ifs(questionsFilepath);
	vector<string> questions;
	string line;
	while (getline(ifs, line)) questions.push_back(line);
	ifs.close();

	string quizQuestions[NUM_QUESTIONS];
	srand(time(NULL));
	for (int i = 0; i < NUM_QUESTIONS; i++)
	{
		int randomNumber = rand() % FILE_QUESTIONS + 1;
		quizQuestions[i] = questions[randomNumber];
	}

	(void)_getch();
	return 0;
}