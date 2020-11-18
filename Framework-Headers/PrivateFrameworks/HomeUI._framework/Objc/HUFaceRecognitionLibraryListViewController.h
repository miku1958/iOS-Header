//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUFaceRecognitionPersonEditorViewControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/HUTappableTextViewDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUFaceRecognitionLibraryListItemManager, NSString;

@interface HUFaceRecognitionLibraryListViewController : HUItemTableViewController <UITextViewDelegate, HUTappableTextViewDelegate, HUSwitchCellDelegate, HUFaceRecognitionPersonEditorViewControllerDelegate>
{
    HUFaceRecognitionLibraryListItemManager *_listItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUFaceRecognitionLibraryListItemManager *listItemManager; // @synthesize listItemManager=_listItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)dismissTextViewController;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)personEditorViewController:(id)arg1 didUpdateItem:(id)arg2;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(BOOL)arg2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)trailingSwipeActionsForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
