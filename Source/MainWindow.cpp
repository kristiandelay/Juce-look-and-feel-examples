/*
  ==============================================================================

    This file was auto-generated by the Jucer!

    It contains the basic outline for a simple desktop window.

  ==============================================================================
*/

#include "MainWindow.h"


//==============================================================================
MainAppWindow::MainAppWindow()
    : DocumentWindow (JUCEApplication::getInstance()->getApplicationName(),
                      Colours::lightgrey,
                      DocumentWindow::allButtons)
{
	centreWithSize (600, 400);
	setVisible (true);

	setResizable (false, false); 

	//setTitleBarHeight (20);     

	contentComponent = new widgetBox ();
    setContentOwned (contentComponent.get(),false);
    setVisible (true);
    addToDesktop();
}

MainAppWindow::~MainAppWindow()
{
}

void MainAppWindow::closeButtonPressed()
{
    JUCEApplication::getInstance()->systemRequestedQuit();
}
