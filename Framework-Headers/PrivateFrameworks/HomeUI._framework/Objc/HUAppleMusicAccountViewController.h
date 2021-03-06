//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUAppleMusicAccountModuleControllerDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUAppleMusicAccountModuleController, HUPrimaryUserSettingsItemModuleController, NADeallocationSentinel, NAFuture, NSString, UIAlertController;

@interface HUAppleMusicAccountViewController : HUItemTableViewController <HUAppleMusicAccountModuleControllerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>
{
    HUAppleMusicAccountModuleController *_appleMusicAccountModuleController;
    HUPrimaryUserSettingsItemModuleController *_primaryUserModuleController;
    NAFuture *_accountArbitrationFuture;
    NADeallocationSentinel *_appleMusicLoadingViewControllerDeallocationSentinel;
    UIAlertController *_appleMusicLoadingViewController;
}

@property (strong, nonatomic) NAFuture *accountArbitrationFuture; // @synthesize accountArbitrationFuture=_accountArbitrationFuture;
@property (strong, nonatomic) HUAppleMusicAccountModuleController *appleMusicAccountModuleController; // @synthesize appleMusicAccountModuleController=_appleMusicAccountModuleController;
@property (strong, nonatomic) UIAlertController *appleMusicLoadingViewController; // @synthesize appleMusicLoadingViewController=_appleMusicLoadingViewController;
@property (strong, nonatomic) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel; // @synthesize appleMusicLoadingViewControllerDeallocationSentinel=_appleMusicLoadingViewControllerDeallocationSentinel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HUPrimaryUserSettingsItemModuleController *primaryUserModuleController; // @synthesize primaryUserModuleController=_primaryUserModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_accessorySupportsMultiUser;
- (id)_appleMusicFooterMessage;
- (id)_appleMusicFooterView;
- (void)appleMusicModuleController:(id)arg1 willPresentContext:(id)arg2 account:(id)arg3;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)arg1;
- (void)appleMusicModuleControllerPresentSignInFlow:(id)arg1;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)itemModuleControllers;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)viewDidLoad;

@end

