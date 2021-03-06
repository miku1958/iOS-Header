//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>

@class CLGeocoder, CLLocationManager, NSHashTable, NSMutableArray, NSMutableSet, NSString, PKMerchantCategoryCodeMap, PKUsageNotificationServer;
@protocol OS_dispatch_source, PKPaymentTransactionProcessorDataSource;

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate>
{
    struct os_unfair_lock_s _itemsLock;
    NSMutableSet *_locationUpdateItems;
    NSMutableSet *_backgroundLocationUpdateItems;
    NSMutableArray *_reverseGeocodeItems;
    NSMutableSet *_stationsUpdateItems;
    NSMutableArray *_merchantCleanupItems;
    CLLocationManager *_locationManager;
    CLLocationManager *_backgroundMerchantLocationManager;
    CLGeocoder *_geocoder;
    NSObject<OS_dispatch_source> *_locationUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_backgroundLocationUpdateTimer;
    BOOL _active;
    BOOL _processingMerchantCleanupItems;
    PKMerchantCategoryCodeMap *_categoryCodeMap;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
    id<PKPaymentTransactionProcessorDataSource> _dataSource;
    PKUsageNotificationServer *_usageNotificationServer;
}

@property (readonly, nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (weak, nonatomic) id<PKPaymentTransactionProcessorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) PKUsageNotificationServer *usageNotificationServer; // @synthesize usageNotificationServer=_usageNotificationServer;

- (void).cxx_destruct;
- (void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;
- (void)_abortUpdatingLocationForAllLocationUpdateItems;
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)_beginMerchantCleanupIfPossible;
- (void)_beginProcessingPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 skipLocation:(BOOL)arg3;
- (void)_beginReverseGeocodingIfPossible;
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1;
- (void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)arg1 forTransactionSourceIdentifier:(id)arg2;
- (id)_pendingLocationUpdateItemForTransaction:(id)arg1;
- (id)_pendingMerchantCleanupItemForTransaction:(id)arg1;
- (id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1;
- (id)_pendingStationsUpdateItemForTransaction:(id)arg1;
- (void)_processForLocalMCCLookup:(id)arg1;
- (void)_processItemForMerchantCleanup:(id)arg1 clearingAttempt:(BOOL)arg2;
- (void)_processItemForStationsCleanup:(id)arg1;
- (void)_processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2;
- (void)_processPaymentTransactionForDemoMode:(id)arg1 forTransactionSourceIdentifier:(id)arg2;
- (void)_processPaymentTransactionForLocationUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2;
- (void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forTransactionSourceIdentifier:(id)arg2 clearingAttempt:(BOOL)arg3;
- (void)_processPaymentTransactionForStationsUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2;
- (void)_reportTransactionWithFinalLocation:(id)arg1;
- (void)_startUpdatingBackgroundLocationIfPossible;
- (void)_startUpdatingLocationIfPossible;
- (void)_stopUpdatingLocationIfPossible;
- (void)_updateActiveState;
- (void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(BOOL)arg3;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

