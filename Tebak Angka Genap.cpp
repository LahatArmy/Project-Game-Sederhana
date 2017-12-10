#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random(int);
bool randBool();
void check(int);

int answer;

int main()
{
  int length = 10, limit = 10, even = 0, odd = 0;
  bool type = false;

  srand(time(NULL));

  for (int i = 0; i < length; i++) {
    int temp = random(limit);

    if (temp % 2 == 0) {
      even++;
    } else {
      odd++;
    }

    cout << temp << " ";
  }

  cout << endl;
  type = randBool();

  if (type) {
    cout <<  endl << "Berapa Jumlah Bilangan Genap ?";
  } else {
    cout << endl << "Berapa Jumlah Bilangan Ganjil ? ";
  }

  cout << endl << "Jawab = ";
  cin >> answer;

  if (type) {
    check(even);
  } else {
    check(odd);
  }

}

int random(int limit)
{
  return (rand() % limit) + 1;
}

bool randBool()
{
  return (rand() % 2 == 0) ? true : false;
}

void check(int key)
{
  if (answer == key)
  {
    cout << endl << "Kamu Benar :) MANTAP" << endl;
  } else {
    cout << endl << "Kamu Salah :( COBA LAGI YAH" << endl;
    cout << "Jawaban yang benar = " << key;
  }
}
