#ifndef COUPLES_H_
#define COUPLES_H_

#include<string>
using std::string;

//! Class COUPLES
class COUPLE{
    //! Private Data Members
    private:
        string gname;       //!< Name of the Girlfriend
        string bname;       //!< Name of the Boyfriend
        double happiness;   //!< Happiness of the Couple
        /*< Happiness of COUPLE,
            H = Happiness(BOY) + Happiness(GIRL)
            */
        double compatibility;  //!< Compatibility of the COUPLE
        /*< Compatibility of a couple is defined as the sum of:
            Magnitude by which the budget of the boy exceeds the maintenance cost of the girl,
            The absolute value of the difference in attractiveness, and
            The absolute value of the difference of intelligence.
            */

    //! Public Member Functions
    public:
        //! Default Constructor
        COUPLE(){};

        //Member Function to set values of COUPLE object
        void set_val(GIRL g,BOY b);

        //Member Function to create couples
        bool patchup(GIRL g,BOY b);

        //Member Function to display couples
        void display();

        //Member Function to return the name of the Girlfriend
        string getgname();

        //Member Function to return the name of the Boyfriend
        string getbname();

        //Member Function to return Happiness of the Couple
        double geth();

        //Member Function to return Compatibility of Couple
        double getcomp();

};

#endif // COUPLES_H_
