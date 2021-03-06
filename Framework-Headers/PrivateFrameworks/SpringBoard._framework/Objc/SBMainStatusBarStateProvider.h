//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBStatusBarStateProvider.h>

#import <SpringBoard/UIStatusBarStateObserver-Protocol.h>

@class NSCountedSet, NSHashTable, NSString, SBSStatusBarStyleOverridesAssertion;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    BOOL _overridePercent;
    BOOL _killActivity;
    BOOL _simulateInCallStatusBar;
    SBSStatusBarStyleOverridesAssertion *_inCallStatusBarStyleOverrideAssertion;
    BOOL _itemIsDisabled[43];
    BOOL _itemWasDisabled[43];
    NSCountedSet *_itemDisabledRequests[43];
    NSCountedSet *_dataUpdateAnimationsDisabledRequests;
    BOOL _timeEnabled;
    BOOL _statusBarTimeRequiresUpdate;
    BOOL _timeCloaked;
    BOOL _allButBatteryCloaked;
    BOOL _telephonyAndBluetoothCloaked;
    NSHashTable *_contentAssertions;
}

@property (strong, nonatomic) NSHashTable *contentAssertions; // @synthesize contentAssertions=_contentAssertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_composePostDataFromAggregatorData:(CDStruct_3fd7985f *)arg1;
- (void)_enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 immediately:(BOOL)arg4;
- (id)_identifierForStateAggregator:(id)arg1;
- (void)_removeInCallStatusBarOverrideAssertion;
- (BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const CDStruct_3fd7985f *)arg3 lastPost:(const CDStruct_3fd7985f *)arg4;
- (void)_toggleSimulatesInCallStatusBar;
- (void)_updateDisabledItems;
- (void)acquireContentAssertion:(id)arg1;
- (BOOL)contentAssertionsWantTimeEnabledAnimated:(inout BOOL *)arg1 duration:(inout double *)arg2;
- (void)dealloc;
- (void)didUpdateContentAssertion:(id)arg1;
- (void)disableDataUpdateAnimationsForRequestor:(id)arg1;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)enableTime:(BOOL)arg1;
- (void)enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3;
- (void)forceUpdateLocalStatusBarData;
- (id)init;
- (BOOL)isTimeEnabled;
- (void)relinquishContentAssertion:(id)arg1;
- (void)setAllItemsExceptBatteryCloaked:(BOOL)arg1;
- (void)setTelephonyAndBluetoothItemsCloaked:(BOOL)arg1;
- (void)setTimeCloaked:(BOOL)arg1;
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_3fd7985f *)arg2 withActions:(int)arg3;
- (void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1;
- (void)updateTimeEnabled;
- (void)updateTimeEnabledImmediately:(BOOL)arg1;

@end

