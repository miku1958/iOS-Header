//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>
#import <Home/HFLightProfileValueSource-Protocol.h>

@class HFCharacteristicReadLogger, HFCharacteristicValueCacheManager, HFCharacteristicValueTransaction, NACancelationToken, NAFuture, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet, NSString;
@protocol HFCharacteristicOperationContextProviding, HFCharacteristicValueReader, HFCharacteristicValueWriter;

@interface HFCharacteristicValueManager : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource>
{
    id<HFCharacteristicValueReader> _valueReader;
    id<HFCharacteristicValueWriter> _valueWriter;
    long long __debug_totalNumberOfIssuedBatchReadRequests;
    HFCharacteristicValueTransaction *_openTransaction;
    NSMutableArray *_runningTransactions;
    NSMutableArray *_readTransactionsToExecuteOnNextRunLoop;
    NSMutableArray *_completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
    NSRecursiveLock *_transactionLock;
    NSMutableSet *_mutableAllReadCharacteristics;
    NSMutableSet *_characteristicsWithCachedValues;
    NSMutableDictionary *_cachedReadErrorsKeyedByCharacteristicIdentifier;
    NSMutableDictionary *_cachedWriteErrorsKeyedByCharacteristicIdentifier;
    NSMutableDictionary *_cachedExecutionErrorsKeyedByActionSetIdentifier;
    HFCharacteristicValueCacheManager *_cacheManager;
    NACancelationToken *_inFlightReadCancelationToken;
    HFCharacteristicReadLogger *_readsCompleteLogger;
    NAFuture *_firstReadCompleteFuture;
}

@property (nonatomic) long long _debug_totalNumberOfIssuedBatchReadRequests; // @synthesize _debug_totalNumberOfIssuedBatchReadRequests=__debug_totalNumberOfIssuedBatchReadRequests;
@property (readonly, copy, nonatomic) NSSet *allReadCharacteristics;
@property (strong, nonatomic) HFCharacteristicValueCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property (strong, nonatomic) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier; // @synthesize cachedExecutionErrorsKeyedByActionSetIdentifier=_cachedExecutionErrorsKeyedByActionSetIdentifier;
@property (strong, nonatomic) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier; // @synthesize cachedReadErrorsKeyedByCharacteristicIdentifier=_cachedReadErrorsKeyedByCharacteristicIdentifier;
@property (strong, nonatomic) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier; // @synthesize cachedWriteErrorsKeyedByCharacteristicIdentifier=_cachedWriteErrorsKeyedByCharacteristicIdentifier;
@property (strong, nonatomic) NSMutableSet *characteristicsWithCachedValues; // @synthesize characteristicsWithCachedValues=_characteristicsWithCachedValues;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingReads;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingWrites;
@property (strong, nonatomic) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop; // @synthesize completionHandlersForReadTransactionsToExecuteOnNextRunLoop=_completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NAFuture *firstReadCompleteFuture; // @synthesize firstReadCompleteFuture=_firstReadCompleteFuture;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NACancelationToken *inFlightReadCancelationToken; // @synthesize inFlightReadCancelationToken=_inFlightReadCancelationToken;
@property (strong, nonatomic) NSMutableSet *mutableAllReadCharacteristics; // @synthesize mutableAllReadCharacteristics=_mutableAllReadCharacteristics;
@property (strong, nonatomic) HFCharacteristicValueTransaction *openTransaction; // @synthesize openTransaction=_openTransaction;
@property (strong, nonatomic) NSMutableArray *readTransactionsToExecuteOnNextRunLoop; // @synthesize readTransactionsToExecuteOnNextRunLoop=_readTransactionsToExecuteOnNextRunLoop;
@property (strong, nonatomic) HFCharacteristicReadLogger *readsCompleteLogger; // @synthesize readsCompleteLogger=_readsCompleteLogger;
@property (strong, nonatomic) NSMutableArray *runningTransactions; // @synthesize runningTransactions=_runningTransactions;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSRecursiveLock *transactionLock; // @synthesize transactionLock=_transactionLock;
@property (strong, nonatomic) id<HFCharacteristicValueReader> valueReader; // @synthesize valueReader=_valueReader;
@property (strong, nonatomic) id<HFCharacteristicValueWriter> valueWriter; // @synthesize valueWriter=_valueWriter;

+ (BOOL)_shouldTrackReadsCompleteForPerformanceTesting;
+ (id)na_identity;
- (void).cxx_destruct;
- (void)_beginReadsCompleteTrackingForCharacteristics:(id)arg1 withLogger:(id)arg2;
- (void)_endReadsCompleteTrackingForCharacteristic:(id)arg1 withLogger:(id)arg2 didRead:(BOOL)arg3;
- (id)_openTransactionCompletionFuture;
- (id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)arg1 includeDirectWrites:(BOOL)arg2 includeActionSets:(BOOL)arg3 includeActions:(BOOL)arg4;
- (void)_transactionLock_executeActionSetTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionLock_executeActionsTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionLock_executeReadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_transactionLock_executeWriteTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedErrorForExecutionOfActionSet:(id)arg1;
- (id)cachedErrorForWriteToCharacteristic:(id)arg1;
- (id)cachedReadErrorForCharacteristic:(id)arg1;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)cancelInFlightReadRequests;
- (void)commitTransactionWithReason:(id)arg1;
- (id)executeActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)executeActions:(id)arg1;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasCachedReadErrorForAccessory:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)initWithValueReader:(id)arg1 valueWriter:(id)arg2;
- (void)invalidateAllCachedErrors;
- (void)invalidateCachedErrorForExecutionOfActionSet:(id)arg1;
- (void)invalidateCachedValueForCharacteristic:(id)arg1;
- (void)invalidateCachedValuesForAccessory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNaturalLightingEnabledForProfile:(id)arg1;
- (BOOL)isNaturalLightingSupportedForProfile:(id)arg1;
- (unsigned long long)loadingStateForCharacteristics:(id)arg1 actionSets:(id)arg2;
- (id)readValueForCharacteristic:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicsPassingTest:(CDUnknownBlockType)arg1 inServices:(id)arg2;
- (id)writeNaturalLightEnabledState:(BOOL)arg1 forProfile:(id)arg2;
- (id)writeValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
