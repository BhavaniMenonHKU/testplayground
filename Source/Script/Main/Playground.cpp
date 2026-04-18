#include "SlateCore.h"
#include "GameScreens.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // TEST 1: Event Result Screen
    EventOutcome testOutcome;
    testOutcome.eventName = "Bear Attack";
    testOutcome.choiceMade = "FIGHT";
    testOutcome.resultText = "You fought bravely but got hurt";
    testOutcome.deltaHealth = -25;
    testOutcome.deltaFood = 2;
    testOutcome.deltaWater = 0;
    testOutcome.itemsAdded = {"Bear Meat x2"};
    testOutcome.itemsRemoved = {};

    SEventResultScreen eventScreen(testOutcome, 75, 100, 5, 10, 3, 10);
    eventScreen.Render();

    // TEST 2: Daily Summary Screen
    SDailySummaryScreen dailyScreen(3, 4, 6, 75, 100, 5, 10, 3, 10);
    dailyScreen.Render();

    // TEST 3: Death Screen
    SDeathScreen deathScreen(4, 6, 0, 2, 1, 480);
    deathScreen.Render();

    // TEST 4: Victory Screen
    SVictoryScreen victoryScreen(6, 12, 45, 7, 5, 8, 1, 1605);
    victoryScreen.Render();

    // TEST 5: Choice Menu
    vector<string> choices = {"FIGHT", "RUN", "HIDE"};
    SChoiceMenu menu(choices, 20, 15, true);
    int choice = menu.WaitForSelection();
    cout << "\npicked: " << choices[choice] << endl;

    return 0;
}
