//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBVolumePressBandit-Protocol.h>
#import <SpringBoard/SOSManagerClientObserver-Protocol.h>

@class BSTimer, NSMutableSet, NSString, SBClawGestureLogger, SBMainWorkspace, SBSOSDefaults, SOSManager;
@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit>
{
    SOSManager *_sosManager;
    SBMainWorkspace *_workspace;
    BOOL _sosEnabled;
    BOOL _wasSOSTiggeredByClaw;
    NSMutableSet *_activePressTypes;
    SBClawGestureLogger *_clawGestureLogger;
    id<SBSOSClawGestureObserverDelegate> _delegate;
    SBSOSDefaults *_sosDefaults;
    BSTimer *_sosTriggerTimer;
}

@property (strong, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
@property (readonly, nonatomic, getter=_isAutomaticCallCountdownEnabled) BOOL autoCallCountdownEnabled;
@property (readonly, nonatomic, getter=isClawActivated) BOOL clawActivated;
@property (readonly, nonatomic, getter=_isClawGestureActive) BOOL clawGestureActive;
@property (strong, nonatomic) SBClawGestureLogger *clawGestureLogger; // @synthesize clawGestureLogger=_clawGestureLogger;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSOSClawGestureObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_isSOSActivated) BOOL sosActivated;
@property (strong, nonatomic, setter=_setSOSDefaults:) SBSOSDefaults *sosDefaults; // @synthesize sosDefaults=_sosDefaults;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled; // @synthesize sosEnabled=_sosEnabled;
@property (strong, nonatomic) BSTimer *sosTriggerTimer; // @synthesize sosTriggerTimer=_sosTriggerTimer;
@property (readonly) Class superclass;
@property (nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) BOOL wasSOSTiggeredByClaw; // @synthesize wasSOSTiggeredByClaw=_wasSOSTiggeredByClaw;

- (void).cxx_destruct;
- (void)_cancelSOSActivity;
- (id)_initWithSOSManager:(id)arg1 workspace:(id)arg2;
- (void)_presentSOSInterface;
- (void)dealloc;
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (void)noteButtonPress:(long long)arg1 isDown:(BOOL)arg2;
- (void)noteGestureReset;

@end
