#include "ArgParser.h"

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

namespace onepackage{

    ArgParser::ArgParser( int argc, char** argv )
        :arg_parser( "op", "0.0.1" )
    {

        this->arg_parser
                .add_argument("--detect", "-d")
                .help("Detect the type of image.")
                .default_value(false)
                .implicit_value(true);

        try{
            this->arg_parser.parse_args( argc, argv );
        }catch( const std::runtime_error& err ){
            cerr << err.what() << endl;
            cerr << this->arg_parser;
            std::exit(1);
        }

        if( this->isCommandDetect() ) this->command_chosen = true;

    }


    bool ArgParser::isCommandDetect() const{

        return this->arg_parser.is_used("--detect");

    }

    bool ArgParser::isCommandChosen() const{

        return this->command_chosen;

    }

    void ArgParser::printHelp() const{

        cerr << this->arg_parser;

    }

}