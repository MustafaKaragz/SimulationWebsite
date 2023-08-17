#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Product {          // I defined the base class ''Product class''.
protected:                   //I used protected: definition because other classes will inherit from Product class.
	string name;
	string language;
	string genre;
	string category;
	int stock;
	double price;
	string productcode;

public:                  //  I used public: definition to access from anywhere.
	void setname(string _name)
	{                                    // I will describe the SET and GET commands in general 
		name = _name;
	}
	string getname()
	{
		return name;
	}
	void setlanguage(string _language)   //With the SET command, we can take external variables and assign the result to private or protected variables.
	{
		language = _language;
	}
	string getlanguage()             // With the GET command, we can call the variables and display them on the screen.
	{
		return language;
	}
	void setgenre(string _genre)
	{
		genre = _genre;
	}
	string getgenre()
	{
		return genre;
	}
	void setcategory(string _category)
	{
		category = _category;
	}
	string getcategory()
	{
		return category;
	}
	void setstock(int _stock)
	{
		stock = _stock;                 // I have assigned here.
	}
	int getstock()
	{
		return stock;                //I called it with the 'return.' 
	}
	void setprice(double _price)
	{
		price = _price;
	}
	double getprice()
	{
		return price;
	}
	void setproductcode(string _productcode)
	{
		productcode = _productcode;
	}

	string getproductcode()
	{
		return productcode;
	}



	bool checkStock()          // I'm checking if the product is in stock.
	{
		return stock > 0;
	}




	void display()                  //I showed the results of the variables on the screen with the display command.
	{
		cout << "Product name:" << name << endl;
		cout << "Language:" << language << endl;
		cout << "Genre:" << genre << endl;
		cout << "Category:" << category << endl;
		cout << "Stock:" << stock << endl;
		cout << "Price:" << price << endl;
		cout << "Product code:" << productcode << endl;
	}
	double calculateDiscount()     // I calculated the discount price.
	{
		return 0.0;      // No discount will be applied in the product class.
	}

};



class Book : public Product {           // I inherited from 'Product class' variables.
private:                                // Only variables private to the book class.
	string publisher;
	string isbn;

public:
	Book();              // I defined a constructor for the Book class.
	Book(string, string, string, string, int, double, string, string, string);     // I made the assignment in int main by defining a parameterized constructor.
	void display()        //I showed the results of the variables on the screen with the display command.
	{
		cout << "Book name:" << name << endl;
		cout << "Language:" << language << endl;
		cout << "Genre:" << genre << endl;
		cout << "Category:" << category << endl;
		cout << "Stock:" << stock << endl;
		cout << "Price:" << price << endl;
		cout << "Product code:" << productcode << endl;
		cout << "Publisher:" << publisher << endl;
		cout << "ISBN:" << isbn << endl;

	}

	double calculateDiscount()    // I defined the 12 % discount rate for the book with the calculatediscount() function.
	{
		return price - (price * 0.12);        //  I'm assigning a 12% discount result. 
	}
};




//I am assigning null values ​​to the default constructor so that there is no error in the main part.

Book::Book()

{
	name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	productcode = "";
	publisher = "";
	isbn = "";

}




//Since I will assign in main thanks to the parameterized constructor.I synced here.

Book::Book(string _name, string _language, string _genre, string _category, int _stock, double _price, string _productcode, string _publisher, string _isbn)
{
	name = _name;
	language = _language;
	genre = _genre;
	category = _category;
	stock = _stock;
	price = _price;
	productcode = _productcode;
	publisher = _publisher;
	isbn = _isbn;

}








class Music : public Product {   // I inherited from 'Product class' variables.
private:                        // Only variables private to the music class.
	string artist;
	string format;
	int runtime;
public:
	Music();                 // I defined a constructor for the Music class.
	Music(string, string, string, string, int, double, string, string, string, int);       // I made the assignment in int main by defining a parameterized constructor.
	void display()               //I showed the results of the variables on the screen with the display command.
	{
		cout << "Music name:" << name << endl;
		cout << "Language:" << language << endl;
		cout << "Genre:" << genre << endl;
		cout << "Category:" << category << endl;
		cout << "Stock:" << stock << endl;
		cout << "Price:" << price << endl;
		cout << "Product code:" << productcode << endl;
		cout << "Artist:" << artist << endl;
		cout << "Format:" << format << endl;
		cout << "Run Time:" << runtime << endl;
	}

