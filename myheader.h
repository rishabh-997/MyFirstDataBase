#ifndef myheader_h                          						 // avoid repeated expansion
#define myheader_h
#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>

using namespace std;

//namespace definition
namespace myanimals{
	int cat;
	string dog ="Bow Wow";
}


typedef char* BufferPtr;// type BufferPtr is a pointer to char
typedef double Coordinate;

enum MealType{NO_PREFERENCE,REGULAR,LOW_FAT,VEGETARIAN};

struct Passenger1{
		string name;
		MealType mealPref;
		bool  isfreqFlyer;
		string freqFlyerNo;
	};

enum Day{SUN,MON,TUE,WED,THU,FRI,SAT}; //value assigned in order 0 to 6
enum Modd{HAPPY=3,SAD=1,ANXIOUS=4,SLEEPY=2};


class Counter{
	public:							//access specifier
		Counter();					// constructor : use dto initialise the objects of class , it is automatically called whenever an object is declared.
		int getCounter();             //member functions
		void increaseBy(int x);
	private :
		int count;						//data member , can be of any types  , may be anotther class or structure
	//	Passenger p1;
};



class Passenger{
	private :
		string name;
		MealType mealPref;
		bool isfreqFlyer;
		string freqFlyerNo;
	public:
		Passenger(); // default constructor
		Passenger(const string& newName,MealType newMealPref,const string& ffn);  // default argument : if last argument is not given , it is set to "None"
		Passenger(const Passenger& pass);

		bool isFrequentFlyer() const{  // const keyword tells compiler not to change any data member ,these type of funcions are called accessor function
		return isfreqFlyer;}

		void makeFreqFlyer(const string& newFreqFlyerNo){  // Update function
		isfreqFlyer =true;
		freqFlyerNo =newFreqFlyerNo;
		}

		void dispalyDetails(){
			cout<<"Passenger Name : "<<name;
			cout<<"\nMeal Preference : "<<mealPref;
			cout<<"\nFrequent Flyer : ";
			if(isfreqFlyer) {
			cout<<"Yes"<<"\nFrequent Flyer No. : "<<freqFlyerNo<<endl<<endl;
			}
			else cout<<"No\n\n";
		}


};


class Vect{
	public:
		Vect(int n);  //constructor declaration
		~Vect();  //destructor declaration

		Vect(const Vect&);
		void display();
		void change_size(int n);
		void setdata();
		Vect operator=(const Vect&);
	private:
		int *data;
		int size;
};



class SomeClass{
	private:
		int secret;
	public :
		friend ostream& operator<<(ostream& out,const SomeClass& x);  //  << is an operator defined in class ostream
};

class Vector{
	public:
	private:
		double coord[3];  // for ex: {x1,x2,x3}
		friend class Matrix;
};

class Matrix{
	public:
		Vector multiply(const Vector& a);
	private:
		double a[3][3];

};

Vector Matrix::multiply(const Vector& v){
	Vector w;
	for(int i=0;i<3;i++){
		//w.coord[i]=v.coord[0]*a[i][0]+v.coord[1]*a[i][1]+v.coord[2]*a[i][2];
		w.coord[i]=0;
		for(int j=0;j<3;j++) w.coord[i]+=a[i][j]*v.coord[j];
	}
	return w;
}


bool evenSum(int a[],int n); //Function checks whether sum is even or not

inline int min(int x, int y){return (x<y?x:y);}

void f(int value ,int &ref);

void print(int x);

void print(const Passenger& pass);

bool operator==(const Passenger& x, const Passenger& y);

#include "myheader.cpp"
#endif

