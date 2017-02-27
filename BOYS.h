#include<string>
using std::string;

#ifndef BOYS_H_
#define BOYS_H_

//!Class Boy
class BOY{
    //!Private Members
    private:
        string b_name;        //!< Name of the Boy
        int b_attractiveness; //!< Attractiveness of the Boy (1-10)
        int b_intelligence;   //!< Intelligence of the Boy (1-10)
        int b_budget;         //!< Girlfriend Budget of the Boy (Rs.100-Rs.500)

        int b_min_attr_req;   //!< Minimum Attraction Requirement from Girl

        double b_happiness;   //!< Happiness of a Committed Boy
        bool b_com;           //!< Commitment status of the Boy
        int b_spent;            //!< Total money spent on Gifts

    //! Public Member Functions
    public:

        //! Default Constructor
        BOY(){};

        //! Constructor with Parameters
        BOY( const string n , const int a , const int i , const int b , const int ma );

        //! Member Function to initialize the data of Boy
        void b_setdata( const string n , const int a , const int i , const int b , const int ma );

        //! Member Function to return the name of the Boy
        string b_getname();

        //! Member Function to return the attractiveness of the Boy
        int b_getattr();

        //! Member Function to return the intelligence of the Boy
        int b_getintl();

        //! Member Function to return the Minimum Attraction Requirement of the Boy
        int b_getminatr();

        //! Member Function to return the Girlfriend budget of the boy
        int b_getbud();

        //! Member Function to calculate and return the Girlfriend budget of the boy
        void b_sethap(double v);

        //!< Member Function to return the Commitment status of the boy
        bool b_iscom();

        //!< Member Function to return the amount of total money spent
        int b_getspent();

};

#endif // BOYS_H_
