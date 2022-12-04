#include <stdio.h>
#include <locale.h>
#include <conio.h>

struct Dimensions {
	int height, depth, width;
} wardrobe;
struct Book {
	char author[20], title[20], publication[30];
	int year, quantity, article;
} book;
struct PFCC {
	int proteins, fats, carbohydrates;
	float calories;
} pfcc;
struct fio {
	char last_name[20], first_name[20], patronymic[20];
} fio;

struct worker {
	struct fio fio;
	int data;
	double salary;
	int number;
	char post[20];
} worker;


int main()
{
	setlocale(LC_ALL, "rus");
	wardrobe.depth = 2;
	book.year = 1990;
	pfcc.fats = 30;
	fio.first_name[40] = "Stephen";
	worker.post[40] = "Programmer";
	printf("%d\n", wardrobe.depth);
	printf("%d\n", book.year);
	printf("%d\n", pfcc.fats);
	printf("%s\n", fio.first_name);
	printf("%s\n", worker.post);
	return 0;
}