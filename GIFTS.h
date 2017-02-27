#ifndef GIFTS_H_
#define GIFTS_H_

//! Class GIFT
class GIFT{
    //! Private Members
    private:
        int price;      //!< Price of the gift
        int value;      //!< Value of the gift
        int luxury;     //!< Luxury Rating ( 1 -> Luxury, 0 -> Otherwise )
        int difficulty;  //!< Difficulty in obtaining the gift (1-3)
        int utility;    //!< Utility Rating (1-10)

    //! Public Member Functions
    public:

        //! Default Constructor
        GIFT();

        //! Constructor with Parameters
        GIFT( int a , int b , int c , int d , int e );

        //! Member Function to initialize the Gift object
        void setdata( int a , int b , int c , int d , int e );

        //! Member Function to return price
        int getprice();

        //! Member Function to return value
        int getvalue();

        //! Member Function to return Luxury Rating
        int getluxury();

        //! Member Function to return Difficulty in Obtaining the Gift
        int getdifficulty();

        //! Member Function to return Utility Value
        int getutility();

};

#endif // GIFTS_H_
