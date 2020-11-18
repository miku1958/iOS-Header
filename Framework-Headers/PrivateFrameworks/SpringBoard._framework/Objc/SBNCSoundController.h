//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DNDEventBehaviorResolutionService, NSMutableDictionary, NSMutableSet, SBLockScreenManager, SBLockStateAggregator;

@interface SBNCSoundController : NSObject
{
    SBLockScreenManager *_lockScreenManager;
    SBLockStateAggregator *_lockStateAggregator;
    NSMutableDictionary *_playingSounds;
    NSMutableSet *_requestsRequiringExplicitKill;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property (strong, nonatomic) DNDEventBehaviorResolutionService *dndEventBehaviorResolutionService; // @synthesize dndEventBehaviorResolutionService=_dndEventBehaviorResolutionService;
@property (strong, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property (strong, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property (strong, nonatomic) NSMutableDictionary *playingSounds; // @synthesize playingSounds=_playingSounds;
@property (strong, nonatomic) NSMutableSet *requestsRequiringExplicitKill; // @synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill;

- (void).cxx_destruct;
- (void)_hardwareButtonPressed:(id)arg1;
- (BOOL)_isDeviceUILocked;
- (void)_killSounds;
- (void)_lockStateChanged:(id)arg1;
- (BOOL)canPlaySoundForNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2;
- (void)playSoundForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)playSoundIfPossibleForNotificationRequest:(id)arg1 presentingDestination:(id)arg2;
- (void)stopSoundForNotificationRequest:(id)arg1;

@end
