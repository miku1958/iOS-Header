//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipsDaemon/TPSDEventsProviderManagerDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, TPSEventsHistoryController, TPSEventsProviderManager, TPSTipStatusController;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate>
{
    long long _overrideHintMaxDisplayedCount;
    NSMutableDictionary *_contextualInfoMap;
    NSMutableSet *_registeredEventIdentifiers;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
    id<TPSDiscoverabilityControllerDelegate> _delegate;
    TPSTipStatusController *_tipStatusController;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSDictionary *contextualInfoMap; // @dynamic contextualInfoMap;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TPSDiscoverabilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;
@property (strong, nonatomic) TPSTipStatusController *tipStatusController; // @synthesize tipStatusController=_tipStatusController;

- (void).cxx_destruct;
- (void)_cleanupContextualInfoMap;
- (BOOL)_isConditionMet:(id)arg1 hasUpdates:(BOOL *)arg2 forIdentifier:(id)arg3;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)arg1 forObserverIdentifiers:(id)arg2 hasUpdates:(BOOL *)arg3;
- (void)_reconcileRegisteredEvents;
- (void)_registerWakingCallbackForContextualInfo:(id)arg1;
- (void)_removeCacheData;
- (void)_updateCacheData;
- (void)_updateContextualInfoMapCache;
- (void)_updateRegisteredEventIdentifiers;
- (BOOL)_updateTriggerConditionForObserverIdentifers:(id)arg1;
- (void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2;
- (void)contextualEligibilityWithTipIdentifiers:(id)arg1 tipsDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 experimentCampChangesToAll:(BOOL)arg4;
- (id)contextualInfoForIdentifier:(id)arg1;
- (long long)customizationIDForContentID:(id)arg1;
- (void)dataProviderManager:(id)arg1 didFinishQueryWithResults:(id)arg2 type:(long long)arg3;
- (void)dataProviderManager:(id)arg1 didReceiveCallbackWithResult:(id)arg2 type:(long long)arg3;
- (id)discoverabilityTipWithMetadata:(id)arg1 contentDictionary:(id)arg2 preconditions:(id)arg3;
- (id)dismissalEventsForContentID:(id)arg1;
- (id)dismissalEventsForContextualInfo:(id)arg1;
- (id)init;
- (id)initWithTipStatusController:(id)arg1;
- (BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)arg1;
- (BOOL)isContextualInfoExistForIdentifier:(id)arg1;
- (void)markHintIneligibleForIdentifiers:(id)arg1 bundleID:(id)arg2 context:(id)arg3 reason:(long long)arg4;
- (void)markHintIneligibleForIdentifiers:(id)arg1 context:(id)arg2 reason:(long long)arg3;
- (void)processEventProviderQueryResults:(id)arg1 type:(long long)arg2;
- (void)queryCurrentEvents;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)arg1;
- (void)updateContentViewedForIdentifier:(id)arg1;
- (BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)arg1;
- (void)updateHintDismissedForIdentifier:(id)arg1 dismissType:(id)arg2 context:(id)arg3;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)arg1 context:(id)arg2;

@end

