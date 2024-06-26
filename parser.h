#include "scanner.h"
#include <string.h>


class Parser
{
    private:
        Scanner* scanner;
        Token* currentToken;

        void advance();
        void match(int);

        void Program();
        void MainClass();
        void ClassDeclaration();
        void VarDeclaration();
        void MethodDeclaration();
        void Params();
        void Type();
        void Statement();
        void Expression();
        void RelExpression();
        void AddExpression();
        void MultExpression();
        void UnExpression();
        void PrimExpression();
        void ExpressionsList();
		

       void syntaxError(std::string); 

    public:
	
		std::string getTokenName(int tokenId);
        Parser(string);
        void run();
};
