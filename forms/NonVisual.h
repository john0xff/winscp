//---------------------------------------------------------------------------
#ifndef NonVisualH
#define NonVisualH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ActnList.hpp>
#include <Menus.hpp>
#include <ImgList.hpp>
#include <ExtCtrls.hpp>
#include <Rights.h>

#include "CustomScpExplorer.h"
#include "TB2Item.hpp"
#include "TBX.hpp"
//---------------------------------------------------------------------------
#define fcStatusBar        0x01
#define fcToolBar          0x02
#define fcLocalStatusBar   0x12
#define fcRemoteStatusBar  0x14
#define fcSessionCombo     0x15
#define fcRemotePopup      0x17
#define fcCommandLinePanel 0x18
#define fcQueueView        0x19
#define fcQueueToolbar     0x1A
#define fcLocalTree        0x1B
#define fcRemoteTree       0x1C
#define fcTransferCombo    0x1D
#define fcSessionToolbar   0x1E
#define fcCustomCommandsBand 0x1F
#define fcColorMenu        0x20
#define fcColorPalette     0x21

#define fcExplorerMenuBand        0x31
#define fcExplorerAddressBand     0x32
#define fcExplorerToolbarBand     0x33
#define fcExplorerSelectionBand   0x34
#define fcExplorerSessionBand     0x35
#define fcExplorerPreferencesBand 0x36
#define fcExplorerSortBand        0x37
#define fcExplorerUpdatesBand     0x38
#define fcExplorerTransferBand    0x39
#define fcExplorerCustomCommandsBand 0x40

#define fcCommanderMenuBand             0x51
#define fcCommanderSessionBand          0x52
#define fcCommanderPreferencesBand      0x53
#define fcCommanderSelectionBand        0x54
#define fcCommanderToolbarBand          0x55
#define fcCommanderSortBand             0x56
#define fcCommanderCommandsBand         0x57
#define fcCommanderUpdatesBand          0x58
#define fcCommanderTransferBand         0x59
#define fcCommanderUploadDownloadBand   0x60
#define fcCommanderCustomCommandsBand   0x61

