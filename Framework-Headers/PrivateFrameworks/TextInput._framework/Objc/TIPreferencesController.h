//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/TIPreferencesControllerActions-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSTimer;

@interface TIPreferencesController : NSObject <TIPreferencesControllerActions>
{
    NSMutableDictionary *_configuredDomains;
    NSMutableDictionary *_configuredPreferences;
    NSTimer *_synchronizePreferencesTimer;
    double _lastSynchronizePreferencesTime[5];
    BOOL isInternalInstall;
    BOOL _inhibitGlobalNotification;
    BOOL _ignoreNextSyncNotification;
}

@property (nonatomic) BOOL automaticMinimizationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreNextSyncNotification; // @synthesize ignoreNextSyncNotification=_ignoreNextSyncNotification;
@property (nonatomic) BOOL inhibitGlobalNotification; // @synthesize inhibitGlobalNotification=_inhibitGlobalNotification;
@property (copy, nonatomic) NSArray *inputModeSelectionSequence;
@property (nonatomic) BOOL isInternalInstall; // @synthesize isInternalInstall;
@property (nonatomic) struct CGPoint keyboardPosition;
@property (nonatomic) BOOL keyboardShownByTouch;
@property (nonatomic) BOOL predictionEnabled;
@property (readonly) Class superclass;

+ (void)registerPreferredLanguagesForInputModes:(id)arg1 replacingInputModes:(id)arg2;
+ (id)sharedPreferencesController;
- (int)MCValueForManagedPreferenceKey:(id)arg1;
- (void)_configureDomain:(id)arg1 notification:(id)arg2;
- (void)_configureDomains;
- (void)_configureKey:(id)arg1 domain:(id)arg2 defaultValue:(id)arg3;
- (void)_configurePreferences;
- (BOOL)_isOneTimeAction:(id)arg1;
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;
- (BOOL)allEnabledInputModesAreValid;
- (BOOL)boolForKey:(int)arg1;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (void)clearSynchronizePreferencesTimer;
- (void)dealloc;
- (void)didSeeHardwareKeyboard:(id)arg1;
- (void)didTriggerOneTimeAction:(id)arg1;
- (void)didUnseeHardwareKeyboard:(id)arg1;
- (id)init;
- (BOOL)isKeyLockedDown:(int)arg1;
- (BOOL)isPreferenceKeyLockedDown:(id)arg1;
- (void)managedKeyboardSettingDidChange:(id)arg1;
- (BOOL)oneTimeActionCompleted:(id)arg1;
- (void)performWithWriteability:(BOOL)arg1 operations:(CDUnknownBlockType)arg2;
- (void)preferencesChangedCallback:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)setValue:(id)arg1 forManagedPreferenceKey:(id)arg2;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)synchronizeDomainIfNeedsGet:(id)arg1;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (void)updateDidPerformFirstReachableKeyboardInteraction;
- (void)updateEnabledDictationLanguages:(id)arg1;
- (void)updateEnabledDictationLanguagesForInputModes:(id)arg1;
- (void)updateInputModes:(id)arg1;
- (void)updateKeyboardHandBias:(id)arg1;
- (void)updateKeyboardIsFloating:(BOOL)arg1;
- (void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
- (void)updateLastUsedDictationLanguages:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)updateLastUsedKeyboards:(id)arg1;
- (void)updateLastUsedLayout:(id)arg1;
- (id)valueForKey:(int)arg1;
- (id)valueForPreferenceKey:(id)arg1;

@end
