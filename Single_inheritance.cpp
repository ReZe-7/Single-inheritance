#include <iostream>

using namespace std;



// base class

class student

{

  int rn;

  char name[20];

  public:

	void input()

	{

		cout<<"ENTER STUDENT DETAIL\nENTER ROLL NO. : ";

		cin>>rn;

		cout<<"ENTER NAME :";

		cin>>name;

	}

	void show()

	{

		cout<<"STUDENT ROLL NO. : "<<rn;

		cout<<"\nSTUDENT NAME : "<<name;

	}

};

class person:public student  // derived class inherit calss student publicly

{

   char br[5];

   char gender;

   public:

   	 void input()

		{

			student::input();

            cout<<"ENTER BRANCH : ";

		    cin>>br;

		   	cout<<"ENTER GENDER(M/F) :";

		    cin>>gender;



		}

	 void show()

	   {

	  	     student::show();

	  	     cout<<"\nSTUDENT BRANCH : "<<br;

	  	     cout<<"\nSTUDENT GENDER : "<<gender;

	   }



};

// main() function

int main()

{

  person  a; // object of class person

  a.input();
  cout<<"\n";
  a.show();

  return 0;

}
