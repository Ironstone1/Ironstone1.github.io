#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

//Question:
//Write a program which will find all such numbers which are divisible by 7 but are not a multiple of 5,
//between 2000 and 3200 (both included).
//The numbers obtained should be printed in a comma-separated sequence on a single line.
//
//Hints: 
//Consider use range(#begin, #end) method
void question1() {
	cout << "\n--- Question 1 ---" << endl;
	for (int i = 2000; i <= 3200; i++) {
		if (i % 7 == 0 && i % 5 != 0) {
			cout << i << " ";
		}
	}
}

//Question:
//Write a program which can compute the factorial of a given numbers.
//The results should be printed in a comma-separated sequence on a single line.
//Suppose the following input is supplied to the program:
//8
//Then, the output should be:
//40320
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question2(int n) {
	cout << "\n--- Question 2 ---" << endl;
	int total = 1;
	for (int i = n; i > 0; i--) {
		total = total * i;
	}
	cout << total;
}

//Question:
//With a given integral number n, write a program to generate a dictionary that contains (i, i*i) such that is an integral number between 1 and n (both included). 
//and then the program should print the dictionary.
//Suppose the following input is supplied to the program:
//8
//Then, the output should be:
//{1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64}
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
//Consider use dict()
void question3(int n) {
	cout << "\n--- Question 3 ---" << endl;
	int f = 1;
	int c = 0;
	for (int i = 0; i < n; i++) {
		c += f;
		f += 2;
		cout << c << " ";
	}
}

//Question:
//Write a program which accepts a sequence of comma-separated numbers from console and generate a list and a tuple which contains every number.
//Suppose the following input is supplied to the program:
//34,67,55,33,12,98
//Then, the output should be:
//['34', '67', '55', '33', '12', '98']
//('34', '67', '55', '33', '12', '98')
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
//tuple() method can convert list to tuple
void question4(string num) {
	cout << "\n--- Question 4 ---" << endl;
	vector<string> list;
	string c = "";
	num += ',';
	for (int i = 0; i <= num.size(); i++) {
		if (num[i] != ',') {
			c += num[i];
		} else {
			list.push_back(c);
			cout << c << " ";
			c = "";
		}
	}

}


//Question:
//Define a class which has at least two methods:
//getString: to get a string from console input
//printString: to print the string in upper case.
//Also please include simple test function to test the class methods.
//
//Hints:
//Use __init__ method to construct some parameters
class question5 {
	public:
		string input;

		void getString() {
			cout << "Enter some text: ";
			cin >> input;
		}

		void printString() {
			cout << "Output: " << input;
		}
};

void question5_test() {
	cout << "\n--- Question 5 ---" << endl;
	question5 q5;
	q5.getString();
	q5.printString();
}

//Question:
//Write a program that calculates and prints the value according to the given formula:
//Q = Square root of [(2 * C * D)/H]
//Following are the fixed values of C and H:
//C is 50. H is 30.
//D is the variable whose values should be input to your program in a comma-separated sequence.
//Example:
//Let us assume the following comma separated input sequence is given to the program:
//100,150,180
//The output of the program should be:
//18,22,24
//
//Hints:
//If the output received is in decimal form, it should be rounded off to its nearest value (for Example:, if the output received is 26.0, it should be printed as 26)
//In case of input data being supplied to the question, it should be assumed to be a console input. 
void question6(string d) {
	cout << "\n--- Question 6 ---" << endl;
	vector<int> x;
	string y = "";
	d += ',';
	int r;
	int C = 50;
	int H = 30;
	for (int i = 0; i < d.size(); i++) {
		if (d[i] != ',') {
			y += d[i];
		} else {
			r = pow(static_cast<int>(2 * C * stoi(y)/H), 0.5);
			x.push_back(r);
			cout << r << " ";
			y = "";

		}
	}
}

//Question 7
//Level 2
//
//Question:
//Write a program which takes 2 digits, X,Y as input and generates a 2-dimensional array. The element value in the i-th row and j-th column of the array should be i*j.
//Note: i=0,1.., X-1; j=0,1,¡­Y-1.
//Example:
//Suppose the following inputs are given to the program:
//3,5
//Then, the output of the program should be:
//[[0, 0, 0, 0, 0], [0, 1, 2, 3, 4], [0, 2, 4, 6, 8]] 
//
//Hints:
//Note: In case of input data being supplied to the question, it should be assumed to be a console input in a comma-separated form.
void question7(int x, int y) {
	cout << "\n--- Question 7 ---" << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << i * j << " ";
		}
	}
}

//Question:
//Write a program that accepts a comma separated sequence of words as input and prints the words in a comma-separated sequence after sorting them alphabetically.
//Suppose the following input is supplied to the program:
//without,hello,bag,world
//Then, the output should be:
//bag,hello,without,world
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.

string join_string(vector<string> input) {
	string output;
	for (int i = 0; i < input.size(); i++) {
		output += input[i];
	}
	return output;
}

vector<string> join_vector(vector<string> a, vector<string> b) {
	vector<string> output;
	output.reserve(a.size() + b.size());
	output.insert(output.end(), a.begin(), a.end());
	output.insert(output.end(), b.begin(), b.end());
	return output;
}

