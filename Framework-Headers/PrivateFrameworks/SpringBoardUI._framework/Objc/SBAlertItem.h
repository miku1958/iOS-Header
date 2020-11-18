//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/UIAlertViewDelegate-Protocol.h>

@class NSArray, NSString, UIAlertView, UIImage;

@interface SBAlertItem : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertSheet;
    BOOL _orderOverSBAlert;
    BOOL _preventLockOver;
    BOOL _didEverActivate;
    BOOL _didEverDeactivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
    BOOL _pendWhileKeyBagLocked;
    NSArray *_allowedBundleIDs;
    BOOL _allowInCar;
    BOOL _allowMessageInCar;
    UIImage *_iconImage;
}

@property (nonatomic) BOOL allowInCar; // @synthesize allowInCar=_allowInCar;
@property (nonatomic) BOOL allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property (nonatomic) BOOL allowMessageInCar; // @synthesize allowMessageInCar=_allowMessageInCar;
@property (strong, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property (nonatomic) BOOL ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
@property (nonatomic) BOOL pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property (nonatomic) BOOL pendWhileKeyBagLocked; // @synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked;
@property (readonly) Class superclass;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_didEverActivate;
- (BOOL)_didEverDeactivate;
- (BOOL)_dismissesOverlaysOnLockScreen;
- (void)_noteDeactivated;
- (void)_playPresentationSound;
- (id)alertController;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (int)alertItemNotificationType;
- (int)alertPriority;
- (id)alertSheet;
- (Class)alertSheetClass;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)allowAutoUnlock;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (double)autoDismissInterval;
- (BOOL)behavesSuperModally;
- (void)buttonDismissed;
- (void)cleanPreviousConfiguration;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (BOOL)didPlayPresentationSound;
- (void)dismiss;
- (void)dismiss:(int)arg1;
- (BOOL)dismissOnLock;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)dismissesAutomatically;
- (BOOL)displayActionButtonOnLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)hasActiveKeyboardOnScreen;
- (id)init;
- (BOOL)isCriticalAlert;
- (id)lockLabel;
- (void)noteVolumeOrLockPressed;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (id)prepareNewAlertSheetWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)preventInterruption;
- (BOOL)preventLockOver;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (void)screenWillUndim;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (void)setPreventLockOver:(BOOL)arg1;
- (id)shortLockLabel;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (id)sound;
- (BOOL)togglesMediaControls;
- (BOOL)undimsScreen;
- (int)unlockSource;
- (BOOL)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(BOOL)arg1;

@end

