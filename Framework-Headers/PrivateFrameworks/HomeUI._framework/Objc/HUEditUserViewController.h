//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUUserTableViewController.h>

#import <HomeUI/HUAboutResidentDeviceFooterViewDelegate-Protocol.h>
#import <HomeUI/HUAboutResidentDeviceViewControllerDelegate-Protocol.h>
#import <HomeUI/HUAccessorySettingsItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HFUserItem, HUAboutResidentDeviceFooterView, HUAccessorySettingsItemModuleController, HUEditUserItemManager, HUPendingAccessoriesGridViewController, NSString;

@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate>
{
    HFUserItem *_userItem;
    HUEditUserItemManager *_editUserItemManager;
    HUPendingAccessoriesGridViewController *_pendingAccessoriesViewController;
    HUAccessorySettingsItemModuleController *_userSettingsItemModuleController;
    HUAboutResidentDeviceFooterView *_aboutResidentDeviceFooterView;
}

@property (strong, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView; // @synthesize aboutResidentDeviceFooterView=_aboutResidentDeviceFooterView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HUEditUserItemManager *editUserItemManager; // @synthesize editUserItemManager=_editUserItemManager;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController; // @synthesize pendingAccessoriesViewController=_pendingAccessoriesViewController;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;
@property (strong, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController; // @synthesize userSettingsItemModuleController=_userSettingsItemModuleController;

- (void).cxx_destruct;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)_removeUser;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemModuleControllers;
- (void)learnMoreLinkTapped:(id)arg1;
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2;
- (BOOL)moduleController:(id)arg1 shouldDisableItem:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (id)userHandle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

