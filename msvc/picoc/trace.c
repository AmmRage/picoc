#include "../../interpreter.h"

/* display token name */
void PrintTkenName(enum LexToken Token){
	if((int)Token == 0) printf("TokenNone\n");
	if((int)Token == 1) printf("TokenComma\n");
	if((int)Token == 2) printf("TokenAssign\n");
	if((int)Token == 3) printf("TokenAddAssign\n");
	if((int)Token == 4) printf("TokenSubtractAssign\n");
	if((int)Token == 5) printf("TokenMultiplyAssign\n");
	if((int)Token == 6) printf("TokenDivideAssign\n");
	if((int)Token == 7) printf("TokenModulusAssign\n");
	if((int)Token == 8) printf("TokenShiftLeftAssign\n");
	if((int)Token == 9) printf("TokenShiftRightAssign\n");
	if((int)Token == 10) printf("TokenArithmeticAndAssign\n");
	if((int)Token == 11) printf("TokenArithmeticOrAssign\n");
	if((int)Token == 12) printf("TokenArithmeticExorAssign\n");
	if((int)Token == 13) printf("TokenQuestionMark\n");
	if((int)Token == 14) printf("TokenColon\n");
	if((int)Token == 15) printf("TokenLogicalOr\n");
	if((int)Token == 16) printf("TokenLogicalAnd\n");
	if((int)Token == 17) printf("TokenArithmeticOr\n");
	if((int)Token == 18) printf("TokenArithmeticExor\n");
	if((int)Token == 19) printf("TokenAmpersand\n");
	if((int)Token == 20) printf("TokenEqual\n");
	if((int)Token == 21) printf("TokenNotEqual\n");
	if((int)Token == 22) printf("TokenLessThan\n");
	if((int)Token == 23) printf("TokenGreaterThan\n");
	if((int)Token == 24) printf("TokenLessEqual\n");
	if((int)Token == 25) printf("TokenGreaterEqual\n");
	if((int)Token == 26) printf("TokenShiftLeft\n");
	if((int)Token == 27) printf("TokenShiftRight\n");
	if((int)Token == 28) printf("TokenPlus\n");
	if((int)Token == 29) printf("TokenMinus\n");
	if((int)Token == 30) printf("TokenAsterisk\n");
	if((int)Token == 31) printf("TokenSlash\n");
	if((int)Token == 32) printf("TokenModulus\n");
	if((int)Token == 33) printf("TokenIncrement\n");
	if((int)Token == 34) printf("TokenDecrement\n");
	if((int)Token == 35) printf("TokenUnaryNot\n");
	if((int)Token == 36) printf("TokenUnaryExor\n");
	if((int)Token == 37) printf("TokenSizeof\n");
	if((int)Token == 38) printf("TokenCast\n");
	if((int)Token == 39) printf("TokenLeftSquareBracket\n");
	if((int)Token == 40) printf("TokenRightSquareBracket\n");
	if((int)Token == 41) printf("TokenDot\n");
	if((int)Token == 42) printf("TokenArrow\n");
	if((int)Token == 43) printf("TokenOpenBracket\n");
	if((int)Token == 44) printf("TokenCloseBracket\n");
	if((int)Token == 45) printf("TokenIdentifier\n");
	if((int)Token == 46) printf("TokenIntegerConstant\n");
	if((int)Token == 47) printf("TokenFPConstant\n");
	if((int)Token == 48) printf("TokenStringConstant\n");
	if((int)Token == 49) printf("TokenCharacterConstant\n");
	if((int)Token == 50) printf("TokenSemicolon\n");
	if((int)Token == 51) printf("TokenEllipsis\n");
	if((int)Token == 52) printf("TokenLeftBrace\n");
	if((int)Token == 53) printf("TokenRightBrace\n");
	if((int)Token == 54) printf("TokenIntType\n");
	if((int)Token == 55) printf("TokenCharType\n");
	if((int)Token == 56) printf("TokenFloatType\n");
	if((int)Token == 57) printf("TokenDoubleType\n");
	if((int)Token == 58) printf("TokenVoidType\n");
	if((int)Token == 59) printf("TokenEnumType\n");
	if((int)Token == 60) printf("TokenLongType\n");
	if((int)Token == 61) printf("TokenSignedType\n");
	if((int)Token == 62) printf("TokenShortType\n");
	if((int)Token == 63) printf("TokenStaticType\n");
	if((int)Token == 64) printf("TokenAutoType\n");
	if((int)Token == 65) printf("TokenRegisterType\n");
	if((int)Token == 66) printf("TokenExternType\n");
	if((int)Token == 67) printf("TokenStructType\n");
	if((int)Token == 68) printf("TokenUnionType\n");
	if((int)Token == 69) printf("TokenUnsignedType\n");
	if((int)Token == 70) printf("TokenTypedef\n");
	if((int)Token == 71) printf("TokenContinue\n");
	if((int)Token == 72) printf("TokenDo\n");
	if((int)Token == 73) printf("TokenElse\n");
	if((int)Token == 74) printf("TokenFor\n");
	if((int)Token == 75) printf("TokenGoto\n");
	if((int)Token == 76) printf("TokenIf\n");
	if((int)Token == 77) printf("TokenWhile\n");
	if((int)Token == 78) printf("TokenBreak\n");
	if((int)Token == 79) printf("TokenSwitch\n");
	if((int)Token == 80) printf("TokenCase\n");
	if((int)Token == 81) printf("TokenDefault\n");
	if((int)Token == 82) printf("TokenReturn\n");
	if((int)Token == 83) printf("TokenHashDefine\n");
	if((int)Token == 84) printf("TokenHashInclude\n");
	if((int)Token == 85) printf("TokenHashIf\n");
	if((int)Token == 86) printf("TokenHashIfdef\n");
	if((int)Token == 87) printf("TokenHashIfndef\n");
	if((int)Token == 88) printf("TokenHashElse\n");
	if((int)Token == 89) printf("TokenHashEndif\n");
	if((int)Token == 90) printf("TokenNew\n");
	if((int)Token == 91) printf("TokenDelete\n");
	if((int)Token == 92) printf("TokenOpenMacroBracket\n");
	if((int)Token == 93) printf("TokenEOF\n");
	if((int)Token == 94) printf("TokenEndOfLine\n");
	if((int)Token == 95) printf("TokenEndOfFunction\n");
}


void PrintIntWithCaption(const char* caption, int intToPrint)
{
	char buf[10];
	memset(buf,0,10);
	_itoa(intToPrint,buf,10);
	printf("%s",caption);
	printf("%s\n",buf);
}

/* print char as int */ 
void PrintCharAsInt(const char *ch)
{
	int chInt = (int)(*ch);
	char buf[10];
	int i;
	memset(buf,0,10);
	_itoa(chInt,buf,10);
	for(i = 0;i<10;i++)
	{
		if(buf[i]==0)
		{
			buf[i] = '\n';
			break;
		}
	}
	printf(buf);	
}

void printConstString(const char * ch)
{
	printf("%s\n",ch);
}

void printConstStringWithCaption(const char* caption, const char * ch)
{
	printf("%s",caption);
	printf("%s\n",ch);
}