#ifndef GIRLS_H_
#define GIRLS_H_

//!Class Girl
class GIRL{
    //!Private Members
    private:
        string g_name;        //!< Name of the Girl
        int g_attractiveness; //!< Attractiveness of the Girl (1-10)
        int g_intelligence;   //!< Intelligence of the Girl (1-10)
        int g_cost;           //!< Maintenance Cost of the Girl (Rs.100-Rs.500)

        bool g_com;           //!< Commitment status of the Girl

    //! Public Member Functions
    public:

        //! Default Constructor
        GIRL(){};

        //! Constructor with Parameters
        GIRL( const string n , const int a , const int i , const int b , const int ma );

        //! Member Function to initialize the data of Boy
        void g_setdata( const string n , const int a , const int i , const int b );

        //! Member Function to return the name of the Boy
        string g_getname();

        //! Member Function to return the attractiveness of the Boy
        int g_getattr();

        //! Member Function to return the intelligence of the Boy
        int g_getintl();

        //! Member Function to return the maintenance cost of the Girl
        int g_getcost();

        //! Member Function to return the commitment status of the Girl
        bool g_getcom();
};

#endif // BOYS_H_

