# @file:<dictaolib-root>/CMakeLists.txt

# TODO
# - Move defs XX_INCLUDE_DIR, XX_LIBRARIES, XX_LIBRARY_DIRS to the subdirectories
#   scripts. I could not find a way to export variables defined in a subscript
#   so as a workaround, I define the variables myself in the top script. This is
#   not optimal.
#

cmake_minimum_required(VERSION 3.4)

PROJECT(Notepad++)

SET(projIncludDir	../../scintilla/include/
					./
					./MISC/
					./MISC/Common/
					./MISC/Exception/
					./MISC/PluginsManager/
					./MISC/Process/
					./MISC/RegExt/
					./MISC/SysMsg/
					./MISC/md5/
					./MISC/sha2/
					./ScitillaComponent/
					./Win32Explr/
					./WinControls/
					./WinControls/AboutDlg/
					./WinControls/AnsiCharPanel/
					./WinControls/ClipboardHistory/
					./WinControls/ColourPicker/
					./WinControls/ContextMenu/
					./WinControls/DockingWnd/
					./WinControls/DocumentMap/
					./WinControls/FileBrowser/
					./WinControls/FindCharsInRange/
					./WinControls/FunctionList/
					./WinControls/Grid/
					./WinControls/ImageListSet/
					./WinControls/OpenSaveFileDialog/
					./WinControls/PluginsAdmin/
					./WinControls/Preference/
					./WinControls/ProjectPanel/
					./WinControls/ReadDirectoryChanges/
					./WinControls/SplitterContainer/
					./WinControls/StaticDialog/
					./WinControls/StaticDialog/RunDlg/
					./WinControls/StatusBar/
					./WinControls/TabBar/
					./WinControls/TaskList/
					./WinControls/ToolBar/
					./WinControls/ToolTip/
					./WinControls/TrayIcon/
					./WinControls/VerticalFileSwitcher/
					./WinControls/WindowsDlg/
					./WinControls/shortcut/
					./json/
					./tinyxml/
					./tinyxml/tinyXmlA/
					./uchardet/
					)


