#include <wx/wx.h>
#include <wx/app.h>

class cApp : public wxApp
{
public:
    virtual bool OnInit();

};

class cFrame: public wxFrame
{
public:
    cFrame(wxFrame *frame, const wxString& title)
        : wxFrame(frame, -1, title, wxPoint(-1,-1),wxSize(600,600))
        {

        }
};

IMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    cFrame* frame = new cFrame(0L, _("wx Starter"));
    frame->Show();

    return true;
}