vector<string> merge(vector<string> l, vector<string> r) {
	if (l.size() == 0) {
		return r;
	}
	if (r.size() == 0) {
		return l;
	}

	vector<string> re;
	int il = 0;
	int ir = 0;

	while (re.size() < (l.size() + r.size())) {
		if (l[ir] <= r[ir]) {
			re.push_back(l[il]);
			il++;
		} else {
			re.push_back(r[ir]);
			ir++;
		}

		if (ir == r.size()) {
			vector<string> temp1 = vector<string>(l.begin() + il, l.end()); // remove items from vector
			re = join_vector(temp1, re);
			break;
		}
		if (il == l.size()) {
			vector<string> temp2 = vector<string>(r.begin() + ir, r.end()); // remove items from vector
			re = join_vector(temp2, re);
			break;
		}
	}
	return re;
}

vector<string> merge_sort(vector<string> a) {
	if (a.size() < 2) {
		return a;
	}
	
	int m = static_cast<int>(a.size() / 2);
	vector<string> start = vector<string>(a.begin(), a.end() - m);
	vector<string> end = vector<string>(a.begin() + m, a.end());
	return merge(
		merge_sort(start),
		merge_sort(end)
	);
}

vector<string> split_string(string x, char chr=',') {
	// split the text
	vector<string> inputs;
	string r;
	x += chr;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] != chr) {
			r += x[i];
		} else {
			inputs.push_back(r);
			r = "";
		}
	}
	return inputs;
}

void question8(string input) {
	cout << "\n--- Question 8 ---" << endl;
	vector<string> s = split_string(input, ',');
	vector<string> output = merge_sort(s);
	for (int i = 0; i < output.size(); i++) {
		cout << output[i] << " ";
	}
}


//Question 9
//Level 2
//
//Question£º
//Write a program that accepts sequence of lines as input and prints the lines after making all characters in the sentence capitalized.
//Suppose the following input is supplied to the program:
//Hello world
//Practice makes perfect
//Then, the output should be:
//HELLO WORLD
//PRACTICE MAKES PERFECT
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question9(string input) {
	cout << "\n--- Question 9 ---" << endl;
	string lowercase = "abcdefghijklmnopqrstuvwxyz";
	string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	vector<string> s = split_string(input, '\n');
	string output;

	for (int i = 0; i < input.size(); i++) {
		if (lowercase.find(input[i]) != string::npos) {
			output += uppercase[lowercase.find(input[i])];
		} else {
			output += input[i];
		}
	}
	cout << output << endl;
}

//Question:
//Write a program that accepts a sequence of whitespace separated words as input and prints the words after removing all duplicate words and sorting them alphanumerically.
//Suppose the following input is supplied to the program:
//hello world and practice makes perfect and hello world again
//Then, the output should be:
//again and hello makes perfect practice world
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
//We use set container to remove duplicated data automatically and then use sorted() to sort the data.
vector<string> filter(vector<string> input, string chr=" ", bool dupes=true) {
	vector<string> output;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] != chr) {
			if (dupes == true) {
				// check if the item is already in vector
				if (find(output.begin(), output.end(), input[i]) != output.end()) {
					output.push_back(input[i]);
				}
			} else {
				output.push_back(input[i]);
			}
		}
	}
	return output;
}

void question10(string input) {
	cout << "\n--- Question 10 ---" << endl;
	vector<string> s = split_string(input, ' ');
	vector<string> f = filter(s);
	vector<string> m = merge_sort(f);
	cout << s.size() << " " << f.size() << " " << m.size();
	for (int i = 0; i < m.size(); i++) {
		cout << m[i] << " ";
	}
}

//Question:
//Write a program which accepts a sequence of comma separated 4 digit binary numbers as its input and then check whether they are divisible by 5 or not. The numbers that are divisible by 5 are to be printed in a comma separated sequence.
//Example:
//0100,0011,1010,1001
//Then the output should be:
//1010
//Notes: Assume the data is input by console.
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
string reverse_string(string input) {
	string output;
	for (int i = 0; i < input.size()+1; i++) {
		output += input[input.size() - i];
	}
	return output;
}

int bin2int(string bin) {
	int total = 0;
	int c;
	// for bin num in array
	string r = reverse_string(bin);
	for (int i = 0; i < r.size(); i++) {
		if (r[i] == '1') {
			c = pow(2, i-1);
			total += c;
		}
	}
	return total;
}

void question11(string input) {
	cout << "\n--- Question 11 ---" << endl;
	vector<string> s = split_string(input, ',');
	cout << "input size: " << input.size() << " s size: " << s.size() << endl;
	string output;
	int c;
	for (int i = 0; i < s.size(); i++) {
		string c = to_string(bin2int(s[i]) % 5 == 0);
		if (bin2int(s[i]) % 5 == 0) {
			output += (s[i] + ",");
		}
	}
	cout << output.substr(0, output.length()-1);
}

//Question:
//Write a program, which will find all such numbers between 1000 and 3000 (both included) such that each digit of the number is an even number.
//The numbers obtained should be printed in a comma-separated sequence on a single line.
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question12() {
	cout << "\n--- Question 12 ---" << endl;
	string c;
	int r;
	for (int i = 1000; i <= 3000; i++) {
		c = to_string(i);
		r = 0;
		for (int x = 0; x < c.size(); x++) {
			if (static_cast<int>(c[x]) % 2 == 0) {
				r++;
			}
		}
		if (r == c.length()) {
			cout << c << ",";
		}
		r = 0;
	}
}

