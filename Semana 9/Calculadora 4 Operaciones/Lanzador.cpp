#include "FrmPrincipal.h"

using namespace Calculadora;

int main()
{
	FrmPrincipal ^frm = gcnew FrmPrincipal();
	Application::Run(frm);
	return 0;
}