SET(src_files
			./EncodingMapper.cpp
			./MISC/Common/Common.cpp
			./MISC/Common/LongRunningOperation.cpp
			./MISC/Common/mutex.cpp
			./MISC/Common/verifySignedfile.cpp
			./MISC/Exception/MiniDumper.cpp
			./MISC/Exception/Win32Exception.cpp
			./MISC/PluginsManager/IDAllocator.cpp
			./MISC/Process/Processus.cpp
			./MISC/RegExt/regExtDlg.cpp
			./MISC/md5/md5Dlgs.cpp
			./Misc/PluginsManager/PluginsManager.cpp
			./Misc/sha2/sha-256.cpp
			./Notepad_plus.cpp
			./Notepad_plus_Window.cpp
			./NppBigSwitch.cpp
			./NppCommands.cpp
			./NppIO.cpp
			./NppNotification.cpp
			./Parameters.cpp
			./ScitillaComponent/AutoCompletion.cpp
			./ScitillaComponent/Buffer.cpp
			./ScitillaComponent/DocTabView.cpp
			./ScitillaComponent/FindReplaceDlg.cpp
			./ScitillaComponent/FunctionCallTip.cpp
			./ScitillaComponent/GoToLineDlg.cpp
			./ScitillaComponent/Printer.cpp
			./ScitillaComponent/ScintillaCtrls.cpp
			./ScitillaComponent/ScintillaEditView.cpp
			./ScitillaComponent/SmartHighlighter.cpp
			./ScitillaComponent/UserDefineDialog.cpp
			./ScitillaComponent/columnEditor.cpp
			./ScitillaComponent/xmlMatchedTagsHighlighter.cpp
			./TinyXml/tinyXmlA/tinystrA.cpp
			./TinyXml/tinyXmlA/tinyxmlA.cpp
			./TinyXml/tinyXmlA/tinyxmlerrorA.cpp
			./TinyXml/tinyXmlA/tinyxmlparserA.cpp
			./TinyXml/tinystr.cpp
			./TinyXml/tinyxml.cpp
			./TinyXml/tinyxmlerror.cpp
			./TinyXml/tinyxmlparser.cpp
			./UniConversion.cpp
			./Utf8_16.cpp
			./WinControls/AboutDlg/AboutDlg.cpp
			./WinControls/AboutDlg/URLCtrl.cpp
			./WinControls/AnsiCharPanel/ListView.cpp
			./WinControls/AnsiCharPanel/ansiCharPanel.cpp
			./WinControls/AnsiCharPanel/asciiListView.cpp
			./WinControls/ClipboardHistory/clipboardHistoryPanel.cpp
			./WinControls/ColourPicker/ColourPicker.cpp
			./WinControls/ColourPicker/ColourPopup.cpp
			./WinControls/ColourPicker/WordStyleDlg.cpp
			./WinControls/ContextMenu/ContextMenu.cpp
			./WinControls/DockingWnd/DockingCont.cpp
			./WinControls/DockingWnd/DockingManager.cpp
			./WinControls/DockingWnd/DockingSplitter.cpp
			./WinControls/DockingWnd/Gripper.cpp
			./WinControls/DocumentMap/documentMap.cpp
			./WinControls/DocumentMap/documentSnapshot.cpp
			./WinControls/FileBrowser/fileBrowser.cpp
			./WinControls/FindCharsInRange/FindCharsInRange.cpp
			./WinControls/FunctionList/functionListPanel.cpp
			./WinControls/FunctionList/functionParser.cpp
			./WinControls/Grid/BabyGrid.cpp
			./WinControls/Grid/BabyGridWrapper.cpp
			./WinControls/Grid/ShortcutMapper.cpp
			./WinControls/ImageListSet/ImageListSet.cpp
			./WinControls/OpenSaveFileDialog/FileDialog.cpp
			./WinControls/PluginsAdmin/pluginsAdmin.cpp
			./WinControls/Preference/preferenceDlg.cpp
			./WinControls/ProjectPanel/ProjectPanel.cpp
			./WinControls/ProjectPanel/TreeView.cpp
			./WinControls/ReadDirectoryChanges/ReadDirectoryChanges.cpp
			./WinControls/ReadDirectoryChanges/ReadDirectoryChangesPrivate.cpp
			./WinControls/SplitterContainer/Splitter.cpp
			./WinControls/SplitterContainer/SplitterContainer.cpp
			./WinControls/StaticDialog/RunDlg/RunDlg.cpp
			./WinControls/StaticDialog/StaticDialog.cpp
			./WinControls/StatusBar/StatusBar.cpp
			./WinControls/TabBar/ControlsTab.cpp
			./WinControls/TabBar/TabBar.cpp
			./WinControls/TaskList/TaskList.cpp
			./WinControls/TaskList/TaskListDlg.cpp
			./WinControls/ToolBar/ToolBar.cpp
			./WinControls/ToolTip/ToolTip.cpp
			./WinControls/TrayIcon/trayIconControler.cpp
			./WinControls/VerticalFileSwitcher/VerticalFileSwitcher.cpp
			./WinControls/VerticalFileSwitcher/VerticalFileSwitcherListView.cpp
			./WinControls/WindowsDlg/SizeableDlg.cpp
			./WinControls/WindowsDlg/WinMgr.cpp
			./WinControls/WindowsDlg/WinRect.cpp
			./WinControls/WindowsDlg/WindowsDlg.cpp
			./WinControls/shortcut/RunMacroDlg.cpp
			./WinControls/shortcut/shortcut.cpp
			./dpiAware.manifest
			./lastRecentFileList.cpp
			./lesDlgs.cpp
			./localization.cpp
			./notepad++.exe.manifest
			./uchardet/CharDistribution.cpp
			./uchardet/JpCntx.cpp
			./uchardet/LangModels/LangArabicModel.cpp
			./uchardet/LangModels/LangBulgarianModel.cpp
			./uchardet/LangModels/LangDanishModel.cpp
			./uchardet/LangModels/LangEsperantoModel.cpp
			./uchardet/LangModels/LangFrenchModel.cpp
			./uchardet/LangModels/LangGermanModel.cpp
			./uchardet/LangModels/LangGreekModel.cpp
			./uchardet/LangModels/LangHebrewModel.cpp
			./uchardet/LangModels/LangHungarianModel.cpp
			./uchardet/LangModels/LangRussianModel.cpp
			./uchardet/LangModels/LangSpanishModel.cpp
			./uchardet/LangModels/LangThaiModel.cpp
			./uchardet/LangModels/LangTurkishModel.cpp
			./uchardet/LangModels/LangVietnameseModel.cpp
			./uchardet/nsBig5Prober.cpp
			./uchardet/nsCharSetProber.cpp
			./uchardet/nsEUCJPProber.cpp
			./uchardet/nsEUCKRProber.cpp
			./uchardet/nsEUCTWProber.cpp
			./uchardet/nsEscCharsetProber.cpp
			./uchardet/nsEscSM.cpp
			./uchardet/nsGB2312Prober.cpp
			./uchardet/nsHebrewProber.cpp
			./uchardet/nsLatin1Prober.cpp
			./uchardet/nsMBCSGroupProber.cpp
			./uchardet/nsMBCSSM.cpp
			./uchardet/nsSBCSGroupProber.cpp
			./uchardet/nsSBCharSetProber.cpp
			./uchardet/nsSJISProber.cpp
			./uchardet/nsUTF8Prober.cpp
			./uchardet/nsUniversalDetector.cpp
			./uchardet/uchardet.cpp
			./winmain.cpp
)

