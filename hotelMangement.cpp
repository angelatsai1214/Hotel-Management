#include <iostream>
using namespace std;

bool checkQuantity(int& quantity, int& sold, int& want, int& price, int& total);

int main()
{
	int quant;
	int choice;
	//quantity of items
	int q_rooms = 0, q_pasta = 0, q_burger = 0, q_noodles = 0, q_shake = 0, q_chicken = 0;
	//number of items sold
	int s_rooms = 0, s_pasta = 0, s_burger = 0, s_noodles = 0, s_shake = 0, s_chicken = 0;
	//price of each item
	int price_rooms = 1500, price_pasta = 10, price_burger = 10, price_noodles = 15, price_shake = 8, price_chicken = 12;
	//total price of items
	int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken = 0;

	cout << "\t Quantity of Items We Have";
	cout << "\n\nRooms available: ";
	cin >> q_rooms;
	cout << "Quantity of pasta: ";
	cin >> q_pasta;
	cout << "Quantity of burger: ";
	cin >> q_burger;
	cout << "Quantity of noodles: ";
	cin >> q_noodles;
	cout << "Quantity of shake: ";
	cin >> q_shake;
	cout << "Quantity of chicken-roll: ";
	cin >> q_chicken;

	m:
	cout << "\n\n   Menu: ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Shake";
	cout << "\n6) Chicken-Roll";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8) Exit";

	cout << "\n\nPlease enter your choice! ";
	cin >> choice;

	switch(choice)
	{
		case 1:
			cout << "\nEnter the number of rooms you want: ";
			cin >> quant;
			if( checkQuantity(q_rooms, s_rooms, quant, price_rooms, total_rooms) )
				cout << "\n\t" << quant << " room/rooms have been alloted to you!" << endl;
			else
				cout << "\n\tOnly " << q_rooms - s_rooms << " rooms remaining in the hotel." << endl;
			break;
		case 2:
			cout << "\nEnter pasta quantity: ";
			cin >> quant;
			if( checkQuantity(q_pasta, s_pasta, quant, price_pasta, total_pasta) )
				cout << "\n\t" << quant << " pasta is the order!" << endl;
			else
				cout << "\n\tOnly " << q_pasta - s_pasta << " pasta remaining in the hotel." << endl;
			break;
		case 3:
			cout << "\nEnter burger quantity: ";
			cin >> quant;
			if( checkQuantity(q_burger, s_burger, quant, price_burger, total_burger) )
				cout << "\n\t" << quant << " burger(s) is the order!" << endl;
			else
				cout << "\n\tOnly " << q_burger - s_burger << " burger(s) remaining in the hotel." << endl;
			break;
		case 4:
			cout << "\nEnter noodle quantity: ";
			cin >> quant;
			if( checkQuantity(q_noodles, s_noodles, quant, price_noodles, total_noodles) )
				cout << "\n\t" << quant << " noodles is the order!" << endl;
			else
				cout << "\n\tOnly " << q_noodles - s_noodles << " noodles remaining in the hotel." << endl;
			break;
		case 5:
			cout << "\nEnter shake quantity: ";
			cin >> quant;
			if( checkQuantity(q_shake, s_shake, quant, price_shake, total_shake) )
				cout << "\n\t" << quant << " shake(s) is the order!" << endl;
			else
				cout << "\n\tOnly " << q_shake - s_shake << " shake(s) remaining in the hotel." << endl;
			break;
		case 6:
			cout << "\nEnter chicken-roll quantity: ";
			cin >> quant;
			if( checkQuantity(q_chicken, s_chicken, quant, price_chicken, total_chicken) )
				cout << "\n\t" << quant << " chicken-roll(s) is the order!" << endl;
			else
				cout << "\n\tOnly " << q_chicken - s_chicken << " chicken-roll(s) remaining in the hotel." << endl;
			break;
		case 7:
			cout << "\n\tDetails of sales and collection";
			cout << "\n\nNumber of rooms we had: " << q_rooms;
			cout << "\nNumber of room(s) occupied: " << s_rooms;
			cout << "\nNumber of room(s) remaining: " << q_rooms - s_rooms;
			cout << "\nTotal rooms collection for the day: " << total_rooms;

			cout << "\n\nNumber of pastas we had: " << q_pasta;
			cout << "\nNumber of pasta(s) sold: " << s_pasta;
			cout << "\nNumber of pasta(s) remaining: " << q_pasta - s_pasta;
			cout << "\nTotal pasta collection for the day: " << total_pasta;

			cout << "\n\nNumber of burgers we had: " << q_burger;
			cout << "\nNumber of burger(s) sold: " << s_burger;
			cout << "\nNumber of burger(s) remaining: " << q_burger - s_burger;
			cout << "\nTotal burger collection for the day: " << total_burger;

			cout << "\n\nNumber of noodles we had: " << q_noodles;
			cout << "\nNumber of noodles sold: " << s_noodles;
			cout << "\nNumber of noodles remaining: " << q_noodles - s_noodles;
			cout << "\nTotal noodles collection for the day: " << total_noodles;

			cout << "\n\nNumber of shakes we had: " << q_shake;
			cout << "\nNumber of shake(s) sold: " << s_shake;
			cout << "\nNumber of shake(s) remaining: " << q_shake - s_shake;
			cout << "\nTotal shake collection for the day: " << total_shake;

			cout << "\n\nNumber of chicken-roll we had: " << q_chicken;
			cout << "\nNumber of chicken-roll(s) sold: " << s_chicken;
			cout << "\nNumber of chicken-roll(s) remaining: " << q_chicken - s_chicken;
			cout << "\nTotal chicken-roll collection for the day: " << total_chicken;

			cout << "\n\n\nTotal collection for today: "
				 << total_rooms + total_pasta + total_burger + total_noodles + total_shake + total_chicken << endl;
			break;
		case 8:
			exit(0);
		default:
			cout << "\nPlease select a number from the menu! ";
	}
	goto m;


	return 0;
}

bool checkQuantity(int& quantity, int& sold, int& want, int& price, int& total)
{
	if( quantity - sold >= want )
	{
		sold += want;
		total += want*price;
		return true;
	}
	return false;
}