#define fcCommanderLocalHistoryBand     0x71
#define fcCommanderLocalNavigationBand  0x72
#define fcCommanderRemoteHistoryBand    0x73
#define fcCommanderRemoteNavigationBand 0x74
//---------------------------------------------------------------------------
class TNonVisualDataModule : public TDataModule
{
__published:    // IDE-managed Components
  TActionList *LogActions;
  TAction *LogClearAction;
  TAction *LogSelectAllAction;
  TAction *LogCopyAction;
  TAction *LogCloseAction;
  TTBXPopupMenu *LogMemoPopup;
  TTBXItem *Clear1;
  TTBXItem *Close1;
  TTBXItem *Selectall1;
  TAction *LogPreferencesAction;
  TAction *LocalSortByNameAction;
  TAction *LocalSortAscendingAction;
  TAction *LocalSortBySizeAction;
  TActionList *ExplorerActions;
  TAction *CurrentRenameAction;
  TAction *CurrentDeleteAction;
  TAction *CurrentCreateDirAction;
  TAction *CurrentCycleStyleAction;
  TAction *CurrentIconAction;
  TAction *CurrentSmallIconAction;
  TAction *CurrentReportAction;
  TAction *CurrentListAction;
  TAction *CurrentCopyFocusedAction;
  TAction *CurrentMoveFocusedAction;
  TAction *CurrentDeleteFocusedAction;
  TAction *CurrentPropertiesFocusedAction;
  TAction *CurrentPropertiesAction;
  TAction *CurrentCopyAction;
  TAction *CurrentMoveAction;
  TAction *RemoteBackAction;
  TAction *RemoteForwardAction;
  TAction *RemoteParentDirAction;
  TAction *RemoteRootDirAction;
  TAction *RemoteHomeDirAction;
  TAction *RemoteRefreshAction;
  TAction *AboutAction;
  TAction *StatusBarAction;
  TAction *ExplorerAddressBandAction;
  TAction *ExplorerMenuBandAction;
  TAction *ExplorerToolbarBandAction;
  TAction *RemoteOpenDirAction;
  TAction *SelectAction;
  TAction *UnselectAction;
  TAction *SelectAllAction;
  TAction *InvertSelectionAction;
  TAction *ExplorerSelectionBandAction;
  TAction *ClearSelectionAction;
  TTimer *SessionIdleTimer;
  TAction *ViewLogAction;
  TAction *NewSessionAction;
  TAction *CloseSessionAction;
  TAction *SavedSessionsAction;
  TAction *ExplorerSessionBandAction;
  TAction *PreferencesAction;
  TAction *ExplorerPreferencesBandAction;
  TAction *RemoteChangePathAction;
  TAction *LocalChangePathAction;
  TAction *LocalOpenDirAction;
  TAction *LocalBackAction;
  TAction *LocalForwardAction;
  TAction *LocalParentDirAction;
  TAction *LocalRootDirAction;
  TAction *LocalHomeDirAction;
  TAction *LocalRefreshAction;
  TAction *ToolBarAction;
  TAction *CommanderMenuBandAction;
  TAction *CommanderSessionBandAction;
  TAction *CommanderPreferencesBandAction;
  TAction *CommanderSelectionBandAction;
  TAction *CommanderToolbarBandAction;
  TAction *CommanderLocalHistoryBandAction;
  TAction *CommanderLocalNavigationBandAction;
  TAction *CommanderRemoteHistoryBandAction;
  TAction *CommanderRemoteNavigationBandAction;
  TAction *LocalStatusBarAction;
  TAction *RemoteStatusBarAction;
  TAction *LocalSortByAttrAction;
  TAction *LocalSortByTypeAction;
  TAction *LocalSortByChangedAction;
  TAction *CommanderSortBandAction;
  TAction *RemoteSortAscendingAction;
  TAction *RemoteSortByNameAction;
  TAction *RemoteSortBySizeAction;
  TAction *RemoteSortByRightsAction;
  TAction *RemoteSortByChangedAction;
  TAction *RemoteSortByOwnerAction;
  TAction *RemoteSortByGroupAction;
  TAction *CurrentSortByTypeAction;
  TAction *CurrentSortAscendingAction;
  TAction *CurrentSortByNameAction;
  TAction *CurrentSortBySizeAction;
  TAction *CurrentSortByRightsAction;
  TAction *CurrentSortByChangedAction;
  TAction *CurrentSortByOwnerAction;
  TAction *CurrentSortByGroupAction;
  TAction *ExplorerSortBandAction;
  TAction *SortColumnAscendingAction;
  TAction *SortColumnDescendingAction;
  TAction *HomepageAction;
  TAction *HistoryPageAction;
  TAction *SaveCurrentSessionAction;
  TAction *LocalSortByExtAction;
  TAction *RemoteSortByExtAction;
  TAction *CurrentSortByExtAction;
  TAction *ShowHideRemoteNameColumnAction;
  TAction *ShowHideRemoteExtColumnAction;
  TAction *ShowHideRemoteSizeColumnAction;
  TAction *ShowHideRemoteChangedColumnAction;
  TAction *ShowHideRemoteRightsColumnAction;
  TAction *ShowHideRemoteOwnerColumnAction;
  TAction *ShowHideRemoteGroupColumnAction;
  TAction *ShowHideLocalNameColumnAction;
  TAction *ShowHideLocalExtColumnAction;
  TAction *ShowHideLocalTypeColumnAction;
  TAction *ShowHideLocalSizeColumnAction;
  TAction *ShowHideLocalChangedColumnAction;
  TAction *ShowHideLocalAttrColumnAction;
  TAction *HideColumnAction;
  TAction *CompareDirectoriesAction;
  TAction *CommanderCommandsBandAction;
  TAction *SynchronizeAction;
  TAction *ForumPageAction;
  TAction *LocalAddBookmarkAction;
  TAction *RemoteAddBookmarkAction;
  TAction *ConsoleAction;
  TAction *LocalExploreDirectoryAction;
  TAction *CurrentEditAction;
  TAction *CurrentEditAlternativeAction;
  TAction *CurrentOpenAction;
  TAction *SynchronizeBrowsingAction;
  TAction *AddEditLinkAction;
  TAction *CloseApplicationAction;
  TAction *OpenedSessionsAction;
  TAction *CustomCommandsAction;
  TAction *CustomCommandsCustomizeAction;
  TAction *CheckForUpdatesAction;
  TAction *PuttyAction;
  TAction *DonatePageAction;
  TAction *FileSystemInfoAction;
  TAction *ClearCachesAction;
  TAction *FullSynchronizeAction;
  TAction *RemoteMoveToAction;
  TAction *RemoteMoveToFocusedAction;
  TAction *SelectOneAction;
  TAction *ShowHiddenFilesAction;
  TAction *CommandLinePanelAction;
  TAction *LocalPathToClipboardAction;
  TAction *RemotePathToClipboardAction;
  TAction *GoToCommandLineAction;
  TAction *FileListToCommandLineAction;
  TAction *FileListToClipboardAction;
  TAction *FullFileListToClipboardAction;
  TAction *QueueItemQueryAction;
  TAction *QueueItemPromptAction;
  TAction *QueueItemErrorAction;
  TAction *QueueItemDeleteAction;
  TAction *QueueItemExecuteAction;
  TAction *QueueGoToAction;
  TAction *QueueItemUpAction;
  TAction *QueueItemDownAction;
  TAction *QueueToggleShowAction;
  TAction *QueueShowAction;
  TAction *QueueHideWhenEmptyAction;
  TAction *QueueHideAction;
  TAction *QueueToolbarAction;
  TAction *QueuePreferencesAction;
  TAction *PasteAction;
  TAction *RemoteTreeAction;
  TAction *LocalTreeAction;
  TAction *GoToTreeAction;
  TAction *NewFileAction;
  TAction *RemoteCopyToFocusedAction;
  TAction *RemoteCopyToAction;
  TAction *UrlToClipboardAction;
  TAction *TableOfContentsAction;
  TTBXPopupMenu *CommanderBarPopup;
  TTBXItem *StandardButtons3;
  TTBXItem *SessionButtons5;
  TTBXItem *SelectionButtons3;
  TTBXItem *PreferencesButtons4;
  TTBXItem *SortButtons2;
  TTBXItem *CommandsButtons2;
  TTBXSeparatorItem *N26;
  TTBXItem *CommandLine2;
  TTBXItem *CommandsToolbar1;
  TTBXItem *StatusBar8;
  TTBXSeparatorItem *N27;
  TTBXSubmenuItem *LocalPanel1;
  TTBXItem *HistoryButtons3;
  TTBXItem *NavigationButtons3;
  TTBXSeparatorItem *N23;
  TTBXItem *Tree7;
  TTBXSeparatorItem *N77;
  TTBXItem *StatusBar6;
  TTBXSubmenuItem *RemotePanel2;
  TTBXItem *HistoryButtons4;
  TTBXItem *NavigationButtons4;
  TTBXSeparatorItem *N25;
  TTBXItem *Tree8;
  TTBXSeparatorItem *N78;
  TTBXItem *StatusBar7;
  TTBXSubmenuItem *Options1;
  TTBXItem *Show5;
  TTBXItem *HidewhenEmpty5;
  TTBXItem *Hide4;
  TTBXSeparatorItem *N69;
  TTBXItem *Toolbar4;
  TTBXSeparatorItem *N68;
  TTBXItem *Customize4;
  TTBXPopupMenu *RemotePanelPopup;
  TTBXItem *CopyPathtoClipboard1;
  TTBXItem *OpenDirectoryBookmark1;
  TTBXSeparatorItem *N51;
  TTBXItem *HistoryButtons5;
  TTBXItem *NavigationButtons5;
  TTBXSeparatorItem *N28;
  TTBXItem *Tree5;
  TTBXSeparatorItem *N75;
  TTBXItem *StatusBar9;
  TTBXPopupMenu *LocalPanelPopup;
  TTBXItem *CopyPathtoClipboard2;
  TTBXItem *OpenDirectoryBookmark2;
  TTBXSeparatorItem *N52;
  TTBXItem *HistoryButtons6;
  TTBXItem *NavigationButtons6;
  TTBXSeparatorItem *N29;
  TTBXItem *Tree6;
  TTBXSeparatorItem *N76;
  TTBXItem *StatusBar10;
  TTBXPopupMenu *RemoteFilePopup;
  TTBXItem *CurrentOpenMenuItem;
  TTBXItem *CurrentEditMenuItem;
  TTBXItem *CurrentCopyMenuItem;
  TTBXItem *Duplicate3;
  TTBXItem *Moveto1;
  TTBXItem *Moveto6;
  TTBXItem *Delete1;
  TTBXItem *Rename1;
  TTBXSeparatorItem *N45;
  TTBXSubmenuItem *RemoteDirViewCustomCommandsMenu;
  TTBXSubmenuItem *FileNames3;
  TTBXItem *InserttoCommandLine2;
  TTBXItem *CopytoClipboard3;
  TTBXItem *CopytoClipboardIncludePaths3;
  TTBXItem *CopyURLtoClipboard3;
  TTBXSeparatorItem *N1;
  TTBXItem *Properties1;
  TTBXPopupMenu *RemoteDirViewPopup;
  TTBXSubmenuItem *GoTo4;
  TTBXItem *OpenDirectoryBookmark3;
  TTBXSeparatorItem *N81;
  TTBXItem *ParentDirectory4;
  TTBXItem *RootDirectory4;
  TTBXItem *HomeDirectory4;
  TTBXSeparatorItem *N80;
  TTBXItem *Back4;
  TTBXItem *Forward4;
  TTBXItem *Refresh4;
  TTBXItem *AddToBookmarks4;
  TTBXItem *CopyPathtoClipboard6;
  TTBXSeparatorItem *N79;
  TTBXPopupMenu *LocalDirViewPopup;
  TTBXSubmenuItem *GoTo5;
  TTBXItem *OpenDirectoryBookmark4;
  TTBXItem *ExploreDirectory2;
  TTBXSeparatorItem *N84;
  TTBXItem *ParentDirectory5;
  TTBXItem *RootDirectory5;
  TTBXItem *HomeDirectory5;
  TTBXSeparatorItem *N83;
  TTBXItem *Back5;
  TTBXItem *Forward5;
  TTBXItem *Refresh5;
  TTBXItem *AddToBookmarks5;
  TTBXItem *CopyPathtoClipboard7;
  TTBXSeparatorItem *N82;
  TTBXItem *CreateDirectory4;
  TTBXPopupMenu *LocalDirViewColumnPopup;
  TTBXItem *SortAscending1;
  TTBXItem *SortDescending1;
  TTBXItem *Hidecolumn1;
  TTBXSeparatorItem *N37;
  TTBXSubmenuItem *Showcolumns3;
  TTBXItem *Name3;
  TTBXItem *Size3;
  TTBXItem *Type2;
  TTBXItem *Modification3;
  TTBXItem *Attributes3;
  TTBXPopupMenu *RemoteDirViewColumnPopup;
  TTBXItem *MenuItem1;
  TTBXItem *MenuItem2;
  TTBXItem *Hidecolumn2;
  TTBXSeparatorItem *N38;
  TTBXSubmenuItem *Showcolumns4;
  TTBXItem *Name4;
  TTBXItem *Size4;
  TTBXItem *Modification4;
  TTBXItem *Permissions1;
  TTBXItem *Owner2;
  TTBXItem *Group2;
  TTBXPopupMenu *QueuePopup;
  TTBXItem *ShowQuery1;
  TTBXItem *ShowError1;
  TTBXItem *ShowPrompt1;
  TTBXSeparatorItem *N53;
  TTBXItem *ExecuteNow1;
  TTBXItem *Delete4;
  TTBXSeparatorItem *N54;
  TTBXItem *MoveUp1;
  TTBXItem *MoveDown1;
  TTBXSeparatorItem *N67;
  TTBXSubmenuItem *Queue2;
  TTBXItem *Show4;
  TTBXItem *HidewhenEmpty4;
  TTBXItem *Hide3;
  TTBXSeparatorItem *N66;
  TTBXItem *Toolbar3;
  TTBXSeparatorItem *N65;
  TTBXItem *Customize3;
  TTBXPopupMenu *ExplorerBarPopup;
  TTBXItem *Address2;
  TTBXItem *StandardButtons1;
  TTBXItem *SelectionButtons1;
  TTBXItem *SessionButtons2;
  TTBXItem *PreferencesButtons1;
  TTBXItem *SortButtons3;
  TTBXSeparatorItem *N5;
  TTBXItem *StatusBar2;
  TTBXSeparatorItem *N72;
  TTBXSubmenuItem *Queue7;
  TTBXItem *Show6;
  TTBXItem *HidewhenEmpty6;
  TTBXItem *Hide5;
  TTBXSeparatorItem *N71;
  TTBXItem *Toolbar5;
  TTBXSeparatorItem *N70;
  TTBXItem *Customize5;
  TTBXItem *Tree4;
  TTBXItem *RemoteSortByExtColumnPopupItem;
  TTBXItem *LocalSortByExtColumnPopupItem;
  TAction *FileListFromClipboardAction;
  TAction *ShowHideRemoteLinkTargetColumnAction;
  TTBXItem *TBXItem1;
  TAction *DownloadPageAction;
  TAction *CommanderUpdatesBandAction;
  TTBXItem *TBXItem2;
  TAction *UpdatesPreferencesAction;
  TAction *ShowUpdatesAction;
  TAction *ExplorerUpdatesBandAction;
  TTBXItem *TBXItem3;
  TAction *ExplorerTransferBandAction;
  TAction *CommanderTransferBandAction;
  TTBXItem *TBXItem4;
  TTBXItem *TBXItem5;
  TAction *PresetsPreferencesAction;
  TAction *BestFitColumnAction;
  TAction *CustomCommandsEnterAction;
  TAction *LockToolbarsAction;
  TTBXItem *TBXItem6;
  TTBXItem *TBXItem7;
  TAction *ShowHideRemoteTypeColumnAction;
  TTBXItem *TBXItem8;
  TAction *RemoteSortByTypeAction;
  TAction *QueueItemPauseAction;
  TTBXItem *TBXItem9;
  TAction *QueueItemResumeAction;
  TTBXItem *TBXItem10;
  TAction *QueuePauseAllAction;
  TAction *QueueResumeAllAction;
  TTBXSubmenuItem *TBXSubmenuItem1;
  TTBXItem *TBXItem11;
  TTBXItem *TBXItem12;
  TAction *EditorListCustomizeAction;
  TAction *RestoreSelectionAction;
  TAction *CurrentEditFocusedAction;
  TAction *NewLinkAction;
  TAction *NewDirAction;
  TTBXSubmenuItem *TBXSubmenuItem26;
  TTBXItem *TBXItem135;
  TTBXItem *TBXItem136;
  TTBXItem *TBXItem209;
  TAction *QueueDisconnectOnceEmptyAction;
  TTBXItem *TBXItem13;
  TAction *LocalCopyAction;
  TAction *RemoteCopyAction;
  TAction *CommanderUploadDownloadBandAction;
  TTBXItem *TBXItem14;
  TAction *ExplorerCustomCommandsBandAction;
  TAction *CommanderCustomCommandsBandAction;
  TTBXItem *TBXItem15;
  TTBXItem *TBXItem16;
  TAction *CustomCommandsBandAction;
  TAction *ColorPickAction;
  TAction *ColorDefaultAction;
  TAction *ColorMenuAction;
  void __fastcall LogActionsUpdate(TBasicAction *Action, bool &Handled);
  void __fastcall LogActionsExecute(TBasicAction *Action, bool &Handled);
  void __fastcall ExplorerActionsUpdate(TBasicAction *Action, bool &Handled);
  void __fastcall ExplorerActionsExecute(TBasicAction *Action, bool &Handled);
  void __fastcall SessionIdleTimerTimer(TObject *Sender);
  void __fastcall QueuePopupPopup(TObject *Sender);
private:
  TListColumn * FListColumn;
  TCustomScpExplorerForm * FScpExplorer;
  bool FSessionIdleTimerExecuting;
  int FIdle;