SET(include_files
			./EncodingMapper.h
			./MISC/Common/Common.h
			./MISC/Common/LongRunningOperation.h
			./MISC/Common/mutex.h
			./MISC/Common/mutex.hxx
			./MISC/Common/verifySignedfile.h
			./MISC/Exception/MiniDumper.h
			./MISC/Exception/Win32Exception.h
			./MISC/FileNameStringSplitter.h
			./MISC/PluginsManager/IDAllocator.h
			./MISC/PluginsManager/Notepad_plus_msgs.h
			./MISC/PluginsManager/PluginInterface.h
			./MISC/PluginsManager/PluginsManager.h
			./MISC/Process/Processus.h
			./MISC/RegExt/regExtDlg.h
			./MISC/RegExt/regExtDlgRc.h
			./MISC/md5/md5Dlgs.h
			./Notepad_plus.h
			./Notepad_plus_Window.h
			./Parameters.h
			./ScitillaComponent/AutoCompletion.h
			./ScitillaComponent/Buffer.h
			./ScitillaComponent/DocTabView.h
			./ScitillaComponent/FindReplaceDlg.h
			./ScitillaComponent/FunctionCallTip.h
			./ScitillaComponent/GoToLineDlg.h
			./ScitillaComponent/Printer.h
			./ScitillaComponent/ScintillaCtrls.h
			./ScitillaComponent/ScintillaEditView.h
			./ScitillaComponent/SmartHighlighter.h
			./ScitillaComponent/UserDefineDialog.h
			./ScitillaComponent/UserDefineLangReference.h
			./ScitillaComponent/UserDefineResource.h
			./ScitillaComponent/colors.h
			./ScitillaComponent/columnEditor.h
			./ScitillaComponent/xmlMatchedTagsHighlighter.h
			./TinyXml/tinyXmlA/tinystrA.h
			./TinyXml/tinyXmlA/tinyxmlA.h
			./TinyXml/tinystr.h
			./TinyXml/tinyxml.h
			./UniConversion.h
			./Utf8_16.h
			./WinControls/AboutDlg/AboutDlg.h
			./WinControls/AboutDlg/URLCtrl.h
			./WinControls/AnsiCharPanel/ListView.h
			./WinControls/AnsiCharPanel/ansiCharPanel.h
			./WinControls/AnsiCharPanel/asciiListView.h
			./WinControls/ClipboardHistory/clipboardHistoryPanel.h
			./WinControls/ClipboardHistory/clipboardHistoryPanel_rc.h
			./WinControls/ColourPicker/ColourPicker.h
			./WinControls/ColourPicker/ColourPopup.h
			./WinControls/ColourPicker/WordStyleDlg.h
			./WinControls/ContextMenu/ContextMenu.h
			./WinControls/DockingWnd/Docking.h
			./WinControls/DockingWnd/DockingCont.h
			./WinControls/DockingWnd/DockingDlgInterface.h
			./WinControls/DockingWnd/DockingManager.h
			./WinControls/DockingWnd/DockingSplitter.h
			./WinControls/DockingWnd/Gripper.h
			./WinControls/DockingWnd/dockingResource.h
			./WinControls/DocumentMap/documentMap.h
			./WinControls/DocumentMap/documentSnapshot.h
			./WinControls/FileBrowser/fileBrowser.h
			./WinControls/FileBrowser/fileBrowser_rc.h
			./WinControls/FindCharsInRange/FindCharsInRange.h
			./WinControls/FunctionList/functionListPanel.h
			./WinControls/FunctionList/functionListPanel_rc.h
			./WinControls/FunctionList/functionParser.h
			./WinControls/Grid/BabyGrid.h
			./WinControls/Grid/BabyGridWrapper.h
			./WinControls/Grid/ShortcutMapper.h
			./WinControls/Grid/ShortcutMapper_rc.h
			./WinControls/ImageListSet/ImageListSet.h
			./WinControls/OpenSaveFileDialog/FileDialog.h
			./WinControls/PluginsAdmin/pluginsAdmin.h
			./WinControls/PluginsAdmin/pluginsAdminRes.h
			./WinControls/Preference/preferenceDlg.h
			./WinControls/ProjectPanel/ProjectPanel.h
			./WinControls/ProjectPanel/ProjectPanel_rc.h
			./WinControls/ProjectPanel/TreeView.h
			./WinControls/ReadDirectoryChanges/ReadDirectoryChanges.h
			./WinControls/ReadDirectoryChanges/ReadDirectoryChangesPrivate.h
			./WinControls/ReadDirectoryChanges/ThreadSafeQueue.h
			./WinControls/SplitterContainer/Splitter.h
			./WinControls/SplitterContainer/SplitterContainer.h
			./WinControls/StaticDialog/RunDlg/RunDlg.h
			./WinControls/StaticDialog/StaticDialog.h
			./WinControls/StatusBar/StatusBar.h
			./WinControls/TabBar/ControlsTab.h
			./WinControls/TabBar/TabBar.h
			./WinControls/TaskList/TaskList.h
			./WinControls/TaskList/TaskListDlg.h
			./WinControls/TaskList/TaskListDlg_rc.h
			./WinControls/ToolBar/ToolBar.h
			./WinControls/ToolTip/ToolTip.h
			./WinControls/TrayIcon/trayIconControler.h
			./WinControls/VerticalFileSwitcher/VerticalFileSwitcher.h
			./WinControls/VerticalFileSwitcher/VerticalFileSwitcherListView.h
			./WinControls/VerticalFileSwitcher/VerticalFileSwitcher_rc.h
			./WinControls/Window.h
			./WinControls/WindowsDlg/SizeableDlg.h
			./WinControls/WindowsDlg/WinMgr.h
			./WinControls/WindowsDlg/WindowsDlg.h
			./WinControls/WindowsDlg/WindowsDlgRc.h
			./WinControls/shortcut/RunMacroDlg.h
			./WinControls/shortcut/RunMacroDlg_rc.h
			./WinControls/shortcut/shortcut.h
			./lastRecentFileList.h
			./lesDlgs.h
			./localization.h
			./localizationstring.h
			./menuCmdID.h
			./resource.h
			./rgba_icons.h
			./uchardet/CharDistribution.h
			./uchardet/JpCntx.h
			./uchardet/nsBig5Prober.h
			./uchardet/nsCharSetProber.h
			./uchardet/nsCodingStateMachine.h
			./uchardet/nsEUCJPProber.h
			./uchardet/nsEUCKRProber.h
			./uchardet/nsEUCTWProber.h
			./uchardet/nsEscCharsetProber.h
			./uchardet/nsGB2312Prober.h
			./uchardet/nsHebrewProber.h
			./uchardet/nsLatin1Prober.h
			./uchardet/nsMBCSGroupProber.h
			./uchardet/nsPkgInt.h
			./uchardet/nsSBCSGroupProber.h
			./uchardet/nsSBCharSetProber.h
			./uchardet/nsSJISProber.h
			./uchardet/nsUTF8Prober.h
			./uchardet/nsUniversalDetector.h
			./uchardet/nscore.h
			./uchardet/prmem.h
			./uchardet/uchardet.h
)


