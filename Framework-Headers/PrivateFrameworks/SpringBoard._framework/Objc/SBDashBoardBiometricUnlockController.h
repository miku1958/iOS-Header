//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehavior-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehaviorConfigurationDelegate-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehaviorDelegate-Protocol.h>

@class CSCoverSheetViewController, NSString;
@protocol SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfiguration, SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardBiometricUnlockController : NSObject <SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehaviorConfigurationDelegate, CSExternalEventHandling, SBBiometricUnlockBehavior>
{
    CSCoverSheetViewController *_coverSheetViewController;
    id<SBBiometricUnlockBehaviorConfiguration> _biometricUnlockBehaviorConfiguration;
    id<SBBiometricUnlockBehavior> _biometricUnlockBehavior;
    id<SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
}

@property (weak, nonatomic) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate; // @synthesize biometricUnlockBehaviorDelegate=_biometricUnlockBehaviorDelegate;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mesaUnlockBehavior;
- (BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1;
- (void)conformsToCSEventHandling;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)fillRestToOpenWithDuration:(double)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (BOOL)handleEvent:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (BOOL)isLockScreenShowingDefaultContent;
- (BOOL)isRestToOpenAvailable;
- (int)lockScreenWakeSource;
- (void)noteLockButtonDown;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;
- (void)resetRestToOpen;
- (void)setAuthenticated:(BOOL)arg1;
- (void)startRestToOpenCoachingWithCompletion:(CDUnknownBlockType)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)wouldHandleButtonEvent:(id)arg1;

@end

