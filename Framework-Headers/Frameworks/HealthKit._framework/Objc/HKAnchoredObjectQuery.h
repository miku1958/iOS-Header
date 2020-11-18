//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKAnchoredObjectQueryClientInterface-Protocol.h>

@class HKQueryAnchor, NSMutableArray, NSString;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface>
{
    BOOL _initialHandlerCalled;
    NSMutableArray *_samplesPendingDelivery;
    NSMutableArray *_deletedObjectsPendingDelivery;
    _Atomic BOOL _includeDeletedObjects;
    BOOL _includeAutomaticTimeZones;
    CDUnknownBlockType _updateHandler;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    double _collectionInterval;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property (nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreDeletedObjects;
@property (nonatomic) BOOL includeAutomaticTimeZones; // @synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;
- (void).cxx_destruct;
- (void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 query:(id)arg6;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
