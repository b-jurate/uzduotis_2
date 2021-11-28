#include "Composite.h"
#include "Leaf.h"
#include <vector>

int main() {
    int input = 1;
    int input2 = 0;

    vector<string> recomm{"Duomenų bazės paslauga", "Resi IP adresų bazė. 100 vnt.", "DC IP adresų bazė. 100 vnt.",
                          "Scraping paslauga. 10 užklausų"};
    cout << "Paslaugų opcijos: 1. \"Duomenų bazės paslauga\", 2. \"Resi IP adresų bazė. 100 vnt.\", 3. \"DC IP adresų bazė. 100 vnt.\", \n"
               "4. \"Scraping paslauga. 10 užklausų\"" << endl;
    cout << "Išsirinkite paslaugą iš paslaugų paketo pasirinkdami paslaugos numerį. \n"
            "Kitu atveju, pasirinkite rekomendaciją" << endl;

    while (input != 0) {
        cout << "1. Pasirinkite paslaugą." << endl;
        cout << "2. Rekomenduoti paslaugą." << endl;
        cout << "0. Išeiti." << endl;
        cin >> input;


        switch (input) {
            case 1: {
                Composite paslauga("Pasirinkimas");
                Composite rekomendacija("Rekomendacija");
                cout << "Pasirinkite konkrečią paslaugą" << endl;
                for (int i = 0; i < recomm.size(); ++i) {
                    cout << (i + 1) << ". " << recomm[i] << endl;
                }
                cin >> input2;
                if (input2 == 1) {
                    cout << "\"Pasirinkta paslauga: Duomenų bazės\"" << endl;
                    Leaf leaf(recomm[input2 - 1], 42);
                    rekomendacija.addComponent(&leaf);
                    paslauga.addComponent(&rekomendacija);
                    paslauga.showDetails();
                } else if (input2 == 2) {
                    cout << "\"Pasirinkta paslauga: Resi IP adresų bazė. 100 vnt.\"" << endl;
                    Leaf leaf(recomm[input2 - 1], 52);
                    rekomendacija.addComponent(&leaf);
                    paslauga.addComponent(&rekomendacija);
                    paslauga.showDetails();
                } else if (input2 == 3) {
                    cout << "\"Pasirinkta paslauga: DC IP adresų bazė. 100 vnt.\"" << endl;
                    Leaf leaf(recomm[input2 - 1], 62);
                    rekomendacija.addComponent(&leaf);
                    paslauga.addComponent(&rekomendacija);
                    paslauga.showDetails();
                } else if (input2 == 4) {
                    cout << "\"Pasirinkta paslauga: Scraping paslauga. 10 užklausų\"" << endl;
                    Leaf leaf(recomm[input2 - 1], 72);
                    rekomendacija.addComponent(&leaf);
                    paslauga.addComponent(&rekomendacija);
                    paslauga.showDetails();
                }
                break;
            }
            case 2:
                cout << "\"Rekomenduojame Scraping paslaugą (10 užklausų)\"" << endl;
                break;
            case 0:
                break;
            default:
                cout << "Tokio punkto nera" << endl;
                break;
        }
    }


    return 0;
}
