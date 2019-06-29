#include <iostream>
#include <string>
#include <sstream>
#include <vector>
class Human
{
	public: //The constructor.
			Human(std::string first_name,\
				  std::string last_name, \
				  std::string second_name);	
			//The destructor.
			~Human(void);
			//Public function getFullName
			std::string getFullName(void);
	private:
			std::string _first_name;
			std::string _last_name;
			std::string _second_name;
};


Human::Human(std::string first_name,\
				  std::string last_name, \
				  std::string second_name)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_second_name = second_name; 
	return ;
}

Human::~Human(void)
{
	std::cout << "Human destructed" << std::endl;
}

std::string Human::getFullName(void)
{
	std::ostringstream fullName;
	fullName
	   	<< this->_first_name \
		<< " "				 \
		<< this->_last_name	 \
		<< " "				 \
		<< this->_second_name;
	return fullName.str();
}

class Student : public Human
{
	public: //The constructor
			Student(std::string first_name,\
					std::string last_name, \
					std::string second_name,
					std::vector<int> scores);
			//The destructor.
			~Student(void);
			//Inherit an function which is public 
			//from parent which named 
			//getFullName(void);
			float	getAvgScore(void);
	private:
			std::vector<int> _scores;
};

//Initializaion of Student class and his parent class in 
//the same constructor.
Student::Student(std::string first_name, \
				 std::string last_name, \
				 std::string second_name,
				 std::vector<int> scores) \
		: Human (first_name, \
			     last_name, \
			 	 second_name)
{
		this->_scores = scores;
		return ;
}

Student::~Student(void)
{
	std::cout << "Student destructed" << std::endl;
}

float	Student::getAvgScore(void)
{
	int				i = 0;
	//generalInsertsOfScores
	unsigned int	countScores = this->_scores.size();
	//Sum of the scores
	unsigned int 	sumScores = 0;
	//And avg score
	float			avgScore;

	while (i < countScores)
		sumScores += this->_scores[i++];
	avgScore = (float)sumScores / (float)countScores;
	return (avgScore);
}

int		main(void)
{   //Initializaion array of vectors;
	std::vector<int> scores;
	//Filling the array of vecotors;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(2);
	scores.push_back(3);
	//Creating an object student and inserting filled with
	//marks an scores vecor;
	Student	*student = new Student("First Name",\
		   						   "Last Name", \
								   "Second Name",\
								   scores);
	Student studentStack("Bobby", "Michigan", "Caspersky", scores);
	std::cout << student->getFullName() << std::endl;
	std::cout << student->getAvgScore() << std::endl;
	return (0);
}
