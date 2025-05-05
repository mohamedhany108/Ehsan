

#ifndef MAINFORM_H
#define MAINFORM_H

#include "MainForm.h"

#endif

using namespace System;
using namespace System::Windows::Forms;
using namespace Ehsan;  // مهم جدًا للوصول إلى HomeForm

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // أنشئ نموذج من HomeForm وشغله
    Application::Run(gcnew MainForm());
    return 0;
}