//Question:
//Write a program that accepts a sentence and calculate the number of letters and digits.
//Suppose the following input is supplied to the program:
//hello world! 123
//Then, the output should be:
//LETTERS 10
//DIGITS 3
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question13(string text) {
	cout << "\n--- Question 13 ---" << endl;
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	string num = "0123456789";
	int letters = 0;
	int digits = 0;
	for (int i = 0; i < text.length(); i++) {
		if (alpha.find(text[i]) != string::npos) {
			letters++;
		} else if (num.find(text[i]) != string::npos) {
			digits++;
		}
	}
	cout << "Letters: " << letters << "\nDigits: " << digits;
}

//Question:
//Write a program that accepts a sentence and calculate the number of upper case letters and lower case letters.
//Suppose the following input is supplied to the program:
//Hello world!
//Then, the output should be:
//UPPER CASE 1
//LOWER CASE 9
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question14(string text) {
	cout << "\n--- Question 14 ---" << endl;
	vector<int> cas = { 0, 0 };
	for (int i = 0; i < text.length(); i++) {
		if (isupper(text[i]) == true) {
			cas[0]++;
		} else if (islower(text[i]) != 0) {
			cas[1]++;
		}
	}
	cout << "Upper Case: " << cas[0] << "\nLower Case: " << cas[1];
}

//Question:
//Write a program that computes the value of a+aa+aaa+aaaa with a given digit as the value of a.
//Suppose the following input is supplied to the program:
//9
//Then, the output should be:
//11106
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
string repeat_string(string t, int n) {
	string a;
	for (int i = 0; i < n; i++) {
		a += t;
	}
	return a;
}

void question15(int a) {
	cout << "\n--- Question 15 ---" << endl;
	string n = to_string(a);
	int answer = a + stoi(repeat_string(n, 2)) + stoi(repeat_string(n, 3)) + stoi(repeat_string(n, 4));
	cout << answer;
}

//Question:
//Use a list comprehension to square each odd number in a list. The list is input by a sequence of comma-separated numbers.
//Suppose the following input is supplied to the program:
//1,2,3,4,5,6,7,8,9
//Then, the output should be:
//1,3,5,7,9
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question16(int n) {
	cout << "\n--- Question 16 ---" << endl;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			cout << i << ",";
		}
	}
}

//Question:
//Write a program that computes the net amount of a bank account based a transaction log from console input. The transaction log format is shown as following:
//D 100
//W 200
//
//D means deposit while W means withdrawal.
//Suppose the following input is supplied to the program:
//D 300
//D 300
//W 200
//D 100
//Then, the output should be:
//500
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
void question17(string input) {
	cout << "\n--- Question 17 ---" << endl;
	int balance = 0;
	vector<string> actions = split_string(input, '\n');
	for (int i = 0; i < actions.size(); i++) {
		vector<string> action = split_string(actions[i], ' ');
		if (action[0] == "D") {
			balance += stoi(action[1]);
		} else if (action[0] == "W") {
			balance -= stoi(action[1]);
		}
	}
	cout << "Balance: " << balance;
}

//Question:
//A website requires the users to input username and password to register. Write a program to check the validity of password input by users.
//Following are the criteria for checking the password:
//1. At least 1 letter between [a-z]
//2. At least 1 number between [0-9]
//1. At least 1 letter between [A-Z]
//3. At least 1 character from [$#@]
//4. Minimum length of transaction password: 6
//5. Maximum length of transaction password: 12
//Your program should accept a sequence of comma separated passwords and will check them according to the above criteria. Passwords that match the criteria are to be printed, each separated by a comma.
//Example:
//If the following passwords are given as input to the program:
//ABd1234@1,a F1#,2w3E*,2We3345
//Then, the output of the program should be:
//ABd1234@1
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
bool check_password_condition(string password, int f_index) {
	vector<string> formats = {
		"abcdefghijklmnopqrstuvwxyz",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ",
		"0123456789",
		"@#$"
	};
	for (int i = 0; i < password.length(); i++) {
		for (int x = 0; x < formats[f_index].size(); x++) {
			if (password[i] == formats[f_index][x]) {
				return true;
			}
		}
	}
	return false;
}

void question18(string input) {
	cout << "\n--- Question 18 ---" << endl;
	vector<string> passwords = split_string(input, ',');
	vector<string> valid;
	for (int i = 0; i < passwords.size(); i++) {
		int r = 0;
		for (int x = 0; x < 4; x++) {
			if (6 <= passwords[i].length() && passwords[i].length() <= 12) {
				if (check_password_condition(passwords[i], x) == true) {
					r++;
				}
			}
		}
		if (r == 4) {
			valid.push_back(passwords[i]);
			cout << passwords[i] << ",";
		}
	}
}