  void __fastcall SetScpExplorer(TCustomScpExplorerForm * value);
protected:
  void __fastcall CreateSessionListMenu(TAction * Action);
  void __fastcall CreateCustomCommandsMenu(TAction * Action);
  void __fastcall CreateCustomCommandsMenu(TTBCustomItem * Menu, bool OnFocused,
    bool Toolbar);
  void __fastcall CreateOpenedSessionListMenu(TAction * Action);
  TCustomDirView * __fastcall DirView(TOperationSide Side) { return ScpExplorer->DirView(Side); }
  void __fastcall SessionItemClick(TObject * Sender);
  void __fastcall OpenedSessionItemClick(TObject * Sender);
  void __fastcall CustomCommandClick(TObject * Sender);
  void __fastcall CreateEditorListMenu(TAction * Action);
  void __fastcall EditorItemClick(TObject * Sender);
  void __fastcall DoIdle();
  inline void __fastcall ShowUpdatesUpdate();
  void __fastcall PreferencesDialog(TPreferencesMode APreferencesMode);

public:
  __fastcall TNonVisualDataModule(TComponent * Owner);
  virtual __fastcall ~TNonVisualDataModule();

  void __fastcall CommanderShortcuts();
  void __fastcall ExplorerShortcuts();
  TShortCut __fastcall OpenSessionShortCut(int Index);
  void __fastcall UpdateNonVisibleActions();
  void __fastcall UpdateCustomCommandsToolbar(TTBXToolbar * Toolbar);

  __property TListColumn * ListColumn = { read = FListColumn, write = FListColumn };
  __property TCustomScpExplorerForm * ScpExplorer = { read = FScpExplorer, write = SetScpExplorer };
};
//---------------------------------------------------------------------------
extern PACKAGE TNonVisualDataModule *NonVisualDataModule;
//---------------------------------------------------------------------------
#endif
