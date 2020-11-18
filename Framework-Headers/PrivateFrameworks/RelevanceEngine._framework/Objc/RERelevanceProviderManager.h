//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceProviderManagerProperties-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSString, REFeatureSet, REPriorityQueue, RERelevanceProviderEnvironment, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceProviderManager : NSObject <RERelevanceProviderManagerProperties>
{
    RERelevanceProviderEnvironment *_environment;
    NSHashTable *_providers;
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    NSArray *_effectiveFeatures;
    NSDictionary *_inflectionValues;
    BOOL _dataStoresOpened;
    BOOL _hasSeperateRelevanceQueue;
    BOOL _implementsPrepareForUpdate;
    NSObject<OS_dispatch_queue> *_relevanceQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_loggingHeader;
    REFeatureSet *_supportedFeatures;
}

@property (readonly, nonatomic) NSArray *allProviders;
@property (readonly, nonatomic) NSArray *allRelevanceProviders;
@property (readonly, nonatomic) BOOL dataSourcesOpened;
@property (readonly, nonatomic) NSArray *effectiveFeatures;
@property (weak, nonatomic) RERelevanceProviderEnvironment *environment;
@property (readonly, nonatomic) unsigned long long scheduledUpdatesCount;
@property (strong, nonatomic) REFeatureSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;

+ (id)_dependencyClasses;
+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_requiresLocationServices;
+ (BOOL)_supportsHistoricProviders;
+ (BOOL)_wantsDelayedUpdate;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)providerManagerClasses;
+ (void)setProviderManagerClassesLoadingBlock:(CDUnknownBlockType)arg1;
+ (BOOL)supportsHistoricProviders;
- (void).cxx_destruct;
- (void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)arg1;
- (void)_accessQueue_performImmediateUpdate:(id)arg1;
- (void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;
- (void)_accessQueue_performUpdate:(id)arg1;
- (void)_accessQueue_resetTimer;
- (void)_accessQueue_scheduleUpdate:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (void)_closeDataStoresAndObserveChanges;
- (BOOL)_dataSourcesOpened;
- (void)_enumerateProviders:(CDUnknownBlockType)arg1;
- (void)_handleSignificantTimeChange;
- (BOOL)_isHistoricProvider:(id)arg1;
- (BOOL)_isValidProvider:(id)arg1;
- (void)_loadLoggingHeader;
- (id)_manager_queue;
- (void)_openDataStoresAndObserveChanges;
- (void)_prepareForUpdate;
- (void)_prepareForUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)_relevanceQueue_openDataStores;
- (void)_removeAllPendingUpdates;
- (void)_removeProvider:(id)arg1;
- (void)_scheduleUpdate:(id)arg1;
- (id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;
- (void)addProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginActivity:(id)arg1;
- (void)beginFetchingData;
- (BOOL)containsProvider:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)endActivity:(id)arg1;
- (void)enumerateInflectionFeatureValues:(CDUnknownBlockType)arg1;
- (void)finishFetchingData;
- (unsigned long long)hash;
- (id)initWithQueue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)isProviderHistoric:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)relevanceForHistoricProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)relevanceForProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)relevanceForProvider:(id)arg1 context:(id)arg2;
- (void)removeProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resume;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;

@end
