#pragma once
#include <argparse/argparse.hpp>

namespace onepackage{

    class ArgParser{

        public:
            ArgParser( int argc, char** argv );

            bool isCommandDetect() const;
            bool isCommandChosen() const;

            void printHelp() const;

        protected:
            argparse::ArgumentParser arg_parser;
            bool command_chosen = false;

    };

}
