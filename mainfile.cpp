#include"myheader.h"
using namespace myanimals;


int main(){

	int x,y;	//variable definition & ";"to terminate line
	std::cout<<"Please enter two numbers\n";	//similar to printf in c & cout => console output
	std::cin>>x>>y;		//similar to scanf in c => console input
	int sum =x+y;        //complete their sum in new variable sum which is defined and declared in same line
	std::cout<<"their sum is "<<sum<<std::endl;		//std::endl => end of line

	cout<<"\nVariables------------------------------------------\n";
	{
        double f[5];
        f[4]=2.5;
        int m[10];
        m[2]=4;
        cout << f[m[2]]; //m[2]=4 ==> f[m[2]]=f[4]=2.5
	}
	cout<<"\n------------------------------------------\n";
	{

	int A[15][30];   //declares array of 15 elements which itself are arrays of 30 integers ,i.e, multidimensional array
	int a[]={10,11,12,13}; // declare and initialises an array a[4]
	bool b[]={false,true};
	char c[]={'c','a','b'};

	int* r[15];  //array of pointers
	}
	cout<<"\n-------------------Using Enums-----------------------\n";
	{
	Day day1=SUN;
	Modd mood1=HAPPY;
	std::cout<<day1<<"\n";
	std::cout<<mood1<<"\n";
	}
	cout<<"\n------------------Using floats------------------------\n";
	{
	float myfloat=1;
	double mydouble=3.33;
	std::cout<<"Value of float is "<<myfloat<<" and size of float is "<<sizeof(myfloat)<<"\n";
	std::cout<<"Value of double is "<<mydouble<<" and size of double is "<<sizeof(mydouble);
	}
	cout<<"\n-------------------TyepDef----------------------\n";
	{
	const int CUT_OFF[]={10,20,30,40};
	const double PI=3.14;
	const int N_DAYS=7;
	const int N_HOURS=24*N_DAYS;

	//PI=3.1428;  not allowed => Error: assignment of read-only variable 'PI'


	/* typedef usually defined at top of program */
	{
	    typedef char* BufferPtr;// type BufferPtr is a pointer to char
        typedef double Coordinate;

        BufferPtr p; // same as   <char* p;>
        Coordinate x,y;  // same as <double x,y;>

        cout<<sizeof(x);
	}
	//Coordinate z;   not allowed  => Error : 'Coordinate was not declared in this scope'

	const int CAT=2; //local CAT

	cout<<CAT;//when there is conflict between global and local , the most immediate will be chosen
	cout<<myanimals::dog;


	cat=10; // when we have namespace and name => called fully qualified name
	cout<<cat;
	}
	cout<<"\n-------------------Passenger CXlass atarted-----------------------\n";
	{
	Passenger1 *p;
	p= new Passenger1 ;// p points to the new passenger
	p->name="Pocahontas"; //(*p).name is same as p->name
	p->mealPref=REGULAR;
	p->isfreqFlyer=false;
	p->freqFlyerNo="NONE";
	cout<<p->name;

	delete p;//destorys the object p points to.

	char* buffer=new char[500];
	buffer[3]='a';
	delete [] buffer;//frees up the memory, alloacted to array, for further use
	}
	cout<<"\n---------------Using Pointer---------------------------\n";
	{
		char ch='a';
        char* p=&ch; 			 //p holds the adress of ch  &  char* is data type for pointer p ,it can store address of variable of char data type
        std::cout<<*p<<"\n";  	 // outputs 'a'
        ch='z'; 	 			 // ch holds 'z'
        std::cout<<*p<<"\n"; 	 //outputs 'z'
        *p='x';		 			 // ch now holds 'x'

        int* x,y,z; // * operator binds to nearest variable , so it is same as int* x; int y,z;
        int n=1;
        x=&n;
        // y=&n; => ERROR : y is not an integer pointer , it is a simple integer
	}
	cout<<"\n------------------------------------------\n";
	{
		string author="Samuel Clemmens";
        string& penName=author; // penName is an alias to author
        cout<<author<<endl;
        cout<< penName<<endl;
        author ="Aman Gaurav";
        cout<<penName<<endl;
        cout<<author<<endl;

        penName="Mark Twin";
        cout<<penName<<endl;
        cout<<author<<endl;
	}
	cout<<"--------------------using sizeof----------------------\n";
	{
		char ch1='a';
        int m=10;
        float n=20.0;
        double p=20.0;
        std::cout<<"Size of char :"<<sizeof(ch1)<<"\n";
        std::cout<<"Size of int :"<<sizeof(m)<<"\n";
        std::cout<<"Size of float :"<<sizeof(n)<<"\n";
        std::cout<<"Size of double :"<<sizeof(p)<<"\n";
	}
	cout<<"------------------------------------------\n";
	{
		string s="to be ";
        string t="not "+s;  // t="not to be"
        string u=s+" or "+t;  // u="to be or not to be"
        if (s>t){//compares string in lexicographical order
            std::cout<<u;
	}
	cout<<"\n------------------------------------------\n";
	string s1="Steve";
	int i =s1.size(); // s is an object of class string and it has access to function(method) size defined in string class
	char c=s1[3];
	s1+=" Smith";  //s=s+" Smith"
	std::cout<<s1<<"\n"<<c;
	}
	cout<<"\n------------------------------------------\n";
	{
		Passenger1 *p;
        p= new Passenger1 ;// p points to the new passenger
        p->name="Pocahontas"; //(*p).name is same as p->name
        p->mealPref=REGULAR;
        p->isfreqFlyer=false;
        p->freqFlyerNo="NONE";
        cout<<p->name;

	delete p;//destorys the object p points to.

	char* buffer=new char[500];
	buffer[3]='a';
	delete [] buffer;//frees up the memory, alloacted to array, for further use
	}
	cout<<"\n---------------------------------------\n";
	{
		Passenger1 pass={"Steve Smith",VEGETARIAN,true,"293145"};
        pass.name="David Warner";  // . is called member selection operator
        pass.mealPref=REGULAR;
        Passenger1 pass2;
        pass2=pass;// all details deeply copied
	}
	cout<<"\nLine 294------------------------------------------\n";
	{
		short n;
        int octal_number=0400;//octal number
        int hex_number=0x120;//hexa decimal number
        n=100;
        char new_character='\n';
        char ch1='1';
        double number_1=1;

	//int 1_number=10; => not valid identifier name ,can't start with a number
	int _number=10;// but can start with underscore
	}

	cout<<"\n-------------------using arrays-----------------------\n";
	{
        int a[]={0,1,2,3};
        int i=2;
        int j=i++;//j=2 , i=3
        int k=--i;//k=2 , i=2
        cout<<a[k++]<<endl;  //a[2]  ,after that k=3
        cout<<i<<j<<k<<"\n";

        int b=2;
        cout<<b--<<++b<<--b<<endl;

        b=2;
        cout<<b--;
        cout<<++b;
        cout<<--b<<endl;
	}

	cout<<"\n------------------Conditional operatiors------------------------\n";
	//RELATIONAL AND LOGICAL OPERATORS
	{
		cout<<(3>2)<<endl; //returns 1
		//  && =>logical AND
		//  || => logical OR
		// Short circuiting ==>  exp1 && exp2  //if exp1 evaluates to false ,exp2 is ignored

	}
	cout<<"\n-----------------Strngs-------------------------\n";
	//ASSIGNMENT OPERATOR
	{
		int i=10;
		int j=5;
		string s="JASS ";
		i-=4;  //i=i-4
		s+="MANAK"; // s=s+"MANAK"
		cout<<i<<endl<<s;
	}
	cout<<"\n------------------------------------------\n";
	//OTHER OPERATORS
	{
		//class_name::member => class scope resolution
		//namespace_name::member => namespace resloution
		//bool_exp?true_exp:false_exp;
		2>3?cout<<"TRUE":cout<<"FALSE";
		int x=3,y=4, max;
		max=x>y?x:y;
		cout<<max;
	}
	cout<<"\n------------------------------------------\n";
	{
		//stream>>var;
		//stream<<var;
	}

	//Operator Precedence
	{
		int i=2*3-5;  //* has precedence over - , so * first
		int j=2*(3-5);

	}
	cout<<"\n----------------------Casting--------------------\n";

	{
	double d1=3.2;
	double d2=3.99999;
	int i1=static_cast<int> (d1);
	cout<<i1<<"\n";

	int i2=static_cast<int> (d2);
	cout<<i2<<"\n";
	}
	{
		double d=4.8;
		int i=3;
		double d3=i/d;
		cout<<d3<<"\n";

		int i3=d3;
		cout<<i3<<"\n";
	}

		{
		int cat=14;
		double dog =double(cat); //traditional C style casting
		double lion=double(cat); //C++ style casting
		cout<<cat<<endl<<dog<<endl<<lion<<endl;
		cout<<sizeof(cat)<<endl<<sizeof(dog)<<endl<<sizeof(lion);

		int i1=18;
		int i2=16;

		double dv1=i1/i2;
		double dv2=double(i1)/double(i2);
		double dv3=double(i1/i2);

		cout<<endl<<dv1<<endl<<dv2<<endl<<dv3<<endl;
	}
cout<<"\nLine 405------------------------------------------\n";

/*     				Section 1.3
    				Control flow
*/




 {
 		int a[100];
		int i=0;
		int sum=0;
		while(i<100&&a[i]>=0)
		{
			sum+=a[i++];}
		cout<<"Sum : "<<sum<<"\n";
 }
 cout<<"\n-------------------------Using do while---------------------------------\n";
{

	int a[20];
	int i=0;
	int sum=0;

	do
	{
		if(a[i]>=0)
			sum+=a[i];
	}while(i++<19);
	cout<<"sum : "<<sum<<"\n";


 }
 cout<<"\n--------------------------Using const--------------------------------\n";
 {


	const int NUM_ELEMENTS=10;
	double b[NUM_ELEMENTS]={2.0,3.5,4.6,-3.8,1.2,5.9};
	for (int k=0;k<NUM_ELEMENTS;k++)
	{
		if(b[k]>0)
			cout<<fixed<<b[k]<<"\n";
	}
	//cout<<k<<"\n";  k is not accessible outside loop

	// Although the loop variable is declared outside the for loop  , the compiler treats it as if it was local variable inside the loop

 }
 cout<<"\n--------------------------Using break--------------------------------\n";
 {
 	/*
 	BREAK AND CONTINUE STATEMENTS

 	==> C++ providees statements to change control flow , includeing the break , continue  and return statement
 	==> the continue statement causes the execution to skip to end of the loop and ready to start new execution


*/


	{
	const int NUM_ELEMENTS=10;
	double b[NUM_ELEMENTS]={2.0,3.5,4.6,-3.8,1.2,5.9};
	for (int k=0;k<NUM_ELEMENTS;k++)
	{
		if(b[k]>0)
			cout<<fixed<<b[k]<<"\n";
		else break;
	}
	}
	cout<<"\nLine 557------------------------------------------\n";
	const int NUM_ELEMENTS=10;
	double b[NUM_ELEMENTS]={2.0,3.5,4.6,-3.8,1.2,5.9};
	for (int k=0;k<NUM_ELEMENTS;k++)
	{
		if (b[k]<=0) continue;
			cout<<b[k]<<"\n";
	}

 	}


	{
		Passenger1 pass={"Steve Smith",VEGETARIAN,true,"293145"};
        pass.name="David Warner";
        pass.mealPref=REGULAR;
        Passenger1 pass2={"David Warner",REGULAR,true,"293145"};
        bool result=pass==pass2;
        print(pass);
        cout<<result;
	}
	cout<<"\n------------------------------------------\n";
	{
		int a[]={1,2,3,4,5,6,7,8,9,0};
        bool result=evenSum(a,sizeof(a)/sizeof(a[0]));  // here the arguments are actual arguments

        if (result) cout<<"Sum is even" ;
        else cout<<"Sum is odd ";

        //Function declarartion must appear in every file that invokes the function   ,but the definition must appear only once.
        cout<<a[3]<<endl;
        cout<<min(5,3);
	}

	{
		int cat=1;
        int dog=5;
        f(cat,dog);
        cout<<endl<<cat<<endl<<dog;
	}

	{
		Counter ctr;  				// an instance of class Counter
//	cout<<ctr.count();       private data member , it can't be accessed
        cout<<ctr.getCounter()<<endl;   // . is called memeber selection operator
        ctr.increaseBy(5);
        cout<<ctr.getCounter()<<endl;
        ctr.increaseBy(3);
        cout<<ctr.getCounter()<<endl;

        Passenger pass("Steve Smith",VEGETARIAN);  //calls the constructor which takes argument
        if (!pass.isFrequentFlyer())
        {
            pass.makeFreqFlyer("392953");
        }
        pass.dispalyDetails();
        Passenger p1;  // calls default constructor
        Passenger p2(p1); //copy constructor
        Passenger p5=p2;
        Passenger* pp1=new Passenger;
        Passenger* pp2=new Passenger("Joe Root",NO_PREFERENCE);



        p2.dispalyDetails();



	cout<<"\n--------------------------\n";

	Vect a(100);
	Vect b=a;  // b.data=a.data  &  b.size=a.size    new memory is allocated to Vect b
	Vect c(0);
	c=a;
	a.setdata();
	a.display();

	cout<<"\t";
	b.display();
	cout<<"\t";
	c.display();
	cout<<"\tDone";

	cout<<"\n---------------------------------\n";


	delete pp1;
	delete pp2;
	}

	{
	string s="a dog";
	s+=" is a dog";  //concatenate s => s="a dog is a dog"

	cout<<s.find("dog")<<endl;  // finds first occurence of dog starting from 0 index
	cout<<s.find("dog",3)<<endl;  // finds first occurence of dog starting from index 3
	if(s.find("doug")==string::npos){
		cout<<"\nDoug not found\n";
	}

	cout<<s.substr(7,5)<<endl;   // prints substring of s starting from index 7 with length 5

	s.replace(2,3,"frog");  // s="a frog is a dog"  //size of string is changed ;

	s.erase(6,3); //erase substring of length 3 starting from index 6 =>s= "a frog a dog"

	s.insert(0,"is");//s="is a frog a dog

	if(s==" is a frog a dog"){
		cout<<"\nEqual\n";
	}

	if (s<" is a frog a toad"){
		cout<<"true\n";
	}

	if (s>" is a frog a toad"){
		cout<<"false\n";
	}
	}

	vector<int> scores(100);  // same as int scores[100]  , but can change size later
	vector<char> buffer(500);
	vector<Passenger1> passList(20);

	//Accessing elements of vector
	int i=250;
	cout<<scores[i]<<endl;  // will not raise am error if out of index

	//buffer.at(i)=buffer.at(2*i);  // will raise an error if out of index

	vector<int> newScores=scores;

	scores.resize(scores.size()+10);

	cout<<scores.size();

}
