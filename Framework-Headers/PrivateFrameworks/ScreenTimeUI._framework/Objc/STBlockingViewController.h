//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ScreenTimeUI/CNContactViewControllerDelegate-Protocol.h>
#import <ScreenTimeUI/STMenuButtonDelegate-Protocol.h>

@class CNContactStore, NSString, SBSLockScreenService, STHourglassView, STManagementState, STMenuButton, UIButton, UIImageView, UILabel;

@interface STBlockingViewController : UIViewController <CNContactViewControllerDelegate, STMenuButtonDelegate>
{
    BOOL _changePolicyButtonHidden;
    BOOL _fullScreenBehavior;
    BOOL _showingPolicyOptions;
    CDUnknownBlockType _okButtonHandler;
    CDUnknownBlockType _addContactHandler;
    STHourglassView *_hourglassView;
    UIImageView *_communicationLimitView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_okButton;
    STMenuButton *_ignoreLimitButton;
    STMenuButton *_askForMoreTimeButton;
    UIButton *_enterScreenTimePasscodeButton;
    UIButton *_addContactButton;
    SBSLockScreenService *_lockScreenService;
    long long _policy;
    NSString *_categoryIdentifier;
    NSString *_bundleIdentifier;
    NSString *_webDomain;
    NSString *_formattedContactHandle;
    CNContactStore *_contactStore;
    STManagementState *_managementState;
}

@property (strong) UIButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property (copy) CDUnknownBlockType addContactHandler; // @synthesize addContactHandler=_addContactHandler;
@property (strong) STMenuButton *askForMoreTimeButton; // @synthesize askForMoreTimeButton=_askForMoreTimeButton;
@property (copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property (nonatomic, getter=isChangePolicyButtonHidden) BOOL changePolicyButtonHidden; // @synthesize changePolicyButtonHidden=_changePolicyButtonHidden;
@property (strong) UIImageView *communicationLimitView; // @synthesize communicationLimitView=_communicationLimitView;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) UIButton *enterScreenTimePasscodeButton; // @synthesize enterScreenTimePasscodeButton=_enterScreenTimePasscodeButton;
@property (copy) NSString *formattedContactHandle; // @synthesize formattedContactHandle=_formattedContactHandle;
@property BOOL fullScreenBehavior; // @synthesize fullScreenBehavior=_fullScreenBehavior;
@property (readonly) unsigned long long hash;
@property (strong) STHourglassView *hourglassView; // @synthesize hourglassView=_hourglassView;
@property (strong) STMenuButton *ignoreLimitButton; // @synthesize ignoreLimitButton=_ignoreLimitButton;
@property (readonly) SBSLockScreenService *lockScreenService; // @synthesize lockScreenService=_lockScreenService;
@property (readonly) STManagementState *managementState; // @synthesize managementState=_managementState;
@property (strong) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property (strong) UIButton *okButton; // @synthesize okButton=_okButton;
@property (copy, nonatomic) CDUnknownBlockType okButtonHandler; // @synthesize okButtonHandler=_okButtonHandler;
@property long long policy; // @synthesize policy=_policy;
@property (readonly) BOOL shouldAllowOneMoreMinute;
@property (readonly) BOOL shouldRequestMoreTime;
@property (getter=isShowingPolicyOptions) BOOL showingPolicyOptions; // @synthesize showingPolicyOptions=_showingPolicyOptions;
@property (readonly) Class superclass;
@property (strong) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (copy) NSString *webDomain; // @synthesize webDomain=_webDomain;

+ (CDUnknownBlockType)closeApplicationHandler;
+ (id)newTranslucentBlockingViewController;
- (void).cxx_destruct;
- (void)_addContact;
- (void)_addContact:(id)arg1;
- (CDUnknownBlockType)_askForMoreTimeMenuProvider;
- (id)_askForTimeResource;
- (BOOL)_canShowWhileLocked;
- (void)_didFinishEnteringScreenTimePasscode:(id)arg1;
- (void)_enterScreenTimePasscode:(id)arg1;
- (id)_enterScreenTimePasscodeAction;
- (id)_iCloudContainer;
- (id)_ignoreForTodayAction;
- (void)_ignoreLimitForAdditionalTime:(double)arg1;
- (CDUnknownBlockType)_ignoreLimitMenuProvider;
- (id)_newContact;
- (void)_ok:(id)arg1;
- (void)_oneMoreMinute:(id)arg1;
- (id)_oneMoreMinuteAction;
- (id)_remindMeIn15MinutesAction;
- (void)_sendRequest:(id)arg1;
- (id)_sendRequestAction;
- (void)_showAskForMoreTimeOptions:(id)arg1;
- (void)_showIgnoreLimitOptions:(id)arg1;
- (void)_showPasscodeApprovedOptions;
- (void)_unlockDeviceIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateAddContactButton;
- (void)_updateAppearanceForAskPending;
- (void)_updateAppearanceForBlockedContent:(id)arg1 messageFormatKey:(id)arg2 messageKey:(id)arg3;
- (void)_updateButtons;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contextMenuWillDisplayForButton:(id)arg1;
- (void)contextMenuWillEndForButton:(id)arg1;
- (void)dealloc;
- (void)hideWithAnimation:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showWithAnimation:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAppearanceUsingBlockedContactHandles:(id)arg1 contactNameByHandle:(id)arg2 forBundleIdentifier:(id)arg3 isApplicationCurrentlyLimited:(BOOL)arg4 contactStore:(id)arg5;
- (void)updateAppearanceUsingPolicy:(long long)arg1 forBundleIdentifier:(id)arg2;
- (void)updateAppearanceUsingPolicy:(long long)arg1 forCategoryIdentifier:(id)arg2;
- (void)updateAppearanceUsingPolicy:(long long)arg1 forWebpageURL:(id)arg2;
- (void)viewDidLoad;

@end