//Question:
//You are required to write a program to sort the (name, age, height) tuples by ascending order where name is string, age and height are numbers. The tuples are input by console. The sort criteria is:
//1: Sort based on name;
//2: Then sort based on age;
//3: Then sort by score.
//The priority is that name > age > score.
//If the following tuples are given as input to the program:
//Tom,19,80
//John,20,90
//Jony,17,91
//Jony,17,93
//Json,21,85
//Then, the output of the program should be:
//[('John', '20', '90'), ('Jony', '17', '91'), ('Jony', '17', '93'), ('Json', '21', '85'), ('Tom', '19', '80')]
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
//We use itemgetter to enable multiple sort keys.
void question19(vector<vector<string>> vect) {
	cout << "\n--- Question 19 ---" << endl;
	// reshape vectors
	vector<vector<string>> data = { vector<string> {}, vector<string> {},  vector<string> {} };
	for (int v = 0; v < vect[0].size(); v++) {
		for (int i = 0; i < vect.size(); i++) {
			data[v].push_back(vect[i][v]);
		}
	}

	// sort
	for (int i = 0; i < data.size(); i++) {
		sort(data[i].begin(), data[i].end());
	}

	// display data
	for (int i = 0; i < vect.size(); i++) {
		cout << "('" << data[0][i] << "', '" << data[1][i] << "', '" << data[2][i] << "'), " << endl;
	}
}

//Question:
//Define a class with a generator which can iterate the numbers, which are divisible by 7, between a given range 0 and n.
//
//Hints:
//Consider use yield
void question20(int n) {
	cout << "\n--- Question 20 ---" << endl;
	for (int i = 0; i < n; i++) {
		if (i % 7 == 0) {
			cout << i << ", ";
		}
	}
}

//Question£º
//A robot moves in a plane starting from the original point (0,0). The robot can move toward UP, DOWN, LEFT and RIGHT with a given steps. The trace of robot movement is shown as the following:
//UP 5
//DOWN 3
//LEFT 3
//RIGHT 2
//¡­
//The numbers after the direction are steps. Please write a program to compute the distance from current position after a sequence of movement and original point. If the distance is a float, then just print the nearest integer.
//Example:
//If the following tuples are given as input to the program:
//UP 5
//DOWN 3
//LEFT 3
//RIGHT 2
//Then, the output of the program should be:
//2
//
//Hints:
//In case of input data being supplied to the question, it should be assumed to be a console input.
int index_string(vector<string> v, string f) {
	if (find(v.begin(), v.end(), f) != v.end()) {
		return find(v.begin(), v.end(), f) - v.begin();
	} else {
		return -1;
	}
}

int round_double(double x) {
	x += 0.5 - (x < 0);
	return static_cast<int>(x);
}

void question21(string input) {
	cout << "\n--- Question 21 ---" << endl;
	/*up is increase Y
	down is decrease Y
	left is decrease X
	right is increase X*/

	vector<int> current_vector = { 0,0 };
	vector<string> actions = split_string(input, '\n');
	vector<string> str_actions = { "UP", "DOWN", "LEFT", "RIGHT" };
	for (int i = 0; i < actions.size(); i++) {
		vector<string> current_action = split_string(actions[i], ' ');
		vector<vector<int>> op = { 
			vector<int>{current_vector[0], current_vector[1] + stoi(current_action[1])},
			vector<int>{current_vector[0], current_vector[1] - stoi(current_action[1])},
			vector<int>{current_vector[0] + stoi(current_action[1]), current_vector[1]},
			vector<int>{current_vector[0] - stoi(current_action[1]), current_vector[1]},
		};
		current_vector = op[index_string(str_actions, current_action[0])];
	}

	// calculate vector length
	int vector_length = round_double(pow(pow(current_vector[0], 2) + pow(current_vector[1], 2), 0.5));
	cout << "Vector length: " << vector_length;
}

//Question:
//Write a program to compute the frequency of the words from the input. The output should output after sorting the key alphanumerically. 
//Suppose the following input is supplied to the program:
//New to Python or choosing between Python 2 and Python 3? Read Python 2 or Python 3.
//Then, the output should be:
//2:2
//3.:1
//3?:1
//New:1
//Python:5
//Read:1
//and:1
//between:1
//choosing:1
//or:2
//to:1
//
//Hints
//In case of input data being supplied to the question, it should be assumed to be a console input.
vector<vector<string>> global_dict = { vector<string>{}, vector<string>{} };
string dict(string key, string value="none") {
	// get value if it doesn't exist add it
	//int index = index_string(global_dict[0], key);
	cout << "index: " << index;
	// update value
	if (value != "none") {
		if (index >= 0) {
			// key already exists, update value
			global_dict[0][index] = key;
			global_dict[1][index] = value;
		} else {
			// key doesn't exist append it
			global_dict[0].push_back(key);
			global_dict[1].push_back(value);
		}
		return value;
	// get value
	} else {
		if (index >= 0) {
			// key exists return it
			return global_dict[1][index];
		} else {
			// key doesn't exist
			return value;
		}
	}
}

void question22(string input) {
	cout << "\n--- Question 22 ---" << endl;
	// count occurance of each word
	vector<string> s = split_string(input, ' ');
	vector<string> words;
	for (int i = 0; i < s.size(); i++) {
		int index = index_string(global_dict[0], s[i]);
		if (index >= 0) {
			// key exists increment it
			global_dict[1][index] = to_string(stoi(global_dict[1][index]) + 1);
		} else {
			// add key
			dict(s[i], 0);
			words.push_back(s[i]);
		}
	}

	// display result
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << ": " << dict(words[i]) << endl;
	}
}