	double calculateDiscount()    // I defined the 15 % discount rate for the book with the calculatediscount() function.
	{
		return price - (price * 0.15);         //  I'm assigning a 15% discount result
	}

};





//I am assigning null values ​​to the default constructor so that there is no error in the main part.

Music::Music()
{
	name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	productcode = "";
	artist = "";
	format = "";
	runtime = 0;
}




//Since I will assign in main thanks to the parameterized constructor.I synced here.

Music::Music(string _name, string _language, string _genre, string _category, int _stock, double _price, string _productcode, string _artist, string _format, int _runtime)
{

	name = _name;
	language = _language;
	genre = _genre;
	category = _category;
	stock = _stock;
	price = _price;
	productcode = _productcode;
	artist = _artist;
	format = _format;
	runtime = _runtime;


}





class Movie : public Product {            // I inherited from 'Product class' variables.
private:                                 // Only variables private to the movie class.
	string directors;
	string starring;
	string subtitles;
	string audiolanguage;
	int i;
public:

	Movie();   // I defined a constructor for the Movie class.
	Movie(string, string, string, string, int, double, string, string, string, string, string);     // I made the assignment in int main by defining a parameterized constructor.
	void display()           //I showed the results of the variables on the screen with the display command.
	{
		cout << "Movie name:" << name << endl;
		cout << "Language:" << language << endl;
		cout << "Genre:" << genre << endl;
		cout << "Category:" << category << endl;
		cout << "Stock:" << stock << endl;
		cout << "Price:" << price << endl;
		cout << "Product code:" << productcode << endl;
		cout << "Directors:";
		for (i = 1; i <= 2; i++)
		{
			cout << directors << " " << endl;
		}
		cout << "Starring:";
		for (i = 1; i <= 3; i++)
		{
			cout << starring << " " << endl;
		}
		cout << "Subtitles:" << subtitles << endl;
		cout << "Audio Language:" << audiolanguage << endl;
	}


	double calculateDiscount()  // I defined the 5 % discount rate for the book with the calculatediscount() function.
	{
		return price - (price * 0.05);  //  I'm assigning a 5% discount result
	}


};




//I am assigning null values ​​to the default constructor so that there is no error in the main part.

Movie::Movie()
{
	name = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	productcode = "";
	directors = "";
	starring = "";
	subtitles = "";
	audiolanguage = "";

}



//Since I will assign in main thanks to the parameterized constructor.I synced here.

Movie::Movie(string _name, string _language, string _genre, string _category, int _stock, double _price, string _productcode, string _directors, string _starring, string _subtitles, string _audiolanguage)

{
	name = _name;
	language = _language;
	genre = _genre;
	category = _category;
	stock = _stock;
	price = _price;
	productcode = _productcode;
	directors = _directors;
	starring = _starring;
	subtitles = _subtitles;
	audiolanguage = _audiolanguage;

}



class Cart {                               // For total price I defined Cart class.Thanks to cart class you can see your cart.  (I was able to access members of product class without using inheritance inside this class.)
public:
	vector<Product*> products;       // In here I used vector type because the use of vector is in the same logic as array type, the difference between the two is that vectors are more comprehensive.
	float totalPrice;               // Calculating the total price
	void addProduct(Product* product) {  // I add products to cart.
	}

	void display() {
		cout << "Product list: " << endl;
		int a = 1;
		for (const auto& product : products) {                    // I used the for loop to show the products as the product is entered into the cart.
			cout << a << ". " << product->getname() << " - " << product->getprice() << endl;    // Here I am showing the products in the cart.  
			a++;
			totalPrice += product->getprice();
		}
		cout << "Total price: " << totalPrice << endl;           // I am printing the total cart amount.

	}




};





