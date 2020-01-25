cmake_minimum_required(VERSION 3.15)
project(AmigaQtoolkit)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)



add_executable(AmigaQtoolkit
        AQAction.cpp
        AQAction.h
        AQApplication.cpp
        AQApplication.h
        AQButton.cpp
        AQButton.h
        AQClipboard.cpp
        AQClipboard.h
        AQCommand.h
        AQCommandStack.cpp
        AQCommandStack.h
        AQFileDialog.cpp
        AQFileDialog.h
        AQIcon.cpp
        AQIcon.h
        AQKernel.h
        AQLabel.cpp
        AQLabel.h
        AQLayout.cpp
        AQLayout.h
        AQLineEdit.cpp
        AQLineEdit.h
        AQListView.cpp
        AQListView.h
        AQMainWindow.cpp
        AQMainWindow.h
        AQMenu.cpp
        AQMenu.h
        AQMessageBox.cpp
        AQMessageBox.h
        AQObject.h
        AQScrollBar.cpp
        AQScrollBar.h
        AQSplitter.cpp
        AQSplitter.h
        AQStatusBar.cpp
        AQStatusBar.h
        AQString.cpp
        AQString.h
        AQSyntaxHighlighter.cpp
        AQSyntaxHighlighter.h
        AQTabBar.cpp
        AQTabBar.h
        AQTextDoc.cpp
        AQTextDoc.h
        AQTextEdit.cpp
        AQTextEdit.h
        AQTextRender.cpp
        AQToolTip.cpp
        AQToolTip.h
        AQWidget.cpp
        AQWidget.h
        AQWindow.cpp
        AQWindow.h
        DevStudio.cpp
        DevStudio.h
        FindWidget.cpp
        FindWidget.h
        main.cpp
        Project.cpp
        Project.h)
