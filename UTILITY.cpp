#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>

void create_random_girls( unsigned long t );   //Creates 500 random Girls with names like Gn where n is any int.
void create_random_boys( unsigned long t );    //Creates 500 random Boys with names like Bn where n is any int.
void create_random_gifts( unsigned long t );   //Creates 500 random Gifts.

int main()
{
    time_t t = clock();
    create_random_girls(t);
    create_random_boys(t);
    create_random_gifts(t);

    std::cout<<"Done\n";
    return 0;
}

void create_random_boys( unsigned long t )
{
    srand(t);
    int index = rand()%50;
    std::ofstream fp;
    fp.open("boys.csv");
    if( fp.is_open() )
       {
           //fp<<"Order of data : Boy's Name, Attractiveness( 1-10 ), Intelligence ( 0-10 ) ,Budget ( 500-10000 ) , Min Attractiveness Required ( 1-10)\n";
           for( int i = index ; i < index + 500 ; ++i ){
                fp<<"B"<<i<<"    "<<(rand()%10)+1<<"    ";
                //srand(t+i);
                fp<<(rand()%10)<<"    ";
               // srand(index+2i);
                fp<<(rand()%9500)+500<<"    ";
                //srand(index+3i);
                fp<<(rand()%10)+1<<std::endl;
                //srand(index+50i);
           }

           fp.close();
       }


}

void create_random_girls( unsigned long t )
{
    srand(t);
    int index = rand()%50;
    std::ofstream fp;
    fp.open("girls.csv");
    if( fp.is_open() )
       {
           // "Order of data : Girl's Name, Attractiveness( 1-10 ) , Intelligence ( 0-10 ) , Budget ( 500-10000 )
           for( int i = index ; i < index + 500 ; ++i ){
                fp<<"G"<<i<<"    "<<(rand()%10)+1<<"    ";
                //srand(index+4i);
                fp<<(rand()%11)<<"    ";
                //srand(index+5i);
                fp<<(rand()%9500)+500<<std::endl;
                //srand(index+6i);
           }

           fp.close();
       }
}

void create_random_gifts( unsigned long t )
{
    srand(t);
    int index = rand()%50;
    std::ofstream fp;
    fp.open("gifts.csv");
    if( fp.is_open() )
       {
           //fp<<"Order of data : Price , Value ( 10-100 ) , Luxury ( 0-1 ) , Difficulty ( 10 - 100 ) , Utility ( 1 - 10 )";
           for( int i = index ; i < index + 500 ; ++i ){
                fp<<(rand()%2000)+500<<"    ";
                //srand(index+4i);
                fp<<(rand()%90)+10<<"    ";
                //srand(index+5i);
                fp<<(rand()%2)<<"    ";
                //srand(index+6i);
                fp<<(rand()%90)+10<<"    "<<(rand()%10)+1<<std::endl;
           }

           fp.close();
       }

}
