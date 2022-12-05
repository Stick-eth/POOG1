#include "pch.h"
#include "CLmaps.h"
#include "CLservice.h"
#include "MyFormCreationMajClient.h"

using namespace std;
using namespace Comp_Mappage;
using namespace Comp_Services;

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int Main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    POOG1::MyFormCreationMajClient form;
    Application::Run(% form);
    return 0;
}