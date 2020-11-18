//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <ActivityAchievementsDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDKeyValueDomain, HDProfile, NSError, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface ACHDataStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>
{
    BOOL _needsPopulationWhenProtectedDataAvailable;
    BOOL _hasCompletedFirstPopulateFromDatabase;
    BOOL _populatesValuesFromDatabase;
    NSString *_databaseIdentifier;
    HDProfile *_profile;
    HDKeyValueDomain *_defaultsDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSHashTable *_observers;
    NSError *_injectedError;
    CDUnknownBlockType _populationCompleteBlock;
    NSHashTable *_propertyProviders;
}

@property (copy, nonatomic) NSString *databaseIdentifier; // @synthesize databaseIdentifier=_databaseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HDKeyValueDomain *defaultsDomain; // @synthesize defaultsDomain=_defaultsDomain;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompletedFirstPopulateFromDatabase; // @synthesize hasCompletedFirstPopulateFromDatabase=_hasCompletedFirstPopulateFromDatabase;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSError *injectedError; // @synthesize injectedError=_injectedError;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (nonatomic) BOOL needsPopulationWhenProtectedDataAvailable; // @synthesize needsPopulationWhenProtectedDataAvailable=_needsPopulationWhenProtectedDataAvailable;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property (strong, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (nonatomic) BOOL populatesValuesFromDatabase; // @synthesize populatesValuesFromDatabase=_populatesValuesFromDatabase;
@property (copy, nonatomic) CDUnknownBlockType populationCompleteBlock; // @synthesize populationCompleteBlock=_populationCompleteBlock;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSHashTable *propertyProviders; // @synthesize propertyProviders=_propertyProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_forceDatabasePopulate;
- (void)_injectError:(id)arg1;
- (id)_queue_allPropertyProviderKeys;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (BOOL)_queue_populateAllPropertiesFromDatabase;
- (BOOL)_queue_populateFromDatabaseForProviders:(id)arg1 error:(id *)arg2;
- (BOOL)_queue_setDatabaseIdentifier:(id)arg1 error:(id *)arg2;
- (void)_syncEntityDidReceiveValues:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPropertyProvider:(id)arg1;
- (BOOL)clearAllPropertiesWithError:(id *)arg1 databaseContext:(id)arg2;
- (void)commitAllPropertiesToDatabaseWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (id)initWithProfile:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