SET(rcFiles
			./MISC/RegExt/regExtDlg.rc
			./MISC/md5/md5Dlgs.rc
			./Notepad_plus.rc
			./ScitillaComponent/FindReplaceDlg.rc
			./ScitillaComponent/UserDefineDialog.rc
			./ScitillaComponent/columnEditor.rc
			./WinControls/AnsiCharPanel/ansiCharPanel.rc
			./WinControls/ClipboardHistory/clipboardHistoryPanel.rc
			./WinControls/ColourPicker/ColourPopup.rc
			./WinControls/ColourPicker/WordStyleDlg.rc
			./WinControls/DockingWnd/DockingGUIWidget.rc
			./WinControls/DocumentMap/documentMap.rc
			./WinControls/DocumentMap/documentSnapshot.rc
			./WinControls/FileBrowser/fileBrowser.rc
			./WinControls/FindCharsInRange/findCharsInRange.rc
			./WinControls/FunctionList/functionListPanel.rc
			./WinControls/Grid/ShortcutMapper.rc
			./WinControls/PluginsAdmin/pluginsAdmin.rc
			./WinControls/Preference/preference.rc
			./WinControls/ProjectPanel/ProjectPanel.rc
			./WinControls/StaticDialog/RunDlg/RunDlg.rc
			./WinControls/TaskList/TaskListDlg.rc
			./WinControls/VerticalFileSwitcher/VerticalFileSwitcher.rc
			./WinControls/WindowsDlg/WindowsDlg.rc
			./WinControls/shortcut/RunMacroDlg.rc
			./WinControls/shortcut/shortcut.rc
)

