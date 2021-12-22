#include <iostream>

using namespace std;

int main(){

    string currency1;

    string currency2;

    double amount1;

    double amount2;
    
    cout <<"--------****CURRENCY CONVERTER****--------\n\n";

    cout << "The currencies are: Rupees, Dollars, Pesos, and Euros. \n\n";
    
    cout << "Which currency would you like to convert? \n";
     
    cin >> currency1;

    cout << "Which currency would you like to convert "<<currency1<<" to? \n";

    cin >> currency2;

    cout << "How much money would you like to convert? \n";

    cin >> amount1;

    if (currency1 == "dollars"){

        if (currency2 == "rupees"){

            amount2 = amount1 * 75.76;

            cout << amount1 << "$ is equal to " << amount2 << "₹\n";
        
        }
        
        else if (currency2 == "pesos"){

            amount2 = amount1 * 20.80;

            cout << amount1 << "$ is equal to " << amount2 << "Mex$\n";

        }
        
        else if (currency2 == "euros"){

            amount2 = amount1 * .82;

            cout << amount1 << "$ is equal to " << amount2 << "€\n";

        }

    }else if (currency1 == "rupees"){
        
        if (currency2 == "dollars"){

            amount2 = amount1 * .014;

            cout << amount1 << "₹ is equal to " << amount2 << "$\n";

        }else if (currency2 == "pesos"){

            amount2 = amount1 * .28;

            cout << amount1 << "₹ is equal to " << amount2 << "Mex$\n";

        }else if (currency2 == "euros"){

            amount2 = amount1 * .011;

            cout << amount1 << "₹ is equal to " << amount2 << "€\n";

        }

    }else if (currency1 == "pesos"){

            if (currency2 == "dollars"){

                amount2 = amount1 * .048;

                cout << amount1 << " Mex$ is equal to " << amount2 << "$\n";

            }else if (currency2 == "rupees"){

                amount2 = amount1 * 3.64;

                cout << amount1 << " Mex$ is equal to " << amount2 << "₹\n";

            }else if (currency2 == "euros"){

                amount2 = amount1 * .043;

                cout << amount1 << "Mex$ is equal to " << amount2 << "€\n";

            }

    }else if (currency1 == "euros"){

        if (currency2 == "dollars"){

            amount2 = amount1 * 1.13;

            cout << amount1 << "€ is equal to " << amount2 << "$\n";

        }else if (currency2 == "pesos"){

            amount2 = amount1 * 23.47;

            cout << amount1 << "€ is equal to " << amount2 << "Mex$\n";

        }else if (currency2 == "rupees"){

            amount2 = amount1 * 85.31;

            cout << amount1 << "€ is equal to " << amount2 << "₹\n";

        }

    }else{

        cout << "INVALID ENTRY(PLEASE CHECK SPELLING !!)\n";

    }
    
    return 0;

}