//Question 23
//level 1
//
//Question:
//    Write a method which can calculate square value of number
//
//Hints:
//    Using the ** operator
//
//
//
//Question 24
//Level 1
//
//Question:
//    Python has many built-in functions, and if you do not know how to use it, you can read document online or find some books. But Python has a built-in document function for every built-in functions.
//    Please write a program to print some Python built-in functions documents, such as abs(), int(), raw_input()
//    And add document for your own function
//    
//Hints:
//    The built-in document method is __doc__
//
//
//
//Question 25
//Level 1
//
//Question:
//    Define a class, which have a class parameter and have a same instance parameter.
//
//Hints:
//    Define a instance parameter, need add it in __init__ method
//    You can init a object with construct parameter or set the value later
//
//
//
//Question:
//Define a function which can compute the sum of two numbers.
//
//Hints:
//Define a function with two numbers as arguments. You can compute the sum in the function and return the value.
//
//
//
//Question:
//Define a function that can convert a integer into a string and print it in console.
//
//Hints:
//
//Use str() to convert a number to string.
//
//
//
//Question:
//Define a function that can convert a integer into a string and print it in console.
//
//Hints:
//
//Use str() to convert a number to string.
//
//
//
//2.10
//
//Question:
//Define a function that can receive two integral numbers in string form and compute their sum and then print it in console.
//
//Hints:
//
//Use int() to convert a string to integer.
//
//
//
//2.10
//
//
//Question:
//Define a function that can accept two strings as input and concatenate them and then print it in console.
//
//Hints:
//
//Use + to concatenate the strings
//
//
//
//2.10
//
//
//Question:
//Define a function that can accept two strings as input and print the string with maximum length in console. If two strings have the same length, then the function should print al l strings line by line.
//
//Hints:
//
//Use len() function to get the length of a string
//
//
//
//2.10
//
//Question:
//Define a function that can accept an integer number as input and print the "It is an even number" if the number is even, otherwise print "It is an odd number".
//
//Hints:
//
//Use % operator to check if a number is even or odd.
//
//
//
//2.10
//
//Question:
//Define a function which can print a dictionary where the keys are numbers between 1 and 3 (both included) and the values are square of keys.
//
//Hints:
//
//Use dict[key]=value pattern to put entry into a dictionary.
//Use ** operator to get power of a number.
//
//
//
//2.10
//
//Question:
//Define a function which can print a dictionary where the keys are numbers between 1 and 20 (both included) and the values are square of keys.
//
//Hints:
//
//Use dict[key]=value pattern to put entry into a dictionary.
//Use ** operator to get power of a number.
//Use range() for loops.
//
//
//
//2.10
//
//Question:
//Define a function which can generate a dictionary where the keys are numbers between 1 and 20 (both included) and the values are square of keys. The function should just print the values only.
//
//Hints:
//
//Use dict[key]=value pattern to put entry into a dictionary.
//Use ** operator to get power of a number.
//Use range() for loops.
//Use keys() to iterate keys in the dictionary. Also we can use item() to get key/value pairs.
//
//
//
//2.10
//
//Question:
//Define a function which can generate a dictionary where the keys are numbers between 1 and 20 (both included) and the values are square of keys. The function should just print the keys only.
//
//Hints:
//
//Use dict[key]=value pattern to put entry into a dictionary.
//Use ** operator to get power of a number.
//Use range() for loops.
//Use keys() to iterate keys in the dictionary. Also we can use item() to get key/value pairs.
//
//
//
//2.10
//
//Question:
//Define a function which can generate and print a list where the values are square of numbers between 1 and 20 (both included).
//
//Hints:
//
//Use ** operator to get power of a number.
//Use range() for loops.
//Use list.append() to add values into a list.
//
//
//
//2.10
//
//Question:
//Define a function which can generate a list where the values are square of numbers between 1 and 20 (both included). Then the function needs to print the first 5 elements in the list.
//
//Hints:
//
//Use ** operator to get power of a number.
//Use range() for loops.
//Use list.append() to add values into a list.
//Use [n1:n2] to slice a list
//
//
//
//2.10
//
//Question:
//Define a function which can generate a list where the values are square of numbers between 1 and 20 (both included). Then the function needs to print the last 5 elements in the list.
//
//Hints:
//
//Use ** operator to get power of a number.
//Use range() for loops.
//Use list.append() to add values into a list.
//Use [n1:n2] to slice a list
//
//
//
//2.10
//
//Question:
//Define a function which can generate a list where the values are square of numbers between 1 and 20 (both included). Then the function needs to print all values except the first 5 elements in the list.
//
//Hints:
//
//Use ** operator to get power of a number.
//Use range() for loops.
//Use list.append() to add values into a list.
//Use [n1:n2] to slice a list
//
//
//
//2.10
//
//Question:
//Define a function which can generate and print a tuple where the value are square of numbers between 1 and 20 (both included). 
//
//Hints:
//
//Use ** operator to get power of a number.
//Use range() for loops.
//Use list.append() to add values into a list.
//Use tuple() to get a tuple from a list.
//
//
//
//2.10
//
//Question:
//With a given tuple (1,2,3,4,5,6,7,8,9,10), write a program to print the first half values in one line and the last half values in one line. 
//
//Hints:
//
//Use [n1:n2] notation to get a slice from a tuple.
//
//
//
//2.10
//
//Question:
//Write a program to generate and print another tuple whose values are even numbers in the given tuple (1,2,3,4,5,6,7,8,9,10). 
//
//Hints:
//
//Use "for" to iterate the tuple
//Use tuple() to generate a tuple from a list.
//
//
//
//2.14
//
//Question:
//Write a program which accepts a string as input to print "Yes" if the string is "yes" or "YES" or "Yes", otherwise print "No". 
//
//Hints:
//
//Use if statement to judge condition.
//
//
//
//3.4
//
//Question:
//Write a program which can filter even numbers in a list by using filter function. The list is: [1,2,3,4,5,6,7,8,9,10].
//
//Hints:
//
//Use filter() to filter some elements in a list.
//Use lambda to define anonymous functions.
//
//
//
//3.4
//
//Question:
//Write a program which can map() to make a list whose elements are square of elements in [1,2,3,4,5,6,7,8,9,10].
//
//Hints:
//
//Use map() to generate a list.
//Use lambda to define anonymous functions.
//
//
//
//3.5
//
//Question:
//Write a program which can map() and filter() to make a list whose elements are square of even number in [1,2,3,4,5,6,7,8,9,10].
//
//Hints:
//
//Use map() to generate a list.
//Use filter() to filter elements of a list.
//Use lambda to define anonymous functions.
//
//
//
//3.5
//
//Question:
//Write a program which can filter() to make a list whose elements are even number between 1 and 20 (both included).
//
//Hints:
//
//Use filter() to filter elements of a list.
//Use lambda to define anonymous functions.
//
//
//
//3.5
//
//Question:
//Write a program which can map() to make a list whose elements are square of numbers between 1 and 20 (both included).
//
//Hints:
//
//Use map() to generate a list.
//Use lambda to define anonymous functions.
//
//
//
//7.2
//
//Question:
//Define a class named American which has a static method called printNationality.
//
//Hints:
//
//Use @staticmethod decorator to define class static method.
//
//
//
//
//7.2
//
//Question:
//Define a class named American and its subclass NewYorker. 
//
//Hints:
//
//Use class Subclass(ParentClass) to define a subclass.
//
//
//
//
//
//7.2
//
//Question:
//Define a class named Circle which can be constructed by a radius. The Circle class has a method which can compute the area. 
//
//Hints:
//
//Use def methodName(self) to define a method.
//
//
//
//
//7.2
//
//Define a class named Rectangle which can be constructed by a length and width. The Rectangle class has a method which can compute the area. 
//
//Hints:
//
//Use def methodName(self) to define a method.
//
//
//
//
//7.2
//
//Define a class named Shape and its subclass Square. The Square class has an init function which takes a length as argument. Both classes have a area function which can print the area of the shape where Shape's area is 0 by default.
//
//Hints:
//
//To override a method in super class, we can define a method with the same name in the super class.
//
//
//
//
//
//Please raise a RuntimeError exception.
//
//Hints:
//
//Use raise() to raise an exception.
//
//
//
//Write a function to compute 5/0 and use try/except to catch the exceptions.
//
//Hints:
//
//Use try/except to catch exceptions.
//
//
//
//Define a custom exception class which takes a string message as attribute.
//
//Hints:
//
//To define a custom exception, we need to define a class inherited from Exception.
//
//
//
//Question:
//
//Assuming that we have some email addresses in the "username@companyname.com" format, please write program to print the user name of a given email address. Both user names and company names are composed of letters only.
//
//Example:
//If the following email address is given as input to the program:
//
//john@google.com
//
//Then, the output of the program should be:
//
//john
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//Hints:
//
//Use //w to match letters.
//
//
//
//Question:
//
//Assuming that we have some email addresses in the "username@companyname.com" format, please write program to print the company name of a given email address. Both user names and company names are composed of letters only.
//
//Example:
//If the following email address is given as input to the program:
//
//john@google.com
//
//Then, the output of the program should be:
//
//google
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//Hints:
//
//Use //w to match letters.
//
//
//
//Question:
//
//Write a program which accepts a sequence of words separated by whitespace as input to print the words composed of digits only.
//
//Example:
//If the following words is given as input to the program:
//
//2 cats and 3 dogs.
//
//Then, the output of the program should be:
//
//['2', '3']
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//Hints:
//
//Use re.findall() to find all substring using regex.
//
//
//
//Question:
//
//
//Print a unicode string "hello world".
//
//Hints:
//
//Use u'strings' format to define unicode string.
//
//
//
//Write a program to read an ASCII string and to convert it to a unicode string encoded by utf-8.
//
//Hints:
//
//Use unicode() function to convert.
//
//
//
//Question:
//
//Write a special comment to indicate a Python source code file is in unicode.
//
//Hints:
//
//
//
//Question:
//
//Write a program to compute 1/2+2/3+3/4+...+n/n+1 with a given n input by console (n>0).
//
//Example:
//If the following n is given as input to the program:
//
//5
//
//Then, the output of the program should be:
//
//3.55
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//Hints:
//Use float() to convert an integer to a float
//
//
//
//Question:
//
//Write a program to compute:
//
//f(n)=f(n-1)+100 when n>0
//and f(0)=1
//
//with a given n input by console (n>0).
//
//Example:
//If the following n is given as input to the program:
//
//5
//
//Then, the output of the program should be:
//
//500
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//Hints:
//We can define recursive function in Python.
//
//
//
//
//Question:
//
//
//The Fibonacci Sequence is computed based on the following formula:
//
//
//f(n)=0 if n=0
//f(n)=1 if n=1
//f(n)=f(n-1)+f(n-2) if n>1
//
//Please write a program to compute the value of f(n) with a given n input by console.
//
//Example:
//If the following n is given as input to the program:
//
//7
//
//Then, the output of the program should be:
//
//13
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//Hints:
//We can define recursive function in Python.
//
//
//
//
//
//Question:
//
//The Fibonacci Sequence is computed based on the following formula:
//
//
//f(n)=0 if n=0
//f(n)=1 if n=1
//f(n)=f(n-1)+f(n-2) if n>1
//
//Please write a program using list comprehension to print the Fibonacci Sequence in comma separated form with a given n input by console.
//
//Example:
//If the following n is given as input to the program:
//
//7
//
//Then, the output of the program should be:
//
//0,1,1,2,3,5,8,13
//
//
//Hints:
//We can define recursive function in Python.
//Use list comprehension to generate a list from an existing list.
//Use string.join() to join a list of strings.
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//
//
//
//Question:
//
//Please write a program using generator to print the even numbers between 0 and n in comma separated form while n is input by console.
//
//Example:
//If the following n is given as input to the program:
//
//10
//
//Then, the output of the program should be:
//
//0,2,4,6,8,10
//
//Hints:
//Use yield to produce the next value in generator.
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//
//
//
//Question:
//
//Please write a program using generator to print the numbers which can be divisible by 5 and 7 between 0 and n in comma separated form while n is input by console.
//
//Example:
//If the following n is given as input to the program:
//
//100
//
//Then, the output of the program should be:
//
//0,35,70
//
//Hints:
//Use yield to produce the next value in generator.
//
//In case of input data being supplied to the question, it should be assumed to be a console input.
//
//
//
//
//Question:
//
//
//Please write assert statements to verify that every number in the list [2,4,6,8] is even.
//
//
//
//Hints:
//Use "assert expression" to make assertion.
//
//
//
//
//Question:
//
//Please write a program which accepts basic mathematic expression from console and print the evaluation result.
//
//Example:
//If the following string is given as input to the program:
//
//35+3
//
//Then, the output of the program should be:
//
//38
//
//Hints:
//Use eval() to evaluate an expression.
//
//
//
//
//Question:
//
//Please write a binary search function which searches an item in a sorted list. The function should return the index of element to be searched in the list.
//
//
//Hints:
//Use if/elif to deal with conditions.
//
//
//
//
//Question:
//
//Please write a binary search function which searches an item in a sorted list. The function should return the index of element to be searched in the list.
//
//
//Hints:
//Use if/elif to deal with conditions.
//
//
//
//
//Question:
//
//Please generate a random float where the value is between 10 and 100 using Python math module.
//
//
//
//Hints:
//Use random.random() to generate a random float in [0,1].
//
//
//
//
//Question:
//
//Please generate a random float where the value is between 5 and 95 using Python math module.
//
//
//
//Hints:
//Use random.random() to generate a random float in [0,1].
//
//
//
//
//Question:
//
//Please write a program to output a random even number between 0 and 10 inclusive using random module and list comprehension.
//
//
//
//Hints:
//Use random.choice() to a random element from a list.
//
//
//
//
//Question:
//
//Please write a program to output a random number, which is divisible by 5 and 7, between 0 and 10 inclusive using random module and list comprehension.
//
//
//
//Hints:
//Use random.choice() to a random element from a list.
//
//
//
//
//
//Question:
//
//Please write a program to generate a list with 5 random numbers between 100 and 200 inclusive.
//
//
//
//Hints:
//Use random.sample() to generate a list of random values.
//
//
//
//
//Question:
//
//Please write a program to randomly generate a list with 5 even numbers between 100 and 200 inclusive.
//
//
//
//Hints:
//Use random.sample() to generate a list of random values.
//
//
//
//
//Question:
//
//Please write a program to randomly generate a list with 5 numbers, which are divisible by 5 and 7 , between 1 and 1000 inclusive.
//
//
//
//Hints:
//Use random.sample() to generate a list of random values.
//
//
//
//
//
//Question:
//
//Please write a program to randomly print a integer number between 7 and 15 inclusive.
//
//
//
//Hints:
//Use random.randrange() to a random integer in a given range.
//
//
//
//
//
//Question:
//
//Please write a program to compress and decompress the string "hello world!hello world!hello world!hello world!".
//
//
//
//Hints:
//Use zlib.compress() and zlib.decompress() to compress and decompress a string.
//
//
//
//
//Question:
//
//Please write a program to print the running time of execution of "1+1" for 100 times.
//
//
//
//Hints:
//Use timeit() function to measure the running time.
//
//
//
//Question:
//
//Please write a program to shuffle and print the list [3,6,7,8].
//
//
//
//Hints:
//Use shuffle() function to shuffle a list.
//
//
//
//Question:
//
//Please write a program to shuffle and print the list [3,6,7,8].
//
//
//
//Hints:
//Use shuffle() function to shuffle a list.
//
//
//
//Question:
//
//Please write a program to generate all sentences where subject is in ["I", "You"] and verb is in ["Play", "Love"] and the object is in ["Hockey","Football"].
//
//Hints:
//Use list[index] notation to get a element from a list.
//
//
//
//Please write a program to print the list after removing delete even numbers in [5,6,77,45,22,12,24].
//
//Hints:
//Use list comprehension to delete a bunch of element from a list.
//
//
//
//Question:
//
//By using list comprehension, please write a program to print the list after removing delete numbers which are divisible by 5 and 7 in [12,24,35,70,88,120,155].
//
//Hints:
//Use list comprehension to delete a bunch of element from a list.
//
//
//
//Question:
//
//By using list comprehension, please write a program to print the list after removing the 0th, 2nd, 4th,6th numbers in [12,24,35,70,88,120,155].
//
//Hints:
//Use list comprehension to delete a bunch of element from a list.
//Use enumerate() to get (index, value) tuple.
//
//
//
//
//Question:
//
//By using list comprehension, please write a program generate a 3*5*8 3D array whose each element is 0.
//
//Hints:
//Use list comprehension to make an array.
//
//
//
//Question:
//
//By using list comprehension, please write a program to print the list after removing the 0th,4th,5th numbers in [12,24,35,70,88,120,155].
//
//Hints:
//Use list comprehension to delete a bunch of element from a list.
//Use enumerate() to get (index, value) tuple.
//
//
//
//
//Question:
//
//By using list comprehension, please write a program to print the list after removing the value 24 in [12,24,35,24,88,120,155].
//
//Hints:
//Use list's remove method to delete a value.
//
//
//
//Question:
//
//With two given lists [1,3,6,78,35,55] and [12,24,35,24,88,120,155], write a program to make a list whose elements are intersection of the above given lists.
//
//Hints:
//Use set() and "&=" to do set intersection operation.
//
//
//
//
//With a given list [12,24,35,24,88,120,155,88,120,155], write a program to print this list after removing all duplicate values with original order reserved.
//
//Hints:
//Use set() to store a number of values without duplicate.
//
//
//
//Question:
//
//Define a class Person and its two child classes: Male and Female. All classes have a method "getGender" which can print "Male" for Male class and "Female" for Female class.
//
//Hints:
//Use Subclass(Parentclass) to define a child class.
//
//
//
//Question:
//
//Please write a program which count and print the numbers of each character in a string input by console.
//
//Example:
//If the following string is given as input to the program:
//
//abcdefgabc
//
//Then, the output of the program should be:
//
//a,2
//c,2
//b,2
//e,1
//d,1
//g,1
//f,1
//
//Hints:
//Use dict to store key/value pairs.
//Use dict.get() method to lookup a key with default value.
//
//
//
//
//Question:
//
//Please write a program which accepts a string from console and print it in reverse order.
//
//Example:
//If the following string is given as input to the program:
//
//rise to vote sir
//
//Then, the output of the program should be:
//
//ris etov ot esir
//
//Hints:
//Use list[::-1] to iterate a list in a reverse order.
//
//
//
//
//Question:
//
//Please write a program which accepts a string from console and print the characters that have even indexes.
//
//Example:
//If the following string is given as input to the program:
//
//H1e2l3l4o5w6o7r8l9d
//
//Then, the output of the program should be:
//
//Helloworld
//
//Hints:
//Use list[::2] to iterate a list by step 2.
//
//
//
//
//
//Question:
//
//Please write a program which prints all permutations of [1,2,3]
//
//
//Hints:
//Use itertools.permutations() to get permutations of list.
//
//
//
//Question:
//
//Write a program to solve a classic ancient Chinese puzzle: 
//We count 35 heads and 94 legs among the chickens and rabbits in a farm. How many rabbits and how many chickens do we have?
//
//Hint:
//Use for loop to iterate all possible solutions.
//
//
//

int main() {
	question1();
	question2(8);
	question3(8);
	question4("34,67,55,33,12,98");
	question5_test();
	question6("100,150,180");
	question7(3, 5);
	question8("without,hello,bag,world");
	question9("hello\nhey\nhow are you\nThis should all be in captials!");
	question10("hello world and practice makes perfect and hello world again");
	question11("0100,0011,1010,1001");
	question12();
	question13("hello world! 123");
	question14("Hello world!");
	question15(9);
	question16(10);
	question17("D 300\nD 300\nW 200\nD 100");
	question18("ABd1234@1,a F1#,2w3E*,2We3345");
	vector<vector<string>> question19_input = {
		vector<string> {"Tom", "19", "80"},
		vector<string> {"John", "20", "90"},
		vector<string> {"Jony", "17", "93"},
		vector<string> {"Jony", "17", "93"},
		vector<string> {"Json", "21", "85"},
	};
	question19(question19_input);
	question20(100);
	question21("UP 5\nDOWN 3\nLEFT 3\nRIGHT 2");
	question22("New to Python or choosing between Python 2 and Python 3? Read Python 2 or Python 3.");

	cout << endl << endl;
	system("pause");
}