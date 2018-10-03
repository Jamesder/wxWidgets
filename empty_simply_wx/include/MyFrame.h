#include <wx/wxprec.h>
#ifndef MYFRAME_H
#define MYFRAME_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

enum
{
    ID_Hello = 1,
    ID_Test = 2
};

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnTest1(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};
#endif // MYFRAME_H
