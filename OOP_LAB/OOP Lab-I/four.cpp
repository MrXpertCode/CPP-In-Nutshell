#include <iostream>
#include <iomanip>
// #include <string>

using namespace std;

int main()
{

  const int numOfPlayers = 2;

  struct Players
  {
    string Name;
    int runs;
    int innings;
    double average;
  };

  Players Player[numOfPlayers];

  for (int i = 0; i < numOfPlayers; i++)
  {
    cout << "Enter Player no " << i + 1 << " Name: ";
    getline(cin, Player[i].Name);

    cout << "Enter run scored by " << Player[i].Name << ": ";
    cin >> Player[i].runs;

    cout << "Enter Innings Played by " << Player[i].Name << ": ";
    cin >> Player[i].innings;

    cin.ignore();
  }

  for (int i = 0; i < numOfPlayers; ++i)
  {
    Player[i].average = static_cast<double>(Player[i].runs) / Player[i].innings;
  }

  cout << "------------------------------------------------------\n"
       << left << setw(20) << "Player's Name"
       << "Runs" << setw(10) << "Innings" << setw(10)
       << "Average\n"
          "------------------------------------------------------\n";

  for (int i = 0; i < numOfPlayers; ++i)
  {
    cout << left << setw(20) << Player[i].Name
         << Player[i].runs << setw(10)
         << Player[i].innings << setw(10)
         << fixed << setprecision(2) << Player[i].average << endl;
  }
}