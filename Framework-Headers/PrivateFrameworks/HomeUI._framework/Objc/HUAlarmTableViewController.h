//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HFAccessoryObserver-Protocol.h>
#import <HomeUI/HFAccessorySettingMobileTimerAdapterObserver-Protocol.h>
#import <HomeUI/HFMediaObjectObserver-Protocol.h>
#import <HomeUI/HUAlarmEditViewControllerDelegate-Protocol.h>
#import <HomeUI/HUHomePodAlarmItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class HUHomePodAlarmItemModuleController, MTAlarm, NSString, UIBarButtonItem, _UIContentUnavailableView;
@protocol HFMediaProfileContainer, HUPresentationDelegate;

@interface HUAlarmTableViewController : HUItemTableViewController <HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HFAccessoryObserver, HFMediaObjectObserver, HFAccessorySettingMobileTimerAdapterObserver, HUPresentationDelegateHost>
{
    BOOL _isAccessoryControllable;
    BOOL _isAlarmsSettingReady;
    id<HUPresentationDelegate> _presentationDelegate;
    UIBarButtonItem *_doneButtonItem;
    HUHomePodAlarmItemModuleController *_alarmModuleController;
    MTAlarm *_alarmToEdit;
    _UIContentUnavailableView *_noItemsView;
    UIBarButtonItem *_addButtonItem;
    UIBarButtonItem *_editDoneButtonItem;
    id<HFMediaProfileContainer> _mediaProfileContainer;
}

@property (strong, nonatomic) UIBarButtonItem *addButtonItem; // @synthesize addButtonItem=_addButtonItem;
@property (strong, nonatomic) HUHomePodAlarmItemModuleController *alarmModuleController; // @synthesize alarmModuleController=_alarmModuleController;
@property (strong, nonatomic) MTAlarm *alarmToEdit; // @synthesize alarmToEdit=_alarmToEdit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property (strong, nonatomic) UIBarButtonItem *editDoneButtonItem; // @synthesize editDoneButtonItem=_editDoneButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAccessoryControllable; // @synthesize isAccessoryControllable=_isAccessoryControllable;
@property (readonly, nonatomic) BOOL isAlarmsSettingReady; // @synthesize isAlarmsSettingReady=_isAlarmsSettingReady;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property (strong, nonatomic) _UIContentUnavailableView *noItemsView; // @synthesize noItemsView=_noItemsView;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_discernReachabilityForAccessory:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)_layoutNoItemsLabel;
- (void)_numberOfItemsDidChangeAnimated:(BOOL)arg1;
- (void)_showAddView:(id)arg1;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (void)_updateAccessoryControllable:(BOOL)arg1 alarmsSettingReady:(BOOL)arg2;
- (void)_updateNavigationItems:(BOOL)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (id)alarmItemManager;
- (void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2;
- (BOOL)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
- (id)backgroundView;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)editViewControllerForAlarm:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemModuleControllers;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