IF (WIN32)
	SET(option WIN32)
	SET(win32_LIBRARIES comctl32 shlwapi dbghelp version crypt32 wintrust sensapi)
if ( MSVC )
	#do not use for mingw builds
	SET(CMAKE_CXX_FLAGS "/EHa /MP /W4")
	SET(defs -DUNICODE -D_UNICODE -D_WIN32_WINNT=0x501 -D_USE_64BIT_TIME_T -DTIXML_USE_STL -DTIXMLA_USE_STL
				-D_CRT_NONSTDC_NO_DEPRECATE -D_CRT_SECURE_NO_WARNINGS -D_CRT_NON_CONFORMING_SWPRINTFS )
else ( MSVC )
	# For possible MinGW compilation
	SET(CMAKE_CXX_FLAGS "-include../gcc/include/various.h -std=c++17 -fpermissive")
	SET(defs -DUNICODE -D_UNICODE -D_USE_64BIT_TIME_T -DTIXML_USE_STL -DTIXMLA_USE_STL )
#    SET(win32_LIBRARIES ${win32_LIBRARIES} stdc++fs)
endif ( MSVC )
ENDIF (WIN32)

ADD_DEFINITIONS(${defs})

INCLUDE_DIRECTORIES(${projIncludDir})

ADD_EXECUTABLE(notepad++ ${option} ${src_files} ${include_files} ${rcFiles})

TARGET_LINK_LIBRARIES (notepad++ PRIVATE
        stdc++fs
        ${win32_LIBRARIES})



#if ( GCC )
#target_link_libraries(notepad++ PRIVATE stdc++fs)
#TARGET_LINK_libraries(notepad++ PRIVATE libstdc++fs)
                                                         
#endif(GCC)
