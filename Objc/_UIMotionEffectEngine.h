//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIMotionEffectEventConsumer-Protocol.h>

@class CADisplayLink, NSArray, NSMapTable, NSMutableSet, NSString, _UIAssociationTable, _UILazyMapTable, _UIMotionEffectEngineLogger, _UIMotionEffectEvent, _UIMotionEffectEventProvider;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngine : NSObject <_UIMotionEffectEventConsumer>
{
    _UIAssociationTable *_effectViewAssociationTable;
    _UILazyMapTable *_analyzerSettingsToAnalyzers;
    NSMapTable *_analyzersToEffects;
    NSMapTable *_suspendedViewsToEffectSets;
    _UIMotionEffectEventProvider *_eventProvider;
    BOOL _hasReceivedAtLeastOneEventSinceStarting;
    _UIMotionEffectEvent *_pendingEvent;
    int _pendingEventLock;
    CADisplayLink *_displayLink;
    BOOL _generatingUpdates;
    NSMutableSet *_suspendReasons;
    _UIMotionEffectEvent *_lastEvent;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    long long _eventProviderStatus;
    BOOL _allAnalyzersAreCentered;
    BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL _isPendingReset;
    _UIMotionEffectEngineLogger *_motionLogger;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}

@property (nonatomic, setter=_setTargetInterfaceOrientation:) long long _targetInterfaceOrientation; // @synthesize _targetInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *suspensionReasons;

+ (Class)_analyzerClass;
+ (Class)_eventProviderClass;
+ (BOOL)_motionEffectsEnabled;
+ (BOOL)_motionEffectsSupported;
- (void).cxx_destruct;
- (void)_applyEffectsFromAnalyzer:(id)arg1;
- (void)_handleLatestDeviceMotion;
- (BOOL)_hasMotionEffectsForView:(id)arg1;
- (BOOL)_isSuspended;
- (BOOL)_motionEffect:(id)arg1 belongsToView:(id)arg2;
- (BOOL)_motionEffectsAreSuspendedForView:(id)arg1;
- (id)_motionEffectsForView:(id)arg1;
- (BOOL)_shouldGenerateUpdates;
- (void)_startGeneratingUpdates;
- (void)_startOrStopGeneratingUpdates;
- (void)_stopGeneratingUpdates;
- (void)_toggleSlowUpdates;
- (void)_unapplyAllEffects;
- (void)_unregisterAllMotionEffectsForView:(id)arg1;
- (void)_unregisterMotionEffect:(id)arg1 fromView:(id)arg2;
- (void)_updateDisplayLinkInterval;
- (void)beginApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)beginSuspendingForReason:(id)arg1;
- (void)beginSuspendingMotionEffectsForView:(id)arg1;
- (void)dealloc;
- (void)endApplyingMotionEffect:(id)arg1 toView:(id)arg2;
- (void)endSuspendingForReason:(id)arg1;
- (void)endSuspendingMotionEffectsForView:(id)arg1;
- (id)init;
- (void)resetMotionAnalysis;
- (void)updateEventProviderStatus:(long long)arg1;
- (void)updateWithEvent:(id)arg1;

@end

