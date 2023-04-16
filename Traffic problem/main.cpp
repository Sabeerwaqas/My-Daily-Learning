#include <iostream>
#include <string>

using namespace std;


    // Global variable

    long int numberOfTraffic;
    long int averageTraffic;
    int number_Of_Month1_For_Golden_Gate_Bridge;
    int number_Of_Month2_For_Golden_Gate_Bridge;
    int number_Of_Month3_For_Golden_Gate_Bridge;
    int number_Of_Month1_For_Bay_Bridge;
    int number_Of_Month2_For_Bay_Bridge;
    int number_Of_Month3_For_Bay_Bridge;
    int number_Of_Month1_For_San_Mateo_Bridge;
    int number_Of_Month2_For_San_Mateo_Bridge;
    int number_Of_Month3_For_San_Mateo_Bridge;


int traffic (string value){

    struct enterTraffic
    {

        // For Golden Gate Bridge

      int number_Of_Month1_For_Golden_Gate_Bridge;
      int number_Of_Month2_For_Golden_Gate_Bridge;
      int number_Of_Month3_For_Golden_Gate_Bridge;

        // For Bay Bridge

      int number_Of_Month1_For_Bay_Bridge;
      int number_Of_Month2_For_Bay_Bridge;
      int number_Of_Month3_For_Bay_Bridge;

      // For San Mateo Bridge

      int number_Of_Month1_For_San_Mateo_Bridge;
      int number_Of_Month2_For_San_Mateo_Bridge;
      int number_Of_Month3_For_San_Mateo_Bridge;

    };

    //---------------First Month Traffic Of Three Bridges

    // First month traffic of Golden Gate Bridge

    cout << "Enter month one traffic across the Golden Gate Bridge" << endl;

    enterTraffic goldenone;

    cin >> goldenone.number_Of_Month1_For_Golden_Gate_Bridge;

        // First month traffic of Bay Bridge


    cout << "Enter month one traffic across the Bay Bridge" << endl;

    enterTraffic bayone;
    
    cin >> bayone.number_Of_Month1_For_Bay_Bridge;


        // First month traffic of San Mateo Bridge


    cout << "Enter month one traffic across the San Mateo Bridge" << endl;

    enterTraffic mateoone;
    
    cin >> mateoone.number_Of_Month1_For_San_Mateo_Bridge;

    //---------------Second Month Traffic Of Three Bridges

    // Second month traffic of Golden Gate Bridge

    cout << "Enter month two traffic across the Golden Gate Bridge" << endl;

    enterTraffic goldentwo;

    cin >> goldentwo.number_Of_Month2_For_Golden_Gate_Bridge;

        // Second month traffic of Bay Bridge


    cout << "Enter month two traffic across the Bay Bridge" << endl;

    enterTraffic baytwo;
    
    cin >> baytwo.number_Of_Month2_For_Bay_Bridge;


        // Second month traffic of San Mateo Bridge


    cout << "Enter month two traffic across the San Mateo Bridge" << endl;

    enterTraffic mateotwo;
    
    cin >> mateotwo.number_Of_Month2_For_San_Mateo_Bridge;

    // ------------ Third Month Traffic Of Three bridges


    // Third month traffic of Golden Gate Bridge

    cout << "Enter month three traffic across the Golden Gate Bridge" << endl;

    enterTraffic goldenthree;

    cin >> goldenthree.number_Of_Month3_For_Golden_Gate_Bridge;

        // Third month traffic of Bay Bridge


    cout << "Enter month two traffic across the Bay Bridge" << endl;

    enterTraffic baythree;
    
    cin >> baythree.number_Of_Month3_For_Bay_Bridge;


        // Third month traffic of San Mateo Bridge


    cout << "Enter month three traffic across the San Mateo Bridge" << endl;

    enterTraffic mateothird;
    
    cin >> mateothird.number_Of_Month3_For_San_Mateo_Bridge;


    numberOfTraffic = goldenone.number_Of_Month1_For_Golden_Gate_Bridge + goldentwo.number_Of_Month2_For_Golden_Gate_Bridge + goldenthree.number_Of_Month3_For_Golden_Gate_Bridge + bayone.number_Of_Month1_For_Bay_Bridge + baytwo.number_Of_Month2_For_Bay_Bridge + baythree.number_Of_Month3_For_Bay_Bridge + mateoone.number_Of_Month1_For_San_Mateo_Bridge + mateotwo.number_Of_Month2_For_San_Mateo_Bridge + mateothird.number_Of_Month3_For_San_Mateo_Bridge;


    averageTraffic = numberOfTraffic / 9;

    

    cout << "The avarage traffic for every bridge of one month is: " << averageTraffic << endl;

    return averageTraffic;

    // Array contain 3 months information

    int three_months_of_golden_gate_bridge {goldenone.number_Of_Month1_For_Golden_Gate_Bridge + goldentwo.number_Of_Month2_For_Golden_Gate_Bridge + goldenthree.number_Of_Month3_For_Golden_Gate_Bridge};
    int three_months_of_bay_bridge {bayone.number_Of_Month1_For_Bay_Bridge +  baytwo.number_Of_Month2_For_Bay_Bridge +  baythree.number_Of_Month3_For_Bay_Bridge};
    int three_months_of_san_mateo_bridge {mateoone.number_Of_Month1_For_San_Mateo_Bridge + mateotwo.number_Of_Month2_For_San_Mateo_Bridge + mateothird.number_Of_Month3_For_San_Mateo_Bridge};

    int bridges_array_contain_their_information[3] {mateothird.number_Of_Month3_For_San_Mateo_Bridge, three_months_of_bay_bridge + three_months_of_san_mateo_bridge };
    
    


}

int main(){

    traffic ("run");






    return 0;
}