//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CMPocketStateDelegate-Protocol.h>
#import <SpringBoard/SBIdleTimerResetSource-Protocol.h>

@class CMPocketStateManager, DNDEventBehaviorResolutionService, NSString, SBBacklightController, SBLockScreenManager, SBLockStateAggregator;

@interface SBNCScreenController : NSObject <CMPocketStateDelegate, SBIdleTimerResetSource>
{
    BOOL _turnOnScreenForOutOfPocketEvent;
    unsigned int _powerAssertionID;
    SBBacklightController *_backlightController;
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    CMPocketStateManager *_pocketStateManager;
    NSString *_powerAssertionName;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property (strong, nonatomic) SBBacklightController *backlightController; // @synthesize backlightController=_backlightController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService; // @synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property (strong, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property (strong, nonatomic) CMPocketStateManager *pocketStateManager; // @synthesize pocketStateManager=_pocketStateManager;
@property (nonatomic) unsigned int powerAssertionID; // @synthesize powerAssertionID=_powerAssertionID;
@property (copy, nonatomic) NSString *powerAssertionName; // @synthesize powerAssertionName=_powerAssertionName;
@property (readonly) Class superclass;
@property (nonatomic) BOOL turnOnScreenForOutOfPocketEvent; // @synthesize turnOnScreenForOutOfPocketEvent=_turnOnScreenForOutOfPocketEvent;

- (void).cxx_destruct;
- (void)_cancelTurnOnScreenForOutOfPocketEvents;
- (void)_createOrResetPowerAssertionWithTimeout:(double)arg1;
- (BOOL)_isDeviceUILocked;
- (void)_releasePowerAssertion;
- (void)_turnOnScreen;
- (void)_turnOnScreenForOutOfPocketEventBeforeTimeInterval:(double)arg1;
- (void)_turnOnScreenForOutOfPocketEventIfNecessary;
- (void)_turnOnScreenForPocketMode;
- (BOOL)canTurnOnScreenForNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithBackLightController:(id)arg1 lockScreenManager:(id)arg2 lockStateAggregator:(id)arg3;
- (void)pocketStateManager:(id)arg1 didUpdateState:(long long)arg2;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
- (void)turnOnScreenForNotificationRequest:(id)arg1;
- (void)turnOnScreenIfPossibleForNotificationRequest:(id)arg1;

@end

