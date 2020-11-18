//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxyDelegate-Protocol.h>

@class GEOABAssignmentResponse, NSMutableArray, NSString;
@protocol GEOExperimentServerProxy;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate>
{
    id<GEOExperimentServerProxy> _serverProxy;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s _experimentsInfoLock;
    NSMutableArray *_experimentObservers;
    struct os_unfair_lock_s _experimentObserversLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConfiguration;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (id)_debug_bucketId;
- (id)_debug_configurationDate;
- (id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_datasetId;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (void)_debug_forEachExperimentType:(CDUnknownBlockType)arg1;
- (void)_debug_forceUpdate;
- (void)_debug_setActiveExperimentBranch:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_fetchAllAvailableExperimentsResponse:(CDUnknownBlockType)arg1;
- (id)_mapsAbClientMetadata;
- (id)_parsecClientMetadata;
- (id)_reportAProblemClientMetadata;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (id)_siriClientMetadata;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)abAssignUUIDWithSyncCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addExperimentObserver:(id)arg1 queue:(id)arg2;
- (id)clientConfig;
- (id)clientConfigurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)experimentAssignments;
- (id)experimentURLForURL:(id)arg1 requestKind:(CDStruct_d1a7ebee)arg2;
- (id)init;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)removeExperimentObserver:(id)arg1;
- (void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2;
- (void)updateURLComponents:(id)arg1 forRequestKind:(CDStruct_d1a7ebee)arg2;

@end
