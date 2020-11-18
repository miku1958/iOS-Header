//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUWallpaperEditingViewControllerDelegate-Protocol.h>
#import <HomeUI/HUWallpaperPickerViewControllerDelegate-Protocol.h>
#import <HomeUI/UIImagePickerControllerDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UITextFieldDelegate-Protocol.h>

@class HFRoomBuilder, HUEditRoomItemManager, HUEditableTextCell, HUZoneModuleController, NSString, UIBarButtonItem;
@protocol HUEditRoomViewControllerAddRoomDelegate, HUEditRoomViewControllerPresentationDelegate;

@interface HUEditRoomViewController : HUItemTableViewController <UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    HFRoomBuilder *_roomBuilder;
    id<HUEditRoomViewControllerPresentationDelegate> _presentationDelegate;
    id<HUEditRoomViewControllerAddRoomDelegate> _addRoomDelegate;
    HUZoneModuleController *_zoneModuleController;
    HUEditRoomItemManager *_roomItemManager;
    HUEditableTextCell *_nameCell;
    UIBarButtonItem *_savedButtonBarItem;
}

@property (readonly, weak, nonatomic) id<HUEditRoomViewControllerAddRoomDelegate> addRoomDelegate; // @synthesize addRoomDelegate=_addRoomDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HUEditableTextCell *nameCell; // @synthesize nameCell=_nameCell;
@property (readonly, weak, nonatomic) id<HUEditRoomViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property (weak, nonatomic) HUEditRoomItemManager *roomItemManager; // @synthesize roomItemManager=_roomItemManager;
@property (strong, nonatomic) UIBarButtonItem *savedButtonBarItem; // @synthesize savedButtonBarItem=_savedButtonBarItem;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUZoneModuleController *zoneModuleController; // @synthesize zoneModuleController=_zoneModuleController;

- (void).cxx_destruct;
- (id)_allTextFields;
- (void)_resignTextFieldFirstResponder;
- (void)addButtonPressed:(id)arg1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithRoomBuilder:(id)arg1 presentationDelegate:(id)arg2 addRoomDelegate:(id)arg3;
- (id)itemModuleControllers;
- (void)nameFieldTextChanged:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)updateTitle;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;

@end

