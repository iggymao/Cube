/////////////////////////////////////////////////////////////////////////////
// Name:        cube.h
// Purpose:     wxGLCanvas demo program
// Author:      Julian Smart
// Modified by:
// Created:     04/01/98
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////



#ifndef _WX_CUBE_H_
#define _WX_CUBE_H_

#include "wx/glcanvas.h"
//#include "../include/Geometry.h"
//#include "../include/TestGLCanvas.h"

//forward declaration
class TestGLCanvas;
class TestGLContext;
class MyFrame;
//class DrawMenuDialog

// Define a new application type
class MyApp : public wxApp
{
public:
    MyApp() { }

    // virtual wxApp methods
    virtual bool OnInit();
    virtual int OnExit();

    MyFrame *mainFrame;
private:

};

// Define a new frame type
class MyFrame : public wxFrame
{
public:
    MyFrame(bool stereoWindow = false);
    wxStaticText* getStaticLabel() {return m_staticlabel;}
    
    // // Returns the shared context used by all frames and sets it as current for
    // // the given canvas.
    // TestGLContext& GetContext(wxGLCanvas *canvas);

private:
    TestGLCanvas *m_canvas;
    wxStaticText *m_staticlabel;  // for displaying drawing screen information
    
    // the GL context we use for all our mono rendering windows
 //   TestGLContext *m_glContext;

    void OnClose(wxCommandEvent& event);
    void OnNewWindow(wxCommandEvent& event);
    void OnFile(wxCommandEvent& event);
    void OnSave(wxCommandEvent& event);
    void OnSaveAs(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnDrawOne(wxCommandEvent& event);
    void OnDrawTwo(wxCommandEvent& event);
    void OnViewOne(wxCommandEvent& event);
    void OnViewTwo(wxCommandEvent& event);
    void OnDrawSelect(wxCommandEvent& event);
    void ToggleXYGrid(wxCommandEvent& event);
    void ToggleXZGrid(wxCommandEvent& event);
    void ToggleYZGrid(wxCommandEvent& event);
    void ToggleOverlayGrid(wxCommandEvent& event);
};

// // Define the member selection frame
// class MemberSelectFrame : public wxFrame
// {
// public:
//     MemberSelectFrame();

// private:

// };

enum
{
    NEW_STEREO_WINDOW = wxID_HIGHEST + 1,
    DRAW_ONE = wxID_HIGHEST + 2,
    DRAW_TWO = wxID_HIGHEST + 3,
    DRAW_SELECT = wxID_HIGHEST + 4,
    SpinTimer = wxID_HIGHEST + 5,
    VIEW_ONE = wxID_HIGHEST + 6,
    VIEW_TWO = wxID_HIGHEST + 7,
    DRAW_XY_GRID = wxID_HIGHEST + 8,
    DRAW_YZ_GRID = wxID_HIGHEST + 9,
    DRAW_XZ_GRID = wxID_HIGHEST + 10,
    DRAW_OVERLAY_GRID = wxID_HIGHEST + 11
};

// IMPLEMENT_APP(MyApp)
DECLARE_APP(MyApp)

#endif // _WX_CUBE_H_
