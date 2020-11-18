//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/CRCarPlayPreferencesDelegate-Protocol.h>
#import <PreferencesUI/DevicePINControllerDelegate-Protocol.h>

@class CRCarPlayPreferences, NSArray, NSDictionary, NSMutableDictionary, NSString, NSTimer, PSSpecifier, PSUITVOutManager;

@interface PSUIGeneralController : PSListController <CRCarPlayPreferencesDelegate, DevicePINControllerDelegate>
{
    NSArray *_autoLockValues;
    NSDictionary *_autoLockTitleDictionary;
    NSMutableDictionary *_localizedAutoLockTitleDictionary;
    NSTimer *_usageTimer;
    PSUITVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_siriSpecifier;
    CRCarPlayPreferences *_carPreferences;
}

@property (strong, nonatomic) CRCarPlayPreferences *carPreferences; // @synthesize carPreferences=_carPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)EDGEEnabled:(id)arg1;
- (BOOL)_hasCarPlayContent;
- (void)_localizeAutoLockTitles;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)enableEdge:(id)arg1;
- (void)handleCarPlayAllowedDidChange;
- (void)handleTVOutChange;
- (void)handleURL:(id)arg1;
- (id)init;
- (id)locksAndUnlocksWithCase:(id)arg1;
- (id)parentalControlsEnabled:(id)arg1;
- (void)profileNotification:(id)arg1;
- (id)screenLock:(id)arg1;
- (void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2;
- (void)setScreenLock:(id)arg1 specifier:(id)arg2;
- (void)setSoundEffects:(id)arg1 specifier:(id)arg2;
- (BOOL)shouldDeferPushForSpecifierID:(id)arg1;
- (id)soundEffects:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateAssistantSpecifiers;
- (void)updateAutoLockSpecifier;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

