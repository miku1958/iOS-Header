//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKConceptStoreClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSString, NSUUID;

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface>
{
    HKObserverSet *_conceptObservers;
    struct os_unfair_lock_s _conceptIndexManagerStateLock;
    unsigned long long _lastKnownConceptIndexManagerState;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) unsigned long long currentConceptIndexerState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)conceptStore;
+ (id)serverInterface;
+ (id)taskServerIdentifier;
- (void).cxx_destruct;
- (void)_startTaskServerIfNeeded;
- (BOOL)breakAssociationFromSample:(id)arg1 toConcept:(id)arg2;
- (BOOL)cleanUpAfterUnitTest;
- (void)clientRemote_conceptIndexManagerDidChangeState:(unsigned long long)arg1;
- (id)conceptForIdentifier:(id)arg1 error:(id *)arg2;
- (void)connectionInvalidated;
- (long long)countOfConceptsAssociatedToUserRecordsWithError:(id *)arg1;
- (id)exportedInterface;
- (void)fetchConceptForIdentifier:(id)arg1 loadRelationships:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (BOOL)loadRelationshipsForConcept:(id)arg1 error:(id *)arg2;
- (BOOL)makeAssociationFromSample:(id)arg1 toConcept:(id)arg2;
- (id)ontologyVersionWithError:(id *)arg1;
- (void)registerAsConceptObserver:(id)arg1 onQueue:(id)arg2;
- (id)remoteInterface;
- (void)resetOntologyUsingAssetAtLocation:(id)arg1 rememberLocation:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterAsConceptObserver:(id)arg1 onQueue:(id)arg2;

@end

