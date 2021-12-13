// Header files to include the necessary information for input/output related functions

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


// Structure play created, includes a collection of variables under a single name. 
struct play {
	 char name[20]; // Pointers to array size of 20 char
	 int score;   // Variable type used to define numeric variables holding whole numbers in this case score
	 int rat;    // Variable type used to define numeric variables holding whole numbers in this case rating 
}p;


void high_score();  // Empty data type that has no value, will not return any value to the calling function 
void start();
void help();

int main()    // Function indicating program to return int value
{
	int chc = 0;
	printf("Press 1 to start game\n2 High Score \n3 Help \n4 Exit : ");
	scanf_s("%d", &chc);

	switch (chc)  // Variable chc tested against a list of values, in this case waiting for user input on which case to utilize
	{
	case 1:      // Each case is considered a value which is checked for each switch case
		start();
		break;   // Break used to terminate a loop

	case 2:
		high_score();
		break;

	case 3:
		help();
		break;

	default:
		exit(1);
	}

	_getch();    // Allows to hold the output screen until the user passes a key from the keyboard
}

// Creation for help menu 
void help()  // No value to be returned 
{
	int ch;

	// Help menu display will show all printf data which will show for the user
	printf("\n\n ***** GAME HELP *****");
	printf("\n --------------------------");
	printf("\n >> Total of 10 questions");
	printf("\n >> Multiple choice questions use options keys 1,2,3,4 to answer");
	printf("\n >> Each question worth 5 point");
	printf("\n >> Only correctly answered questions will count, worng answers will not hurt your score");

	printf("\n\n ***** GOOD LUCK *****\n\n");

	printf("\nContinue playing? (1/0) :");  // Allow user to advance to game by pressing 1
	scanf_s("%d", &ch);

	if (ch == 1)    // if else statement used to allow user to press 1 to start game
	{
		start();
	}
	else           // if else statement used to allow user to press 0 to exit game
	{
		exit(0);
	}
}

// Game start and questions

void start()  // Empty data type that has no value to return
{
	int ans;  // Integer variable type to define numeric values
	int count = 0;
	char rat[20];  // Pointer to character

	FILE *fp;  // File creation in c by declaring variable 

	if ((fp = fopen("play.txt", "a")) == NULL)  // Opening file specified, == NULL used to check if the file was opened successfully
	{
		printf("error opening file\n");  // if file not opened as intended then program will printf "error opening file" and move to next line of code
	}


	printf("\nPlease enter your name: ");   // User input for name 
	scanf("%s", p.name);                   // Scanf will take input from user and save as string input %s , player name



	// Player name is displayed within string text for start of game 
	printf("****** Good Luck \"%s \" with Quiz Game ******\n\n", p.name);

	// Program will display printf question 
	printf("Q(1).What country uses the gourde as its currency? \n. 1. United States \t\t2. Haiti\n. 3. Germany\t\t 4. Poland\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);  // Input taken from user on respone of 1,2,3,4 for answers to questions

	// if input matches 2 then user is correct. Program will then display users answer along with "Correct!! +5 Points"
	if (ans == 2)  // ans == 2 is the correct answer in this question 
	{
		printf("Correct!! +5 Points\n\n");
		++count;       // count value will increase pre increment and will increase while executing for all correct answers
	}
	else          // If answer is not correct then program will look at else statement and print out string of wrong answer. Not ++count (counting) for wrong answers
	{
		printf("Wrong answer. Correct answer is Haiti\n\n");
	}

	// Lines 116 through 240 repeat the following logic from above (lines 99 through 112)
	// Different questions asked with different answers. If questions are correct program will keep score with ++count

	printf("Q(2).On which continent is Japan located? \n. 1. Antarctica \t\t2. Asia\n. 3. South America\t\t 4. North America\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Asia\n\n");
	}

	printf("Q(3).What color is cobalt? \n. 1. Red \t\t2. Green\n. 3. Yellow\t\t 4. Blue\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 4)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Blue\n\n");
	}

	printf("Q(4).What is the color of giraffe tongue? \n. 1. Pink \t\t2. Green\n. 3. Purple\t\t 4. Yellow\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 3)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Purple\n\n");
	}

	printf("Q(5).How many kidneys does a normal person have? \n. 1. One \t\t2. Two\n. 3. Three\t\t 4. Four\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Two\n\n");
	}

	printf("Q(6).From which cactus is tequila made? \n. 1. Agave \t\t2. Chin Cactus\n. 3. Saguaro\t\t 4. Star Cactus\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 1)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Agave\n\n");
	}

	printf("Q(7).Where were the Olympic Games held in 1996 ? \n. 1. Japan \t\t2. Australia\n. 3. Germany\t\t 4. Atlanta\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 4)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Atlanta\n\n");
	}

	printf("Q(8).Which famous British women murderer of the 19th century was never arrested? \n. 1. Jack The Ripper \t\t2. Ted Bundey\n. 3. The Nightstalker\t\t 4. Gary Ridgway\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 1)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Jack The Ripper\n\n");
	}

	printf("Q(9).Which bird can swim but cannot fly? \n. 1. Flamingo \t\t2. Eagles\n. 3. Chicken\t\t 4. Penguin\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 4)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Penguin\n\n");
	}

	printf("Q(10).Give another name for the study of fossils? \n. 1. Astrology \t\t2. Paleontology\n. 3. Herbology\t\t 4. Entomology\n\n");
	printf("Your answer: ");
	scanf_s("%d", &ans);

	if (ans == 2)
	{
		printf("Correct!! +5 Points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer. Correct answer is Paleontology\n\n");
	}


	// Counting number of correct answers and, ratings  
	if (count > 0)
	{
		printf("Thanks for playing, Your scored: %d points \t", count * 5);

		// Total number of correctly answered questions multiplied by 5 for a total of 50 points possible with there being 10 total questions
		p.score = count * 5;

		// if, else if statements used in order to disply "Rating" for user score. If player score is equal to 50 then 5 stars are given. If less than 50 statements will follow else if scores and scores in a decreasing order
		if (p.score >= 50)
		{
			printf("Rating: * * * * *");
			p.rat = 5;
		}
		else if (p.score >= 40 && p.score < 40)
		{
			printf("Rating: * * * *");
			p.rat = 4;
		}
		else if (p.score >= 20 && p.score < 40)
		{
			printf("Rating: * * *");
			p.rat = 3;
		}
		else if (p.score >= 10 && p.score < 20)
		{
			printf("Rating: * *");
			p.rat = 2;
		}
		else if (p.score < 10)
		{
			printf("Rating: *");
			p.rat = 1;
		}

		//writing to file  

		fprintf(fp,"%s %d %d",p.name, p.score, p.rat);
		fclose(fp);
	}
	else
	{
		printf("Try again!");
	}
}

// High scores recorded to file for historical view when additional users play game
void high_score()
{

	int ch;

	FILE* fp;
	if ((fp=fopen("play.txt", "r")) == NULL)
	{
		printf("error opening file\n");  
		printf("\nNo games played yet!\n");
	}
	else
	{

		printf("\n******************************* HIGH SCORES *******************************\n\n");
		printf("NAME     POINTS     RATING\n");
		while (fscanf(fp, "%s %d %d",p.name,&p.score,&p.rat) != EOF)
		{
			printf("____________________________\n");
			printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rat);
		}

		fclose(fp);

	}
	printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");
	scanf_s("%d", &ch);

	if (ch == 1)
	{
		start();
	}
	else
	{
		exit(1);
	}

}