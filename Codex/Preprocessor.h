/// Author: Khanh Nguyen
/// Date:   1/13/2015
/// Brief:  This class should break down directive and comments from source code
///
/// /*This is a comment*/
/// //This is also a comment
/// string s = "// should not be a comment"


#ifndef _PREPROCESSOR_H_
#define _PREPROCESSOR_H_

#include "IScanner.h"

namespace Codex
{
    class Preprocessor
    {
    public:
        Preprocessor();
        Preprocessor(CodexUtils::IScanner*);
        ~Preprocessor();

        void setScanner(CodexUtils::IScanner*);

    private:
        CodexUtils::IScanner* mScanner;
    };
}

#endif