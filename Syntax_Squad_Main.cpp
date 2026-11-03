#include "LoginMain.h"
#include "RegisterMain.h"
#include "Syntax_Squad_Banking.h"

using namespace System;
using namespace Syntaxsquad;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Globalization;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoginMain);

	return 0;
}
