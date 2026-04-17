#include <wx/wx.h>
#include <iostream>

void load_module(const char* path);

class MyApp : public wxApp {
public:
    bool OnInit() override;
};

class MyFrame : public wxFrame {
public:
    MyFrame() : wxFrame(nullptr, wxID_ANY, "ATS_14") {
        std::cout << "GUI Window Created\n";
    }
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MyFrame* frame = new MyFrame();
    frame->Show(true);

    load_module("./bin/libui_core.so");

    return true;
}