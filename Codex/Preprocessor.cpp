#include "Preprocessor.h"

namespace 
{
    using namespace Codex;
    using namespace CodexUtils;
}

Preprocessor::Preprocessor() : mScanner(0)
{
    
}

Preprocessor::Preprocessor(IScanner* scanner)
{
    mScanner = scanner;
}

Preprocessor::~Preprocessor() 
{ 
    if (mScanner) delete mScanner;
}

void Preprocessor::setScanner(IScanner* scanner)
{
    if (mScanner) delete mScanner;
    mScanner = scanner;
}