template <typename T>
void updateTotalPrice(Cart& cart, T& product) {              // With the function here, I update the total price of the cart every time I add it to the cart.
	cart.totalPrice += product.calculateDiscount();
}



int main()
{
	double newprice;
	int newstock;
	Movie movie1("Avatar", "English", "Action", "Avatar (2009 film)", 7, 38, "B5FX", "James Cameron", "Laz Alonso", "Turkish", "English");    //I defined the movie.
	Book book1("Animal Farm", "English", "Political satire", "novel", 1, 17, "BF875", "Secker and Warburg", "XFT854");  // I defined the book.
	Music music1("Mockingbird", "English", "Hip-Hop", "Rap", 1, 5, "K9XHW", "Eminem", "Traditional Folk's", 4);  // I defined the music.
	cout << "(Please log in '*' to log in as an admin, leave blank to log in as a customer):";
	string login;
	getline(cin, login);   //Using the getline() command, pressing the 'Enter' key brings up the client menu.
	if (login == "*")      // I showed the interface for the admin here.
	{
		cout << "Admin Menu:" << endl;
		cout << "1.Update product information" << endl;
		cout << "2.Exit" << endl;
		cout << "Please make your selection:";
	bas:int adminchoice;                            // Typing 'bas:' restarted it to make a selection again.
		cin >> adminchoice;
		if (adminchoice == 1)
		{
		yukari:cout << "Updating Product Information." << endl;
			cout << endl;
			cout << "1.Book" << endl;
			cout << "2.Movie" << endl;
			cout << "3.Music" << endl;
			cout << "4.Exit" << endl;
			int categorychoose;
			cin >> categorychoose;
			switch (categorychoose)
			{
			case 1:                                        // I changed the stock quantity or price of the book  by selecting  case 1	
			{
				cout << "1.Update Stock." << endl;
				cout << "2.Update Price." << endl;
				cout << "3.Exit." << endl;
				int secondcategorychoose;
				cin >> secondcategorychoose;
				if (secondcategorychoose == 1)
				{
					cout << "Enter the number of stocks you want:";
					cin >> newstock;
					book1.setstock(newstock);   // In this part, I write the new stock amount over the old stock amount for book.
					cout << "Stock updated." << endl;
					cout << "New stock-->" << book1.getstock() << endl;   // In this part, I display the new stock amount for book.
					cout << endl;
					cout << "Updated stock version of the book:" << endl;
					book1.display();
					cout << "Would you like to make another update?(Y/N):" << endl;
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto yukari;  // returning to the main menu.
					}
					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;
					}
				}
				else if (secondcategorychoose == 2)
				{
					cout << "Enter the number of prices you want:";
					cin >> newprice;
					book1.setprice(newprice);        // In this part, I write the new price amount over the old price amount for book.
					cout << "Price updated." << endl;
					cout << "New price-->" << book1.getprice() << endl;       // In this part, I display the new price amount for book.
					cout << endl;
					cout << "Updated price version of the book:" << endl;
					book1.display();
					cout << "Would you like to make another update?(Y/N):" << endl;
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto yukari;  // returning to the main menu.
					}
					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;

					}


				}
				else if (secondcategorychoose == 3)
				{
					cout << "Exiting." << endl;      // Here you exit the shopping site.
					break;
				}
			}
			break;

			case 2:          // I changed the stock quantity or price of the movie  by selecting  case 2
			{

				cout << "1.Update Stock." << endl;
				cout << "2.Update Price." << endl;
				cout << "3.Exit." << endl;
				int secondcategorychoose;
				cin >> secondcategorychoose;
				if (secondcategorychoose == 1)
				{
					cout << "Enter the number of stocks you want:";
					cin >> newstock;
					movie1.setstock(newstock);               // In this part, I write the new stock amount over the old stock amount for movie.
					cout << "Stock updated." << endl;
					cout << "New stock-->" << movie1.getstock() << endl;  // In this part, I display the new stock amount for movie.
					cout << endl;
					cout << "Updated stock version of the movie:" << endl;
					movie1.display();
					cout << "Would you like to make another update?(Y/N):" << endl;
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto yukari;  // returning to the main menu.
					}
					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;
					}

				}
				else if (secondcategorychoose == 2)
				{
					cout << "Enter the number of prices you want:";
					cin >> newprice;
					movie1.setprice(newprice);   // In this part, I write the new price amount over the old price amount for movie.
					cout << "Price updated." << endl;
					cout << "New price-->" << movie1.getprice() << endl;     // In this part, I display the new price amount for movie.
					cout << endl;
					cout << "Updated price version of the movie:" << endl;
					movie1.display();
					cout << "Would you like to make another update?(Y/N):" << endl;
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto yukari;  // returning to the main menu.
					}
					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;
					}

				}
				else if (secondcategorychoose == 3)
				{
					cout << "Exiting." << endl;       // Here you exit the shopping site.
					break;
				}

			}
			break;

			case 3:              // I changed the stock quantity or price of the music  by selecting  case 3
			{

				cout << "1.Update Stock." << endl;
				cout << "2.Update Price." << endl;
				cout << "3.Exit." << endl;
				int secondcategorychoose;
				cin >> secondcategorychoose;
				if (secondcategorychoose == 1)
				{
					cout << "Enter the number of stocks you want:";
					cin >> newstock;
					music1.setstock(newstock);            // In this part, I write the new stock amount over the old stock amount for music.
					cout << "Stock updated." << endl;
					cout << "New stock-->" << music1.getstock() << endl;     // In this part, I display the new stock amount for music.
					cout << endl;
					cout << "Updated stock version of the music:" << endl;
					music1.display();
					cout << "Would you like to make another update?(Y/N):" << endl;
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto yukari;  // returning to the main menu.
					}
					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;
					}

				}
				else if (secondcategorychoose == 2)
				{
					cout << "Enter the number of prices you want:";
					cin >> newprice;
					music1.setprice(newprice);              // In this part, I write the new price amount over the old price amount for music.
					cout << "Price updated." << endl;
					cout << "New price-->" << music1.getprice() << endl;      // In this part, I display the new price amount for music.
					cout << endl;
					cout << "Updated price version of the music:" << endl;
					music1.display();
					cout << "Would you like to make another update?(Y/N):" << endl;
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto yukari;  // returning to the main menu.
					}
					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;
					}

				}
				else if (secondcategorychoose == 3)
				{
					cout << "Exiting." << endl;      // Here you exit the shopping site.
					break;
				}

			}
			break;


			}

		}
		else if (adminchoice == 2)
		{
			cout << "Exiting." << endl;   // When no adjusting are desired, the shopping site is exited.
		}
		else
		{
			cout << "Wrong Choice.Please try again." << endl;
			goto bas;         // I'm back to the beginning thanks to the 'goto' command.
		}


	}
	else         // Here, the customer is logged in.
	{
		Cart cart1;                                  // I made a definition in int main to reach the cart class.
		cout << "Customer Menu:" << endl;           // The interface that the customer has to choose is shown below.
	enust:cout << "1.Wiew Cart" << endl;        //I'm showing the total price in the cart.
		cout << "2.Select Category" << endl;      //I want the customer to view and select products.
		cout << "3.Exit" << endl;
		int customerchoice;
		cin >> customerchoice;
		switch (customerchoice)
		{
		case 1:                           //Thanks to customer entry into case 1, I give information about the cart.
		{
			cout << "Cart information:" << endl;
			cart1.display();
			cout << "Would you want to add another product? (Y/N):" << endl;
			char choose4;
			cin >> choose4;
			if (choose4 == 'Y' || choose4 == 'y')
			{
				cout << "you will return to the main menu..." << endl;
				goto enust;                                                 // I get the customer to go to the top.

			}

			else if (choose4 == 'N' || choose4 == 'n')
			{
				cout << "Exiting." << endl;
				break;

			}

			break;
		}

		case 2:
		{
			int choose2;
		ust:cout << "1.Book" << endl;
			cout << "2.Movie" << endl;
			cout << "3.Music" << endl;
			cout << "4.Exit" << endl;
			cin >> choose2;
			switch (choose2)
			{
			case 1:
			{
				cart1.addProduct(&book1);               // I add the selected book to the cart.
				updateTotalPrice(cart1, book1);        // I increase and update the price as the book is added.
				int choose3;
				cout << "1.Select Product" << endl;
				cout << "2.Exit" << endl;
				cin >> choose3;

				if (choose3 == 1)
				{
					cout << "You choose:\n" << endl;
					book1.display();
					cout << endl;
					double newdiscountedprice;
					newdiscountedprice = book1.calculateDiscount();    // I calculate the discount rate of the book.
					book1.setprice(newdiscountedprice);                // I assigned result inside the book class to show the discount.
					cout << "Discount-->" << 17 - book1.getprice() << endl;    // I'm showing the discount.
					cout << endl;
					cout << "New Book Price-->" << book1.getprice() << endl;     // I printed the new discounted price.
					Product* book = &book1;
					cart1.addProduct(book);      // I add the selected book to the cart.
					cout << "Would you like to add another product? (Y/N):";   // I'm asking if the customer can add another product to the cart.
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto enust;  // returning to the main menu.


					}

					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;

					}

				}
				else if (choose3 == 2)
				{
					cout << "Exiting." << endl;
					goto ust;
				}

			}

			break;

			case 2:
			{
				cart1.addProduct(&movie1); // I add the selected movie to the cart.
				updateTotalPrice(cart1, movie1);   // I increase and update the price as the movie is added.
				int choose3;
				cout << "1.Select Product" << endl;
				cout << "2.Exit" << endl;
				cin >> choose3;
				if (choose3 == 1)
				{
					cout << "You choose:\n" << endl;
					movie1.display();
					cout << endl;
					double newdiscountedprice;
					newdiscountedprice = movie1.calculateDiscount(); // I calculate the discount rate of the movie.
					movie1.setprice(newdiscountedprice);                // I assigned result inside the movie class to show the discount.
					cout << "Discount-->" << 38 - movie1.getprice() << endl;     // I'm showing the discount.
					cout << endl;
					cout << "New Movie Price-->" << movie1.getprice() << endl; // I printed the new discounted price.
					Product* movie = &movie1;
					cart1.addProduct(movie); // I add the selected movie to the cart.
					cout << "Would you like to add another product? (Y/N):";
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "You will return to the main menu..." << endl;
						goto enust; // returning to the main menu.

					}

					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;

					}
				}
				else if (choose3 == 2)
				{
					cout << "Exiting." << endl;
					goto ust;
				}

				break;


			case 3:

			{
				cart1.addProduct(&music1); // I add the selected movie to the cart.
				updateTotalPrice(cart1, music1); // I increase and update the price as the music is added
				int choose3;
				cout << "1.Select Product" << endl;
				cout << "2.Exit" << endl;
				cin >> choose3;

				if (choose3 == 1)
				{
					cout << "You choose:\n" << endl;
					music1.display();
					cout << endl;
					double newdiscountedprice;
					newdiscountedprice = music1.calculateDiscount(); // I calculate the discount rate of the music.
					music1.setprice(newdiscountedprice);              // I assigned result inside the music class to show the discount.
					cout << "Discount-->" << 5 - music1.getprice() << endl;    // I'm showing the discount.
					cout << endl;
					cout << "New Music Price-->" << music1.getprice() << endl;   // I printed the new discounted price.
					Product* music = &music1;
					cart1.addProduct(music);                                       // I add the selected music to the cart.
					cout << "Would you like to add another product? (Y/N):";
					char choose4;
					cin >> choose4;
					if (choose4 == 'Y' || choose4 == 'y')
					{
						cout << "you will return to the main menu..." << endl;
						goto enust;                                                   // returning to the main menu


					}

					else if (choose4 == 'N' || choose4 == 'n')
					{
						cout << "Exiting." << endl;
						break;

					}

				}
				else if (choose3 == 2)
				{
					cout << "Exiting." << endl;
					goto ust;
				}

			}

			break;

			}

			}
			break;


		}


		}


	}
}

                                                                          


