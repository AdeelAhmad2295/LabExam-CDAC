/*Q.No 1. Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
 3. Check Availability:
4. Modify Book Records:
5. Delete Book Records:*/
#include<iostream>
using namespace std;
void add_book(string title, string author,int ISBN,int price,int quantity){
		
}

main(){
	cout<<"\n1. Add Book Records";
	cout<<"\n2. Show Book Records";
	cout<<"\n3. Check Book Records";
	cout<<"\n4. Modify Book Records";
	cout<<"\n5. Delete Book Records";
	cout<<"\n6. Exit";
	int ch;
	cout<<"\nEnter the choice: ";
	cin>>ch;
	switch (ch){
		case 1:
			string title,author;
			int ISBN,price,quantity;
			cout<<"\nEnter the Title:";
			getline(cin,title);
			cout<<"\nEnter the name of author:";
			getline(cin,author);
			cout<<"\nEnter the ISBN number:";
			cin>>ISBN;
			cout<<"\nEnter the price of Book:";
			cin>>price;
			cout<<"\nEnter the Quantity:";
			cin>>quantity;
			add_book(title,author,ISBN,price,quantity);
			break;
//		case 2:
//			show_book();
//			break;
//		case 3:
//			check_book();
//			break;
//		case 4:
//			modify_book();
//			break;
//		case 5:
//			Delete_book();
//			break;
//		case 6:
//			cout<<"\nThank you for Visit...";
//			break;
//		default:
//			cout<<"\ninvalid option. please try again..";
			
	}

}