#include "Application.h"
#include "ArgParser.h"

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include <exception>

int main( int argc, char** argv ){

    try{

        onepackage::ArgParser arg_parser( argc, argv );
        onepackage::Application application;

        if( arg_parser.isCommandDetect() ){
            cout << "Detect!" << endl;
        }

        if( !arg_parser.isCommandChosen() ){
            arg_parser.printHelp();
            return 1;
        }

    }catch( std::runtime_error &e ){

        cerr << e.what() << endl;
        return 1;

    }catch( ... ){

        cerr << "Error: Caught unknown exception." << endl;
        return 2;

    }

    return 0;

}
