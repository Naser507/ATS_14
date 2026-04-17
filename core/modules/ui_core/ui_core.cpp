#include <iostream>
#include <wx/wx.h>

extern "C" void init() {
    std::cout << "UI Core Module Initializing GUI layer...\n";

    wxMessageBox(
        "UI Core Module Loaded",
        "ATS_14 Plugin",
        wxOK | wxICON_INFORMATION
    );
}